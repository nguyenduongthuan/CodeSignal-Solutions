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
int isDiff(arr_string names, int pos){
    for(int i=0; i<pos; i++){
        if(strcmp(names.arr[i],names.arr[pos])==0)
            return 0;
    }    
    return 1;
}

void insert(char *s, int pos){
    int size = strlen(s);
    for(int i=size; i>pos; i--){
        s[i] = s[i-1];
    }    
    s[pos] = '1';
    size++;
    s[size] = '\0';
}

void addChars(char *s, int k){
    if(k==1){
        strcat(s, "(1)");
    }
    else{
        for(int i=strlen(s)-1; i>0; i--){
            if(s[i]>='0' && s[i]<'9'){
                s[i]++;
                break;
            }
            if(s[i]=='9'){
                s[i]='0';
                insert(s, i);
                break;
            }
        }
    }
    printf("%s\n",s);
}

arr_string solution(arr_string names) {
    int size = names.size;
    int k=0;
    
    
    for(int i=1; i<size; i++){
        if(isDiff(names, i)){
            continue;
        }
        else{
            k++;
            addChars(names.arr[i], k);
            while(k!=0){
                if(isDiff(names, i)){
                    k=0;   
                }
                else{
                    k++;
                    addChars(names.arr[i], k);
                }
            }
        }
    }    
    
    return names;
}
