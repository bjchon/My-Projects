import cv2
import numpy as np
from numpy import asarray
# Import pillow
from PIL import Image, ImageOps

original = cv2.imread("images/pocket.png", 100)
cv2.imshow("Original Color", original)
# Read the original image
img = cv2.imread("images/pocket.png", 100) 
gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
gray_pixels = asarray(gray, dtype=np.float32)
# Display original image
cv2.imshow('Original', gray)
print("img", img, "Shape: ", img.shape, "Color: ", gray[0][0])
row, col = gray.shape
count = 0
iso = np.full(shape=(row,col), fill_value=255, dtype= np.float32)
for x in range(row):
    for y in range(col):
        if gray[x][y] < 50:
            count += 1
            val = 0
            iso[x][y] = val
            #print("Location: ", x, y, "Value Gray: ", gray_pixels[x][y], "Value Iso", iso[x][y])
cv2.imshow("Iso50", iso)
cv2.imwrite("iso50.jpg", iso)
img1 = cv2.imread("iso50.jpg", 100)
img2 = cv2.imread("iso50edit.jpg", 100)
gray2 = cv2.cvtColor(img2, cv2.COLOR_BGR2GRAY)
cv2.imshow("Iso50: ", img1)
cv2.imshow("Damaged", img2)
count1 = 0
count2 = 0
row1, col1 = img1.shape
for x in range(row1):
    for y in range(col1):
        if img1[x][y] < 50:
            count1 += 1
        if gray2[x][y] < 50:
            count2 += 1
print("Count1: ", count1, "Count2: ", count2)
cv2.waitKey()
for x in range(row):
    for y in range(col):
        if gray[x][y] < 75:
            count += 1
            val = 0
            iso[x][y] = val
            #print("Location: ", x, y, "Value Gray: ", gray_pixels[x][y], "Value Iso", iso[x][y])
print("Count: ", count)
cv2.imshow("Iso75", iso)
cv2.imwrite("iso75.jpg", iso)
cv2.waitKey()
for x in range(row):
    for y in range(col):
        if gray[x][y] < 100:
            count += 1
            iso[x][y] = 0
            #print("Location: ", x, y, "Value Gray: ", gray_pixels[x][y], "Value Iso", iso[x][y])
print("Count: ", count)
cv2.imshow("Iso100", iso)
cv2.imwrite("iso100.jpg", iso)
cv2.waitKey(0)
for x in range(row):
    for y in range(col):
        if gray[x][y] < 150:
            count += 1
            iso[x][y] = 0
            #print("Location: ", x, y, "Value Gray: ", gray_pixels[x][y], "Value Iso", iso[x][y])
print("Count: ", count)
cv2.imshow("Iso150", iso)
cv2.imwrite("iso150.jpg", iso)
cv2.waitKey(0)
for x in range(row):
    for y in range(col):
        if gray[x][y] < 200:
            count += 1
            iso[x][y] = 0
            #print("Location: ", x, y, "Value Gray: ", gray_pixels[x][y], "Value Iso", iso[x][y])
print("Count: ", count)
cv2.imshow("Iso200", iso)
cv2.waitKey(0)
cv2.destroyAllWindows()