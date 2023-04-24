% Bryant Chon
%% Question 1
img = imread('01.jpg');
[row,col,dim] = size(img);
task1 = zeros(row,col,dim, 'uint8');
x0 = row/2;
y0 = col/2;
for x1 = 1:row-1
    for y1 = 1:col-1
        for z = 1:dim
            x2 = cos(-45)*(x1-x0);
            x2 = round(x2 + sin(-45)*(y1-y0) + x0);
            y2 = -sin(-45)*(x1-x0);
            y2 = round(y2 + cos(-45)*(y1-y0) + y0);
            if x2<=row && x2 >=1 && y2<=col && y2 >=1
                task1(x2,y2,z) = img(x1,y1,z);
            end
        end
    end
end
figure, imshow(task1);
imwrite(task1, 'rotate_0.jpg')

%% Question 2
task2 = zeros(row,col,dim, 'uint8');
for x2 = 1:row-1
    for y2 = 1:col-1
        for z = 1:dim
            x1 = cosd(45)*(x2-x0);
            x1 = round(x1 + sind(45)*(y2-y0) + x0);
            y1 = -sind(45)*(x2-x0);
            y1 = round(y1 + cosd(45)*(y2-y0) + y0);
            if x1<=row && x1 >=1 && y1<=col && y1 >=1
                task2(x2,y2,z) = img(x1,y1,z);
            end
        end
    end
end
figure, imshow(task2);
imwrite(task2, 'rotate_1.jpg')

%% Question 3
img = im2double(imread('lena_noisy.jpg'));
% Median filter
patch_size = [3,3];
img_median = median_filter(img, patch_size);
figure, imshow(img_median);
imwrite(img_median, 'median_0.jpg');

%% Question 4
% Median filter
patch_size = [5,5];
img_median = median_filter(img, patch_size);
figure, imshow(img_median);
imwrite(img_median, 'median_1.jpg');
