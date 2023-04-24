function [low_pass_img, high_pass_img] = separate_frequency(img, ratio)

    frequency_map = fft2(img);
    
    %figure, imshow(log(abs(frequency_map) + 1), []);
    
    frequency_map_shifted = fftshift(frequency_map);
    [h, w, c] = size(img);
    x0 = floor(w/2);
    y0 = floor(h/2);
    y1 = y0 - floor(ratio*h/2);
    y2 = y0 + floor(ratio*h/2);
    x1 = x0 - floor(ratio*w/2);
    x2 = x0 + floor(ratio*w/2);

    mask = zeros(size(img));
    mask(y1:y2, x1:x2, :) = 1;
    
    low_frequency_map_shifted = frequency_map_shifted .*mask;
    high_frequency_map_shifted = frequency_map_shifted .* (1-mask);

    low_frequency_map = ifftshift(low_frequency_map_shifted);
    high_frequency_map = ifftshift(high_frequency_map_shifted);

    low_pass_img = real(ifft2(low_frequency_map));
    high_pass_img = real(ifft2(high_frequency_map));

end