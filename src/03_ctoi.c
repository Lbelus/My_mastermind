#include "../../My_mastermind/include/header.h"


// parsed value from argv individual char to write() is an issue.
// convert character into int.  
// watered down itoa 

int my_ctoi(char *param_1, size_t n){
    int num = 0;
    int mult =1;
    n =(int)n < 0 ? -n : n; // check abs val

    //for every value in array
    while (n--){
        if((param_1[n] < '0' || param_1[n]> '9') && param_1[n] != '-'){ //check for int or '-'
            if(num){
                break;
            } else {
                continue;
            }
        }

        if (param_1[n] == '-'){ // if '-' negate
           if (num){
                num = -num;
                break;
            }

        } else {
            num += (param_1[n]- '0')*mult; // convert to numeric value
            mult *=10;

        }
    }
    return num;
}