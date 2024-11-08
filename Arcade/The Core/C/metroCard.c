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
arr_integer solution(int lastNumberOfDays) {
    arr_integer a;
    if (lastNumberOfDays <= 30) {
    a = alloc_arr_integer(1);
    a.arr[0] = 31;
    }else{
        a = alloc_arr_integer(3);
        a.arr[0] = 28;
        a.arr[1] = 30;
        a.arr[2] = 31;
    }
    return a;
}
*/
/*
int * solution(int lastNumberOfDays) {
    if(lastNumberOfDays==30){
        int* day = (int *)malloc(sizeof(int) * 4);
        day[0] = 31;
        free(day);
        return day;
        free(day);
    }
    else if(lastNumberOfDays==31){
        int* day = (int *)malloc(sizeof(int) * 4);
        day[0]=28;
        day[1]=30;
        day[2]=31;
        free(day);
        return day;
        free(day);
    }
    else{
       int* day = (int *)malloc(sizeof(int) * 4);
        day[0]=31;
        free(day);
        return day;
        free(day);
    }
}
*/
arr_integer solution(int lastNumberOfDays) {
    arr_integer a;
    if (lastNumberOfDays <= 30) {
    a = alloc_arr_integer(1);
    a.arr[0] = 31;
    }else{
        a = alloc_arr_integer(1);
        a.arr[0] = 28;
        a = realloc(a, in);
        a.arr[1] = 30;
        a.arr[2] = 31;
    }
    return a;
}