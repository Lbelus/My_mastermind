#include "../../My_mastermind/include/header.h"


// weak randomiser // gets duplicates within 20 first roll

int randomizer(int *array){
    for (int i = 0;i< SIZE; i++){
        array[i] = rand()%12;
        if(array[i] > 7){i--;}    
    }
    return *array;
}