// Arrays are already defined with this interface:
// typedef struct arr_##name {
//   int size;
//   type *arr;
// } arr_##name;
//
// arr_##name alloc_arr_##name(int len) {
//   arr_##name a = {len, len > 0 ? malloc(sizeof(type) * len) : NULL};
//   return a;
// }
//
//

arr_arr_integer solution(arr_arr_integer image) {
    arr_arr_integer s = alloc_arr_arr_integer(image.size - 2);
    int sum = 0;
    for(int i = 0; i <= image.size - 3; i++){
        s.arr[i] = alloc_arr_integer(image.arr[i].size - 2);
        for(int j = 0; j <= image.arr[i]. size - 3; j++){
            sum = 0;
            for(int k = i; k <= i + 2; k++){
                for(int l = j; l <= j + 2; l++){
                    sum += image.arr[k].arr[l];
                }
            }
            s.arr[i].arr[j] = sum / 9;
        }
    }
    return s;
}

/*
arr_arr_integer solution(arr_arr_integer image) {
    int rows = image.size;
    int cols = image.arr[0].size;
    
    // Initialize the blurred image
    arr_arr_integer blurred_image = alloc_arr_arr_integer(rows - 2);
    
    for (int i = 0; i < rows - 2; ++i) {
        blurred_image.arr[i] = alloc_arr_integer(cols - 2);
        
        for (int j = 0; j < cols - 2; ++j) {
            // Calculate sum of pixels in 3x3 square
            int sum = 0;
            for (int r = i; r < i + 3; ++r) {
                for (int c = j; c < j + 3; ++c) {
                    sum += image.arr[r].arr[c];
                }
            }
            // Calculate average and store in blurred image
            blurred_image.arr[i].arr[j] = sum / 9;
        }
    }
    
    return blurred_image;
}
*/