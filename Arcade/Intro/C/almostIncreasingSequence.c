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

bool solution(arr_integer a) {
  int check = 0;
  for(int i=1;i<a.size;i++) {
    if(a.arr[i] <= a.arr[i-1]) {
        check++;
        if(check > 1) {
            return false;
        }
        if(a.arr[i] <= a.arr[i-2] && a.arr[i+1] <= a.arr[i-1] && i != a.size - 1 && i != 1) {
            return false;
        }
    }
  }
  return true;
}


/*
bool solution(arr_integer a) {
    int check = 0;
    for(int i = 0; i <= a.size - 2; i++){
        if(a.arr[i] >= a.arr[i + 1]){
            check++;
            if(a.arr[i + 1] <= a.arr[i - 1] && i != 0 && i != a.size - 2){
                check++;
                if(a.arr[i+2] > a.arr[i]){
                    i++;
                    check--;
                }
                
            }
            if(check > 1){
                return false;
            }
        }
    }
   
    return true;
}
*/