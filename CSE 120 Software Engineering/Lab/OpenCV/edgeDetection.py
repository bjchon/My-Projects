import cv2
import numpy as np

original = cv2.imread("Beginnings.jpg")

# Read the original image
img = cv2.imread('Beginnings.jpg') 
# Display original image
cv2.imshow('Original', img)
 
# Convert to graycsale
img_gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
# Blur the image for better edge detection
img_blur = cv2.GaussianBlur(img_gray, (3,3), 0) 
 
# Canny Edge Detection
edges = cv2.Canny(image=img_blur, threshold1=100, threshold2=200) # Canny Edge Detection

# Display Canny Edge Detection Image
print("Number of edges: ", np.count_nonzero(edges))
cv2.imshow('Canny Edge Detection', edges)
cv2.waitKey(0)
 
cv2.destroyAllWindows()