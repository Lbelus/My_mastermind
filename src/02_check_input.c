#include "../../My_mastermind/include/header.h"

int check_input(char *input_string, int *secret_string){
    
    int count = 0, n = 0; // "count" correspond to number of right answers, 'n' is used to convert to assci value in order to get writen. 
    
    char missplaced_message[18] = "Misplaced pieces: ";
    char well_placed_message[20] = "Well placed pieces: ";
    char *buffer = 0; 
    char previous_input[1] = {0};

    bool bool_table[SIZE] = {false,false,false,false}; // boolean table: change to true if input has been checked

    write(1,well_placed_message,20);

    // check if input match exactly the secret string
    // update boolean table
    // update counter
    for(int i = 0; i < SIZE; i++){ 
        if(input_string[i]-48 == secret_string[i]){
            bool_table[i] = true;
            count++;
        }
    }

    n = count + 48; // convert int value to ascii 
    write(1,&n,1); write(1,"\n",1);

//-------------------------------------------

    n=0; // reset n value
    write(1,missplaced_message,18);
    
    // check if one input match secret string
    // check if correct emplacement has not already been found;
    // filter for match on uncorrect emplacement 
    // check if value has not already been found  
    // update boolean table
    // update n value 

    for(int x = 0; x < SIZE; x++){
        for(int y = 0; y < SIZE; y++){
            if(bool_table[y] == false && input_string[x]-48 == secret_string[y] && input_string[x]-48 != secret_string[x] && previous_input[0] != input_string[x]){
                previous_input[0] = input_string[x];
                n++;
                bool_table[y] = true;
            }
        }
    }
    // display n value
    n = n + 48;
    write(1,&n,1); 
    write(1,"\n",1);
    
    return count; // return counter to check for win on main
}