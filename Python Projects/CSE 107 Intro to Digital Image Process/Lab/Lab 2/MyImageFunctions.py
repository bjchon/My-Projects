#import pillow
from PIL import Image, ImageOps
#import numpy
import numpy as np
from numpy import asarray

# This function takes as input a numpy matrix representing a grayscale image and
# outputs another numpy matrix which is the image inverse of the input.
# That is, for each pixel, output_value = 255 - input_value
#
# Syntax:
# out_numpy_matrix = myImageInverse( in_numpy_matrix )
#
# Input:
# in_numpy_matrix = the grayscale values of the input image
#
# Output:
# out_numpy_matrix = the grayscale of the inverse image
#
# History:
# Bryant Chon 10/3/22 Created

def myImageInverse(inImage):
    rows, cols = inImage.shape
    inverse = np.empty([rows,cols], dtype = int)
    for row in range(rows):
        for col in range(cols):
            inverse[row, col] = 255 - inImage[row,col]

    return inverse