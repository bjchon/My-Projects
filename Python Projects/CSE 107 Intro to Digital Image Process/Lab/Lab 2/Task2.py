#import pillow
from PIL import Image, ImageOps
#import numpy
import numpy as np
from numpy import asarray
import MyImageFunctions

# open a image from path
im = Image.open('Watertower.tif')
print("image mode is: ", im.mode)


# show the image
im.show()

#get pixel values
im_gray_pixels = asarray(im)

# invert original image, save/open image
inverse = MyImageFunctions.myImageInverse(im_gray_pixels)
data = Image.fromarray(inverse)
data_path = 'im_inverse.tif'
data.save('im_inverse.tif')
im = Image.open('im_inverse.tif')

# show the image
im.show()

# get pixels of inverted image
im_inverse_pixels = asarray(im)

# initialize rows cols max pixel variables
rows, cols = im_inverse_pixels.shape
current_Maxpixel_value = 0

# get all the pixel values using the index
for row in range(rows):
    for col in range(cols):
        if current_Maxpixel_value < im_inverse_pixels[row, col]:
            current_Maxpixel_value = im_inverse_pixels[row, col]
            
# print max pixel value
print("current max pixel value is: ", current_Maxpixel_value)

