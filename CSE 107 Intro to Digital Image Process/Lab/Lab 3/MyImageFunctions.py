# Import pillow
from PIL import Image, ImageOps

# Import numpy
import numpy as np
from numpy import asarray

#Import math for calculations
import math

#####################################################################################
# MyImageFunctions.py determines pixel values using nearest neighbor or bilinear    #
# interpolation.                                                                    #
#                                                                                   #
# def myImageResize, inputs: numpy matrix, # of rows, # of columns, string values   #
# 'nearest' or 'bilinear'. This function returns a resized numpy matrix.            #
#####################################################################################
def myImageResize(im,row,col,inter):
  #nearest neighbor interpolation
    if inter == 'nearest':
      #create empty numpy matrix
      target = np.empty([row,col], dtype = np.float32)
      # get get rows and cols of original image
      width, height = im.shape
      #for loop index through every value of return matrix
      for x in range(0, row):  
        for y in range(0, col):
          # Using ratios determine x and y values
          srcX = int( round( x / row * width ) )
          srcX = min( srcX, width-1)
          srcY = int( round( y / col * height ) )          
          srcY = min( srcY, height-1)
          #assign pixel value to return matrix
          target[x,y] = im[srcX, srcY]
      return target

  #bilinear interpolation
    if inter == 'bilinear':
      #create empty numpy matrix
      target = np.empty([row,col], dtype = np.float32)
      # get get rows and cols of original image
      width, height = im.shape
      #for loop index through every value of return matrix
      for x in range(0, row):  
        for y in range(0, col):
          # conditional variable initialization to prevents errors
          x1 = x - 1 if x > 0 else 0
          # Using ratios determine x values
          x11 = int( round( x1 / row * width ) )
          x11 = min( x11, width-1)
          # conditional variable initialization to prevents errors
          x2 = x + 1 if x < row else row - 1
          # Using ratios determine x values
          x22 = int( round( x2 / row * width ) )
          x22 = min( x22, width-1)
          x3 = x 
          # Using ratios determine x values
          x33 = int( round( x3 / row * width ) )
          x33 = min( x33, width-1)
          x4 = x
          # Using ratios determine x values
          x44 = int( round( x4 / row * width ) )
          x44 = min( x44, width-1)
          # conditional variable initialization to prevents errors
          y1 = y - 1 if y > 0 else 0
          # Using ratios determine y values
          y11 = int( round( y1 / col * height ) )
          y11 = min( y11, height-1)
          # conditional variable initialization to prevents errors
          y2 = y + 1 if y < col else col - 1
          # Using ratios determine y values
          y22 = int( round( y2 / col * height ) )
          y22 = min( y22, height-1)
          y3 = y
          # Using ratios determine y values
          y33 = int( round( y3 / col * height ) )
          y33 = min( y33, height-1)
          y4 = y
          # Using ratios determine y values
          y44 = int( round( y4 / col * height ) )
          y44 = min( y44, height-1)
          #Assign pixel value to the 4 nearest neighbors
          p1 = im[x11,y11]
          p2 = im[x22,y22]
          p3 = im[x33,y33]
          p4 = im[x44,y44]
          target[x,y] = mybilinear(x1,x2,x3,x4,y1,y2,y3,y4,p1,p2,p3,p4,x,y)
      return target

#####################################################################################
# def mybilinear inputs: 4 nearest neighbor pixel locations, 4 pixel values,        #
# interpolated pixel location(of return matrix)                                     #
# this function using bilinear interpolation determines a pixel value by using the 4# 
# nearest neighbors and returns that value                                          #
#####################################################################################
def mybilinear(x1,x2,x3,x4,y1,y2,y3,y4,p1,p2,p3,p4,x,y):
  # Calculate pixel value using bilinear interpolation
  p5 = p3-p1
  p5 = p5*(x-x1)
  a = x3-x1
  # Can't divide by 0, this prevents the error
  if a == 0:
    a = 1
  p5 = p5/a
  p5 = p5+p1

  p55 = p4-p2
  p55 = p55*(x-x2)
  a = x4-x2
  # Can't divide by 0, this prevents the error
  if a == 0:
    a = 1
  p55 = p55/a
  p55 = p55+p2

  p = p55-p5
  p = p*(y-y1)
  a = y2-y1
  # Can't divide by 0, this prevents the error
  if a == 0:
    a = 1
  p = p/a
  # Calculate pixel value using bilinear interpolation
  p = p + p5

  return p

#####################################################################################
# def myRMSE is a numeric method for computing the difference between two matrices. #
# It is commonly used to evaluate the effectiveness of image reconstruction         #
# algorithms by computing the pixelwise difference between the original and the     #
# reconstructed images.                                                             #
# inputs: numpy matrix of original image and numpy matrix of modified image         #
# This function calculates and returns the RMSE.                                    #
#####################################################################################
def myRMSE(orig,downup):
  row, col = orig.shape
  rmse = 0
  MN = 1/(row*col)

  for x in range(0, row-1):  
        for y in range(0, col-1):
          temp = orig[x,y] - downup[x,y]
          temp = temp*temp
          rmse = rmse + temp

  rmse = rmse*MN
  rmse = math.sqrt(rmse)

  return rmse