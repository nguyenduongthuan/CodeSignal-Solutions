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
int solution(arr_integer statues) {
    int max = statues.arr[0], min = max;
    for(int i = 1; i <= statues.size - 1; i++){
        if(statues.arr[i] > max){
            max = statues.arr[i];
        }
        if(statues.arr[i] < min){
            min = statues.arr[i];
        }
    }
    return (max - min) - (statues.size - 1);
}
