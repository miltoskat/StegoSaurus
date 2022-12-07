from PIL import Image
from image_rgb_values import get_rgb_values

# Prompt the user for the name of the first image file
image_file1 = input('Enter the name of the first image file: ')

# Open the first image file
image1 = Image.open(image_file1)

# Get the RGB and location values for the first image
rgb_values1 = get_rgb_values(image1)

# Prompt the user for the name of the second image file
image_file2 = input('Enter the name of the second image file: ')

# Open the second image file
image2 = Image.open(image_file2)

# Get the RGB and location values for the second image
rgb_values2 = get_rgb_values(image2)

# Create an empty array to store the matching locations
matching_locations = []

# Iterate over the RGB and location values in the second image
for (x2, y2, r2, g2, b2) in rgb_values2:
    # Iterate over the RGB and location values in the first image
    for (x1, y1, r1, g1, b1) in rgb_values1:
        # If the RGB values match, store the location of the first image in the new array
        if (r1, g1, b1) == (r2, g2, b2):
            matching_locations.append((x1, y1))

# Print the array of matching locations
print(matching_locations)
