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
int solution(arr_arr_integer a) {
    //if (!(a.size-2) || !(a.arr[0].size-2)) return 0;
    int m = (a.size-1)*(a.arr[0].size-1), k = 0, i = 0, j = 0, cnt = 0;
    arr_integer s = alloc_arr_integer(m);
    for (i = 0; i < a.size - 1; i++) {
        for (j = 0; j < a.arr[0].size - 1; j++) {
            s.arr[k++] = a.arr[i].arr[j]*1000 + a.arr[i].arr[j+1]*100 + a.arr[i+1].arr[j]*10 + a.arr[i+1].arr[j+1];
        }
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < i; j++)
           if (s.arr[i] == s.arr[j])
               break;
        if (i == j) cnt++;
    }
    return cnt;
}
