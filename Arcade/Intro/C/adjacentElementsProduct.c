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
    int check = inputArray.arr[0] * inputArray.arr[1];
    for(int i = 1; i <= inputArray.size - 2; i++){
        if(inputArray.arr[i] * inputArray.arr[i + 1] > check){
            check = inputArray.arr[i] * inputArray.arr[i + 1];
        }
    }
    return check;
}
