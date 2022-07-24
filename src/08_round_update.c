#include "../../My_mastermind/include/header.h"


int round_update(int n){

        write(1,"Round ",6);
        
        char buffer[5] = {0};
        their_itoa(n, buffer, 10);
        int sizen = my_strlen(buffer);
        write(1, buffer,sizen);
        write(1,"\n",1);
        write(1,">",1);
return n;
}