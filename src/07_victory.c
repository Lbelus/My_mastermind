#include "../../My_mastermind/include/header.h"


void victory(){
    char victory_message[26] = "Congratz! you did it!";
    write(1,victory_message,26);
    write(1,"\n",1);
}

