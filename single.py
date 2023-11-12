import os,re

# Initialize an empty string for the mono repo content
mono_repo_content = ""

# Walk through the src directory
for root, dirs, files in os.walk("src"):
    # Skip the faces directory
    if "faces" in dirs:
        dirs.remove("faces")

    for file in files:
        # Skip heap.h and heap.c
        if file in ["heap.h", "heap.c"]:
            continue
        #  Add the file name as a c comment to the mono repo content before the file content
        mono_repo_content += "/* " + file + " */\n"
        # Process .h and .c files
        if file.endswith((".h", ".c")):
            with open(os.path.join(root, file), "r") as f:
                file_content = f.read()

            # Replace enums
            file_content = file_content.replace("SUCCESS", "0")
            file_content = file_content.replace("#endif", "0")
            # Add other enum replacements here
            # An enum is a variable that is completely written in capital letters, and is of size >= 4
            file_content = re.sub(r'([A-Z_]{4,})', r'"\1"', file_content)

            # Remove #include statements and #ifndef directives
            # This is a simple replacement and might not cover all cases
            file_content = re.sub(r'#include[ ]*<.*>', '', file_content)
            file_content = re.sub(r'#include[ ]*".*"', '', file_content)
            file_content = re.sub(r'#ifndef.*', '', file_content)
            # file_content = file_content.replace("#ifndef", "")

            # Append the file content to the mono repo content
            mono_repo_content += file_content + "\n"

# Now, write the prototypes of all the functions at the start of the mono repo content
# This is done to avoid any compilation errors
# Example of a function prototype: int add(int, int); or int add(int a, int b); or char *add(char *a, int b);
import re
data_types = ["void", "int", "char", "float", "double", "long", "short", "unsigned", "signed", "int *", "char *", "float *", "double *", "long *", "short *", "unsigned *", "signed *"]
# first get regex of a function, and the n extract the function name and arguments to get the prototype
# A function is like datatype function_name(arguments) { ... // here the { is required, else it will match the first closing bracket
# A function prototype is like datatype function_name(arguments);
regex_func = r'(' + r'|'.join(data_types) + r') ([a-zA-Z_][a-zA-Z0-9_]*)\((.*)\)\s*{'
# Now the { can also be there on next line, so we need to match that too
# regex_func= r'(' + r'|'.join(data_types) + r') ([a-zA-Z_][a-zA-Z0-9_]*)\((.*)\)\s*[\n\s*]?{'
regex = re.compile(regex_func)
for root, dirs, files in os.walk("src"):
    for file in files:
        if file.endswith((".h", ".c")):
            with open(os.path.join(root, file), "r") as f:
                file_content = f.read()
            for match in regex.finditer(file_content):

                # Get the function name and arguments
                function_name = match.group(2)
                arguments = match.group(3)

                # Remove the function body
                file_content = file_content.replace(match.group(0), "")

                # Append the function prototype to the mono repo content at the start
                mono_repo_content = match.group(0) + ";\n" + mono_repo_content
# mono_repo_content = mono_repo_content.replace('{;', ';' )
mono_repo_content = re.sub(r'(.|\n)\{;', ';', mono_repo_content)










# Write the mono repo content to a new file
with open("src/mono_repo.c", "w") as f:
    f.write(mono_repo_content)