img = imread('01.jpg');
task1 = img;
task2 = img;

% Question 1
task1(:,:,2)= 0;
figure, imshow(task1); 
imwrite(task1, 'green.jpg');

% Question 2
r = task2(:,:,1);
g = task2(:,:,2);
b = task2(:,:,3);

gray = .299*double(r) + ...
       .587*double(g) + ...
       .114*double(b);

gray = uint8(gray);
figure, imshow(gray);

imwrite(gray, 'gray.jpg');

% Question 3
task3 = imrotate(img, 90);
figure, imshow(task3);
imwrite(task3, 'rotate.jpg');

% Question 4
rect = [30, 100, 270, 300 ];
task4 = imcrop(img, rect);
figure, imshow(task4);
imwrite(task4, 'crop.jpg');

% Question 5
task5 = flip(img);
figure, imshow(task5);
imwrite(task5, 'flip.jpg');

% Question 6
task6 = imtile({'01.jpg', '02.jpg', '03.jpg', '04.jpg'}, 'BorderSize', 10);
figure, imshow(task6);
imwrite(task6, 'combine.jpg');

% Question 7
task7a = imread('05.jpg');
task7b = imread('06.jpg');
task7a = task7a(:);
task7b = task7b(:);
task7 = double(task7a)/2 + ...
       double(task7b)/2;
task7 = uint8(task7);
task7 = reshape(task7, 375,1242,3);
figure, imshow(task7);
imwrite(task7, 'average.jpg');
