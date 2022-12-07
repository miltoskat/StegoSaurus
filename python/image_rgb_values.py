from PIL import Image

def get_rgb_values(image_file):
    # Open the image file
    image = Image.open(image_file)

    # Get the width and height of the image
    width, height = image.size

    # Create an empty array to store the RGB and location values
    rgb_values = []

    # Iterate over the pixels in the image and add the RGB and location values to the array
    for x in range(width):
        for y in range(height):
            r, g, b = image.getpixel((x, y))
            rgb_values.append((x, y, r, g, b))

    # Return the array of RGB and location values
    return rgb_values
