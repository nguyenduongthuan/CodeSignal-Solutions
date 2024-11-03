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
arr_arr_integer solution(int n) {
    arr_arr_integer matrix=alloc_arr_arr_integer(n);
    for(int i=0;i<n;i++){
        matrix.arr[i]=alloc_arr_integer(n);
    }
    int r=0,c=n-1;
    int number=1,i,j;
    while(number<=n*n){
        for(i=r;i<=c;i++){
            matrix.arr[r].arr[i]=number++;
        }
        for(i=r+1;i<=c;i++){
            matrix.arr[i].arr[c]=number++;
        }
        for(i=c-1;i>=r;i--){
            matrix.arr[c].arr[i]=number++;
        }
        for(i=c-1;i>=r+1;i--){
            matrix.arr[i].arr[r]=number++;
        }
        r++;
        c--;
    }
    return matrix;
}
