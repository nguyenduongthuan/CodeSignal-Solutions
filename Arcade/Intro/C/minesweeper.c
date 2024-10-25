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

arr_arr_integer solution(arr_arr_boolean matrix) {
    arr_arr_integer s = alloc_arr_arr_integer(matrix.size);
    int x[8] = {0,1,1,1 ,0 ,-1,-1,-1};
    int y[8] = {1,1,0,-1,-1,-1,0 ,1};
    for(int i = 0 ; i < matrix.size ; i++){
        for(int j = 0 ; j < matrix.size ; j++){
            for(int k = 0 ; k < 8 ; k++){
                int _x = i + x[k];
                int _y = j + y[k];
                if (_x && _y out of range){
                    if (matrix.arr[_x].arr[_y] ){
                        s.arr[_x].arr[_y] = 1;
                    }else{
                        s.arr[_x].arr[_y] += 1;
                    }
                }
            }
        }
    }
}



/*
arr_arr_integer solution(arr_arr_boolean matrix) {
    
    arr_arr_integer retMatrix = alloc_arr_arr_integer(matrix.size);
    for (int i=0; i<matrix.size; i++) {
        retMatrix.arr[i] = alloc_arr_integer(matrix.arr[0].size);
    }
    
    for (int i=0; i<retMatrix.size; i++) {
        for (int j=0; j<retMatrix.arr[0].size; j++) {
            
            int sum = 0;
            
            
            
            for (int ii=i-1; ii<i+2; ii++) {
                
                for (int jj=j-1; jj<j+2; jj++) {
                    
                    
                    if (ii >= 0 && ii < retMatrix.size &&
                        jj >= 0 && jj < retMatrix.arr[0].size) {
                        // printf("(%i,%i), (%i,%i), val: %i\n",j,i,jj,ii,matrix.arr[ii].arr[jj]);
                        
                        if (matrix.arr[ii].arr[jj] && (i != ii || j != jj))
                            sum += 1;
                    }
                }
            }
            retMatrix.arr[i].arr[j] = sum;
            
            
        }
    }
    return retMatrix;
}
*/