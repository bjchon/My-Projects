function output = template_matching_SSD(img, template, threshold)
    shift_v = floor(size(template, 1)/2);
    shift_u = floor(size(template, 2) /2);
    I1 = img;
    value = 0;
    template_ = template(:) - mean(template);
    for u = 1 + shift_u : size(I1, 2) - shift_u
        for v = 1 + shift_v : size(I1, 1)- shift_v
            x1 = u-1; x2 = u+1;
            y1 = v-1; y2 = v+1;
            patch = I1(y1:y2, x1:x2);
            % SSD
            value = value + (template_-patch)^2;
            output(v, u) = value;
        end
    end
    match = (output < threshold);
end