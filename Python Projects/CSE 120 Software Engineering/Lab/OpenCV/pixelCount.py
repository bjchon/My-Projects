import cv2
import numpy as np

original = cv2.imread("Beginnings.jpg")

# Read the original image
img = cv2.imread('Beginnings.jpg') 
gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
# Display original image
cv2.imshow('Original', gray)
print("Shape: ", img.shape, "Color: ", gray[0][0])
row, col = gray.shape
count = 0
for x in range(row):
    for y in range(col):
        if gray[x][y] < 20:
            count += 1
            print("Location: ", x, y, "Value: ", gray[x][y])
print("Count: ", count)
cv2.waitKey(0)