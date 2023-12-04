% Question 3 and 4 function
function output = median_filter(img, patch_size)
    output = zeros(size(img));
    [row,col] = size(img);
    ps = floor(patch_size/2);
    for u = 1+ps:col-ps
        for v = 1+ps:row-ps
            patch = img(v-ps:v+ps,u-ps:u+ps);
            patch = patch(:);
            output(v,u) = median(patch);
        end
    end
end