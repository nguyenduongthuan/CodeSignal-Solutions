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
    int result = 0, check = 0;
    for(int i = 1; i <= a.size - 1; i++){
        check = 0;
        if(a.arr[i] > a.arr[i - 1]){
            continue;
        }
        check = a.arr[i - 1] - a.arr[i] + 1;
        result += check;
        a.arr[i] = check + a.arr[i];
    }
    return result;
}
