#include <stddef.h>

void buble_sort(char array[], size_t length){ // length -- длина массива
    for(size_t i = 0; i < length-1; i++){
        for(size_t j = 0; j < length-i-1; j++){
            if(array[j] > array[j+1]){
                char temp = array[j+1];
                array[j+1] = array[j];
                array[j] = temp;
            }
        }
    }
}

