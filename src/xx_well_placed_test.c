#include "../../My_mastermind/include/header.h"


int well_placed_test(char *param_1, int *param_2){
    char well_placed_message[20] = "Well placed pieces: ";
    int count = 0;
    write(1,well_placed_message,20);
    for(int i = 0; i < SIZE; i++){ 
        if(param_1[i]-48 == param_2[i]){
            //write(1,&param_1[i],1);
            count++;
        }
    }
    write(1,"\n",1);
    return count;
}