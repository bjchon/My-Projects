import cv2
import numpy as np

original = cv2.imread("Sample1.jpg",100)

# Read the original image
img = cv2.imread('Sample1.jpg',100) 
# Display original image
cv2.imshow('Original', original)
 
# Convert to graycsale
img_gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
cv2.imshow('Gray', img_gray)
# Blur the image for better edge detection
img_blur = cv2.GaussianBlur(img_gray, (3,3), 0) 
 
# Canny Edge Detection
edges = cv2.Canny(image=img_blur, threshold1=1, threshold2=50, apertureSize=3, L2gradient= True) # Canny Edge Detection

# Display Canny Edge Detection Image
print("Number of edges: ", np.count_nonzero(edges))
cv2.imshow('Canny Edge Detection', edges)
cv2.waitKey(0)
 
cv2.destroyAllWindows()