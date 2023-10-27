from PIL import Image

# Function to convert a line of text to grayscale values
def text_to_grayscale(line):
    return [0 if char == ' ' else 255 for char in line]

# Define the input and output file paths
input_file = '../mem_vis/memory_out.txt'
output_image = 'memory.png'

# Read the content from line1 to line2
line1 = 1280  # actual: 1280 but to see clearly we are using 1270
line2 = 1792  # Adjust this to the desired range

# Read the lines within the specified range
lines = []
with open(input_file, 'r') as file:
    for i, line in enumerate(file, start=1):
        if i >= line1 and i <= line2:
            line = line.replace('\n', '')
            lines.append(line)  # Remove trailing newline characters

width = len(lines[0])
height = len(lines)

# Create a blank grayscale image
image = Image.new('L', (width, height))

pixels = [text_to_grayscale(line) for line in lines]
flattened_data = [pixel for row in pixels for pixel in row]
# image.putdata(flattened_data)
# To avoid the error: TypeError: too many data entries
# we use the below method
# remove uniform rows using mod so that the final size is width*height
l = len(flattened_data)
reql = width*height
r = l//reql
# flattened_data = [e for i, e in enumerate(flattened_data) if i%r == 0]
# if len(flattened_data) > width*height:
#     print('ERROR: ', len(flattened_data), width*height)
#     flattened_data = flattened_data[:width*height]
image.putdata(flattened_data)
# But this will not show the complete image
# So we need to increase the size of the image
# We can do this by increasing the height of the image




# Save the grayscale image
image.save(output_image)

# print(f"Grayscale image saved to {output_image}")
print("Grayscale image saved to {}".format(output_image))
