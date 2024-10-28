
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
arr_integer solution(arr_integer a, int k) {
   int sizeS = 0;
   for(int i = 0; i <= a.size - 1; i++){
       if((i + 1) % k ) a.arr[sizeS++] = a.arr[i];
   }
   a.size = sizeS;
   return a;
}
