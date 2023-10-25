from PIL import Image

# Function to convert a line of text to grayscale values
def text_to_grayscale(line):
    return [0 if char == ' ' else 255 for char in line]

# Define the input and output file paths
input_file = '../mem_vis/memory_out.txt'
output_image = 'memory.png'

# Read the content from line1 to line2
line1 = 1280  # Line numbering starts from 1
line2 = 2000  # Adjust this to the desired range

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
image.putdata([pixel for row in pixels for pixel in row])

# Save the grayscale image
image.save(output_image)

print(f"Grayscale image saved to {output_image}")
