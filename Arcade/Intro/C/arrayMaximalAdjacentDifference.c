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
int solution(arr_integer inputArray) {
    int max = -1;
    for(int i = 0; i <= inputArray.size - 2; i++){
        if(abs(inputArray.arr[i] - inputArray.arr[i + 1]) > max){
            max = abs(inputArray.arr[i] - inputArray.arr[i + 1]);
        }
    }
    return max;
}
