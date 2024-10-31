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
int findMaxNow(arr_integer votes) {
    int max = 0;
    for(int i = 0; i <= votes.size - 1; i++) if(votes.arr[i] > max) max = votes.arr[i];
    return max;
}
int solution(arr_integer votes, int k) {
    int max = findMaxNow(votes), count  = 0;
    if(k == 0){
        for(int i = 0; i <= votes.size - 1; i++) if(votes.arr[i] == max) count++;
        if(count % 2) return 1;
        return 0;
    }
    for(int i = 0; i <= votes.size - 1; i++) if(votes.arr[i] + k > max) count++;
    
    return count;
}
