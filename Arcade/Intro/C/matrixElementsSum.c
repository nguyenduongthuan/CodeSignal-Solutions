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
int solution(arr_arr_integer matrix) {
    for(int i = 0; i <= matrix.size - 1; i++){
        for(int j = 0; j <= matrix.arr[i].size - 1; j++){
            if(matrix.arr[i].arr[j] == 0){
                for(int k = i + 1; k <= matrix.size - 1; k++){
                    matrix.arr[k].arr[j] = 0;
                }
            }
        }
    }
    int sum = 0;
    for(int i = 0; i <= matrix.size - 1; i++){
        for(int j = 0; j <= matrix.arr[i].size - 1; j++){
            sum += matrix.arr[i].arr[j];
        }
    }
    return sum;
}
