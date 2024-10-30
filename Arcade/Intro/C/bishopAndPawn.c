// bool solution(char bi[], char pawn[]) {
//     char check[100];
//     strcpy(check, bi);
//     for(int i = check[1]; i <= '8'; i++){
//         if(check[0]++ == pawn[0] && i == pawn[1]){
//             return true;
//         }
//     }
//     strcpy(check, bi);
//     for(int i = check[1]; i >= '1'; i--){
//         if(check[0]++ == pawn[0] && i == pawn[1]){
//             return true;
//         }
//     }
//     strcpy(check, bi);
//     for(int i = check[1]; i >= '1'; i--){
//         if(check[0]-- == pawn[0] && i == pawn[1]){
//             return true;
//         }
//     }
//     strcpy(check, bi);
//     for(int i = check[1]; i <= '8'; i++){
//         if(check[0]-- == pawn[0] && i == pawn[1]){
//             return true;
//         }
//     }
//     return false;
// }
bool solution(char bishop[], char pawn[]) {
    return abs(bishop[0] - pawn[0]) == abs(bishop[1] - pawn[1]);
}