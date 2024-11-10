/*
int solution(char * commands) {
    int leng = strlen(commands), result = 0, check = 1;
    for(int i = 0; i <= leng - 1; i++){
        if(commands[i] == 'A' && check == 1){
            result += 1;
        }
        else if(((commands[i] == 'L' && commands[i + 1] == 'L') || (commands[i] == 'R' && commands[i + 1] == 'L' || (commands[i] == 'R' && commands[i + 1] == 'R'))) && commands[i + 2] == 'A'){
            result += 2;
            i += 2;
            check = 1;
        }
        else if((commands[i] == 'L' && commands[i + 1] == 'L') || (commands[i] == 'R' && commands[i + 1] == 'L') || (commands[i] == 'R' && commands[i + 1] == 'R')){
            result += 1;
            i += 1;
            check = 1;
        }
        else if((commands[i] == 'L') || (commands[i] == 'R')){
            int j;
            for(int j = i + 1; j <= leng - 1; j++){
                if(commands[j] == 'L' || commands[j] == 'R'){
                    result += 1;
                    break;
                }
            }
            i = j; 
            check = 1;
        } else{
            check = 0;
        }
    }
    return result;
}
*/

int solution(char * commands) {
int i;
int line=0;
int turn = 0;
printf ("Command %c %d\n",commands[i], strlen(commands) );
for (i=0;i<strlen (commands);i++)
{
    
    switch (commands[i]) {
            
        case 'A' :
            printf ("Command A");
          turn +=2;
            break;
        case 'L' : 
            printf ("Command L");
            turn +=1;
            break;
        case 'R' :
            printf ("Command R");
            turn -=1;
            break;
            
    }
    if (turn % 2 == 0) line++;
}
return line;
}
