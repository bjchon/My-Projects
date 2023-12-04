#import pillow
from PIL import Image, ImageOps
#impot numpy
import numpy as np
from numpy import asarray

# open a image from path
im = Image.open('Beginnings.jpg')

# show the image
im.show()

# convert image to grayscale, get path, save image
im_gray = ImageOps.grayscale(im)
im_gray_path = 'my_gray_beginnings.jpg'
im_gray.save(im_gray_path)

#show the image
im_gray.show()


# get pixel values, rows and cols
im_gray_pixels = asarray(Image.open(im_gray_path))
rows, cols = im_gray_pixels.shape
current_Maxpixel_value = 0

# get max pixel value 
for row in range(rows):
    for col in range(cols):
        if current_Maxpixel_value < im_gray_pixels[row, col]:
            current_Maxpixel_value = im_gray_pixels[row, col]
            
# print max pixel value
print("current max pixel value is: ", current_Maxpixel_value)

# initialize counterclock empty array, rows and cols for counterclock image, get rows and cols for original image
rowws = cols - 1
roww = rowws
coll = 0
rows, cols = im_gray_pixels.shape
counterclock = np.empty([cols,rows], dtype = int)

# rearrange pixels of original to counterclock image
for row in range(rows):
    for col in range(cols):
        counterclock[roww, coll] = im_gray_pixels[row,col]
        if roww >= 0:
            roww -= 1
        if roww == -1: 
            roww = rowws     
            coll += 1

# get pixel values, save/load image
data = Image.fromarray(counterclock)
data_path = 'im_gray_counterclock.png'
data.save('im_gray_counterclock.png')
im = Image.open('im_gray_counterclock.png')

# show the image
im.show()

# clockwise: initialize like counterclock
colls = rows - 1
rowws = cols - 1
roww = 0
coll = colls
rows, cols = im_gray_pixels.shape
clockwise = np.empty([cols,rows], dtype = int)

# rearrange pixel to create clockwise rotation
for row in range(rows):
    for col in range(cols):
        clockwise[roww, coll] = im_gray_pixels[row,col]
        if roww <= rowws:
            roww += 1         
        if roww > rowws:
            roww = 0
            coll -= 1
            
# get pixel values, save/load image
data = Image.fromarray(clockwise)
data_path = 'im_gray_clockwise.png'
data.save('im_gray_clockwise.png')
im = Image.open('im_gray_clockwise.png')

# show the image
im.show()

# get pixel values
im = asarray(Image.open('im_gray_clockwise.png'))
rows, cols = im.shape
current_Maxpixel_value = 0
# get all the pixel values using the index
for row in range(rows):
    for col in range(cols):
        if current_Maxpixel_value < im[row, col]:
            current_Maxpixel_value = im[row, col]
            
#print max pixel value            
print("current max pixel value for gray clockwise is: ", current_Maxpixel_value)

