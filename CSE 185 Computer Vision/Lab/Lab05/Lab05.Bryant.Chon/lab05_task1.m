clc;clear;close all;
img = im2double(imread('lena.jpg'));

sigma = 2.0;
hsize = 7;
scale = 5;

%% Gaussian Pyramid
I = img;
for s = 1 : scale
    % Gaussian filter
    I = gaussian_filter(I, hsize, sigma);
    % Save or show image
    imwrite(I, sprintf('Gaussian_scale%d.jpg',s));
    figure, imshow(I);
    % Down-sampling
    I = imresize(I,.5);
end

%% Laplacian Pyramid
I = img;
gf = img;
for s = 1 : scale
    % Gaussian filtering
    gf2 = gaussian_filter(gf, hsize, sigma);
    % Laplacian filtering
    I2 = I - gf2;
    % Save or show image
    imwrite(I2 + .5, sprintf('Laplacian_scale%d.jpg',s));
    figure,imshow(I2+.5);
    % Down-sampling
    I = imresize(I,.5);
    gf = imresize(gf,.5);
end

%% 

