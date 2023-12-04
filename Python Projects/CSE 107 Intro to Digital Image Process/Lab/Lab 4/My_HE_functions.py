# MyHEFunctions.py

# Import numpy
import numpy as np

def compute_histogram( image_pixels ):
# compute_histogram Creates and returns a histogram of grayscale image
# Syntax: 
#   compute_histogram( image_pixels )
#
#Input:
#    image_pixels = numpy array of grayscale image
#
# Output:
#   normalized histogram
# History:
#   B. Chon     11/14/2022      created
    orig_im= image_pixels.ravel() #makes 2-d array into 1-d
    hist = np.zeros(shape=(256)) #creates numpy vector with length 256 and fills with zeros

    #fills numpy vector with values by incrementing when value found
    # the pixel value of origina image correlates as an index for vector
    for x in orig_im:
        hist[int(x)] += 1

    #divides every value in vector with the total # of elements
    norm_hist = hist/orig_im.shape[0]

    #returns the normalized histogram
    return norm_hist

def equalize( in_image_pixels ):
# equalize() Creates and returns a equalized version of grayscale image
# Syntax: 
#   equalize( in_image_pixels )
#
#Input:
#    in_image_pixels = numpy array of grayscale image
#
# Output:
#   equalized numpy array
# History:
#   B. Chon     11/14/2022      created
    temp = 0 #initialize temp variable
    norm_hist = compute_histogram(in_image_pixels) #create histogram of grayscale image
    eq_hist = np.zeros(shape=(256)) #creates numpy vector with length 256 and fills with zeros

    # creates dicrete form transformation vector by using given equation 
    for x in range (len(eq_hist)):
        if x == 0:
            y = int(norm_hist[x] * 255)
            eq_hist[x] = y
        if x > 0:
            if x == 1:
                temp == norm_hist[x-1]
            temp = temp + norm_hist[x]
            val = int(temp * 255)
            eq_hist[x] = val

    #initialize return numpy array
    eq_pixels = np.zeros(shape= (in_image_pixels.shape))
    row, col = eq_pixels.shape

    #transform pixel values of original image by replace pixel value recorded in transform vector
    for x in range(row):
        for y in range(col):
            index = in_image_pixels[x][y]
            val = eq_hist[int(index)]
            eq_pixels[x][y] = val

    # return equalized pixels
    return eq_pixels

def plot_histogram( hist ):
    # plot_histgram  Plots the length 256 numpy vector representing the normalized
    # histogram of a grayscale image.
    #
    # Syntax:
    #   plot_histogram( hist )
    #
    # Input:
    #   hist = The length 256 histogram vector..
    #
    # Output:
    #   none
    #
    # History:
    #   S. Newsam     10/23/2022   created

    # Import plotting functions from matplotlib.
    import matplotlib.pyplot as plt

    plt.bar( range(256), hist )

    plt.xlabel('intensity value');

    plt.ylabel('PMF'); 

    plt.show()
