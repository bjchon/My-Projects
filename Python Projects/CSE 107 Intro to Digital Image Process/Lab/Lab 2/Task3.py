#import pillow
from PIL import Image, ImageOps
#import numpy
import numpy as np
from numpy import asarray

# initialize gray gradient variable
GrayGradient = np.empty([100,256], dtype = int)
rows , cols = GrayGradient.shape
val = 0

# create gradient array
for row in range(rows):
    for col in range(cols):
        GrayGradient[row, col] = val
        val += 1
        if val > 255:
            val = 0

# save/open/show image
data = Image.fromarray(GrayGradient)
data_path = 'im_GrayGradient.tif'
data.save('im_GrayGradient.tif')
im = Image.open('im_GrayGradient.tif')
im.show()

# get average pixel value, print value
val = 0
for row in range(1):
    for col in range(cols):
        val += GrayGradient[row, col]

#print avg pixel
print("The average pixel value is: ", val/256)
