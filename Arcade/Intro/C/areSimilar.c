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
bool solution(arr_integer a, arr_integer b) {
    int check1 = - 1, check2 = -1;
    for(int i = 0; i <= a.size - 1; i++){
        if(a.arr[i] != b.arr[i] && check1 == -1){
            check1 = i;
            continue;
        }
        if(a.arr[i] != b.arr[i] && check2 == -1){
            check2 = i;
            break;
        }
    }
    int tmp = a.arr[check1];
    a.arr[check1] = a.arr[check2];
    a.arr[check2] = tmp;
    for(int i = 0; i <= a.size - 1; i++){
        if(a.arr[i] != b.arr[i]){
            return false;
        }
    }
    return true;
}
*/
bool solution(arr_integer a, arr_integer b){
    int check1 = -1, check2 = -1;
    for(int i = 0; i <= a.size - 1; i++){
        if(a.arr[i] != b.arr[i]){
            if(check1 == -1){
                check1 = i;
            }else if(check2 == -1){
                check2 = i;
            }else{
                return false;
            }
        }
    }
    return (a.arr[check1] == b.arr[check2]) && (a.arr[check2] == b.arr[check1]);
}