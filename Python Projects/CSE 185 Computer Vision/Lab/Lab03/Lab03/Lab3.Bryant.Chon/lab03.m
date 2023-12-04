%Bryant Chon
img = im2double(imread('lena.jpg'));

%% Sobel Filter
% Question 1
H1 = [1, 2, 1; 0, 0, 0; -1, -2, -1]; % horizontal edge
img_sobel = sobel_filter(img, H1);
figure, imshow(img_sobel);
imwrite(img_sobel, 'sobel_h.jpg');

% Question 2
H2 = [1, 0, -1; 2, 0, -2; 1, 0, -1]; % vertical edge
img_sobel = sobel_filter(img, H2);
figure, imshow(img_sobel);
imwrite(img_sobel, 'sobel_v.jpg');

%% Guassuan Filter
% Question 3
hsize = 5; sigma = 2;
img_gaussian = gaussian_filter(img, hsize, sigma);
figure, imshow(img_gaussian);
imwrite(img_gaussian, 'gaussian_5.jpg');

% Question 4
hsize = 9; sigma = 4;
img_gaussian = gaussian_filter(img, hsize, sigma);
figure, imshow(img_gaussian);
imwrite(img_gaussian, 'gaussian_9.jpg');

