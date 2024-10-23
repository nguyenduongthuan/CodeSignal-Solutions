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
    int sum1 = 0, sum2 = 0;
    arr_integer s = alloc_arr_integer(2);
    for(int i = 0; i <= a.size - 1; i += 2){
        sum1 += a.arr[i];
    }
    s.arr[0] = sum1;
    for(int i = 1; i <= a.size - 1; i += 2){
        sum2 += a.arr[i];
    }
    s.arr[1] = sum2;
    return s;
}
