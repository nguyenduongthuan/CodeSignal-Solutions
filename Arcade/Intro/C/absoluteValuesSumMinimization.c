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
/*
int solution(arr_integer a) {
    int min = a.arr[0];
    int check = 0;
    for(int i = 0; i <= a.size - 1; i++){
        check += abs(a.arr[i] - min);
    }
    for(int i = 1; i <= a.size - 1; i++){
        int sum = 0;
        for(int j = 0; j <= a.size - 1; j++){
            sum += abs(a.arr[j] - a.arr[i]);
        }
        if(sum < check){
            check = sum;
            min = a.arr[i];
        }
    }
    return min;
}
*/
int solution(arr_integer a) {
    return a.arr[(a.size - 1) / 2];
}
