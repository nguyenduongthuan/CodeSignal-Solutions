
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

arr_string solution(arr_string a) {
    a.arr[0];
    arr_string s;
    s = alloc_arr_string(a.size);
    int max = 0, size = 0;
    for(int i = 0; i <= a.size - 1; i++){
        if(strlen(a.arr[i]) > max){
            size = 0;
            max = strlen(a.arr[i]);
            //strcpy(s.arr[size++] , a.arr[i]);
            s.arr[size++] = a.arr[i];
        }else if(strlen(a.arr[i]) == max){
            s.arr[size++] = a.arr[i];
        }
    }
    s.size = size;
    return s;
}
/*
arr_string solution(arr_string a) {
    arr_string s;
    s = alloc_arr_string(a.size);
    int max = strlen(a.arr[0]), size = 0;
    for(int i = 1; i <= a.size - 1; i++){
        if(strlen(a.arr[i]) > max){
            max = strlen(a.arr[i]);
        }
    }
    for(int i = 0; i <= a.size - 1; i++){
        if(strlen(a.arr[i]) == max){
            s.arr[size++] = a.arr[i];
            //strcpy(s.arr[size++] , a.arr[i]);
        }
    }
    s.size = size;
    return s;
}
*/