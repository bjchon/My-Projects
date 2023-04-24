function output = gaussian_filter(img, hsize, sigma)
    output = zeros(size(img));
    kernel = fspecial('gaussian', hsize, sigma);
    [row,col] = size(img);
    ps = floor(size(kernel)/2);
    for u = 1+ps:col-ps
        for v = 1+ps:row-ps
            patch = img(v-ps:v+ps, u-ps:u+ps);
            output(v,u) = sum(patch .*kernel, 'all');            
        end
    end
end