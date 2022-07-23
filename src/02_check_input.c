#include "../../My_mastermind/include/header.h"

int check_input(char *input_string, int *secret_string){
    char old_input[1] = {0};
    char missplaced_message[18] = "Misplaced pieces: ";
    char well_placed_message[20] = "Well placed pieces: ";
    char *buffer = 0;
    int count = 0, n = 0;
    bool bool_table[SIZE] = {false,false,false,false};

    write(1,well_placed_message,20);
    for(int i = 0; i < SIZE; i++){ 
        if(input_string[i]-48 == secret_string[i]){
            bool_table[i] = true;
            count++;
        }
    }
    
    if(count > 0){
        buffer = malloc(sizeof(int)*count);
        for(int i = 0; i < count; i++){
            if(input_string[i]-48 == secret_string[i]){
                buffer[i] = input_string[i];
            }
        }
    } 

    n = count + 48; 
    write(1,&n,1); write(1,"\n",1);

//-------------------------------------------

    n=0;
    write(1,missplaced_message,18);
    
    for(int x = 0; x < SIZE; x++){
        for(int y = 0; y < SIZE; y++){
            if(bool_table[y] == false &&input_string[x]-48 == secret_string[y] && input_string[x]-48 != secret_string[x] && old_input[0] != input_string[x]){
                old_input[0] = input_string[x];
                n++;
                bool_table[y] = true;
            }
        }
    }

    n = n + 48;
    write(1,&n,1); 
    write(1,"\n",1);
    
    return count;
}