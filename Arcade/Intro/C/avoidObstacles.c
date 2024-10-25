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
    for(int i = 2; ; i++){
        for(int j = 0; j <= a.size - 1; j++){
            if(a.arr[j] % i == 0){
                break;
            }
            if(j == a.size - 1){
            return i;
            }
        }
    }
}
