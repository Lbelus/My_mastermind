#include "../../My_mastermind/include/header.h"



int my_ctoi(char *param_1, size_t n){
    int num = 0;
    int mult =1;
    n =(int)n < 0 ? -n : n; // check abs val
    while (n--){
        if((param_1[n] < '0' || param_1[n]> '9') && param_1[n] != '-'){
            if(num){
                break;
            } else {
                continue;
            }
        }

        if (param_1[n] == '-'){
           if (num){
                num = -num;
                break;
            }

        } else {
            num += (param_1[n]- '0')*mult;
            mult *=10;

        }
    }
    return num;
}