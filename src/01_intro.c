#include "../../My_mastermind/include/header.h"


void intro(){
    char welcome_message[30] = "Will you find the secret code?";
    write(1,welcome_message,30);
    write(1,"\n",1);
}