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
arr_integer solution(arr_integer a) {
    for(int i = 0; i <= a.size - 1; i++){
        if(a.arr[i] == -1){
            continue;
        }
        for(int j = i + 1; j <= a.size - 1; j++){
            if(a.arr[j] == -1){
                continue;
            }
            if(a.arr[i] > a.arr[j]){
                int tmp = a.arr[i];
                a.arr[i] = a.arr[j];
                a.arr[j] = tmp;
            }
        }
    }
    return a;
}
