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
arr_integer solution(arr_integer inputArray, int elemToReplace, int substitutionElem) {
    arr_integer s = alloc_arr_integer(inputArray.size);
    for(int i = 0; i <= inputArray.size - 1; i++){
        if(inputArray.arr[i] == elemToReplace){
            s.arr[i] = substitutionElem;
            continue;
        }
        s.arr[i] = inputArray.arr[i];
    }
    return s;
}
