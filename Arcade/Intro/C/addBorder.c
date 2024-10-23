
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

arr_string solution(arr_string p) {
    arr_string s = alloc_arr_string(p.size + 2);
    for(int i = 0; i <= s.size; i++){
        s.arr[i] = (char*) malloc(sizeof(char)*256);
        //s.arr[i] = (char*)alloc_list_char('A');
    }
    for(int i = 0; i <= strlen(p.arr[0]) + 1; i++){
        
        s.arr[0][i] = '*';
        s.arr[s.size - 1][i] = '*';
    }
    s.arr[0][strlen(p.arr[0]) + 2] = '\0';
    s.arr[s.size - 1][strlen(p.arr[0]) + 2] = '\0';
    for(int i = p.size - 1; i >= 0; i--){
        s.arr[i + 1][0] = '*';
        s.arr[i + 1][1] = '\0';
        strcat(s.arr[i + 1], p.arr[i]);
    }
    for(int i = 1; i <= s.size - 2; i++){
        s.arr[i][strlen(s.arr[i])] = '*';
    }
    return s;    
}
