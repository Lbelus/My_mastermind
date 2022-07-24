#include "../../My_mastermind/include/header.h"


// check if value is not an int

int isnotint(char * param_1){
    
    for(int i = 0; i < SIZE; i++){
        if ((param_1[i] < 48 || param_1[i] > 57)){
            return 0;
        } 
    }
    return 1;
}