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
int solution(arr_integer a) {
    int result = 0;
    
    for (int i = 0; i < a.size; i++) {
        result |= (a.arr[i] << (8 * i));
    }
    
    return result;
}
