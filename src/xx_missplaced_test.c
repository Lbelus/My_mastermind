#include "../../My_mastermind/include/header.h"


void missplaced_test(char *input_string, int *secret_string, int n){
    char old_input[1] = {0};
    char missplaced_message[18] = "Misplaced pieces: ";
    write(1,missplaced_message,18);
    for(int x = 0; x < SIZE; x++){
        for(int y = 0 + n; y < SIZE; y++){
            if(input_string[x]-48 == secret_string[y] && input_string[x]-48 != secret_string[x] && old_input[0] != input_string[x] ){
                //write(1,&input_string[x],1);
                old_input[0] = input_string[x];
            }
        }
    }
    write(1,"\n",1);
}