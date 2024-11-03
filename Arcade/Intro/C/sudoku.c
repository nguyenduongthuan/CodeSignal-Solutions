// Definition for arrays:
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
bool solution(arr_arr_integer grid) {
    for(int  i=0;i<9;i++){
        for(int j=0;j<9;j++){
           for(int k=0;k<9;k++){
                if(grid.arr[i].arr[j]==grid.arr[i].arr[k] && k!=j) return false;
                 if(grid.arr[i].arr[j]==grid.arr[k].arr[j]&&k!=i) return false;
           }
        }
    }
    int count=0;
    while(count <3){
        for(int  i=count*3;i<count*3+3;i++){
            for(int j=count*3;j<count*3+3;j++){
               for(int  k=count*3;k<count*3+3;k++){
                 for(int l=count*3;l<count*3+3;l++){
                   if(grid.arr[i].arr[j]==grid.arr[k].arr[l] && (k!=i&&l!=j)) return false;
                 }
                }
            }
        }
        count ++;
    }
        return true;
}
