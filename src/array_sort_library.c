#include <stddef.h>
#include <stdint.h>
//#include ""

size_t quick_sort(uint8_t array[], size_t length){
    //if (length < 2) return 0;
    // 1
    size_t index_of_pivot = length/2; // индекс опорного элемента
    // 2
    for(size_t i = 0; i < index_of_pivot - 1; i++){
        if(array[i] > array[index_of_pivot]){
            /*uint8_t temp = array[i];
            array[i] = array[index_of_pivot];
            array[index_of_pivot] = temp;
            index_of_pivot = i;*/
            printf("shya: ");
            for(size_t i = 0; i < length; i++){
                printf("%d ", array[i]);
            }
            putchar('\n');
            /*uint8_t temp = array[i];
            array[index_of_pivot-1] = temp;*/
            array[i] = array[index_of_pivot-1];
            swap(array[i], array[index_of_pivot-1]);
            //index_of_pivot = i;
            printf("shya2: ");
            for(size_t i = 0; i < length; i++){
                printf("%d ", array[i]);
            }
            putchar('\n');
            swap(array[index_of_pivot-1], array[index_of_pivot]);
            index_of_pivot--;
            printf("shya3: ");
            for(size_t i = 0; i < length; i++){
                printf("%d ", array[i]);
            }
            putchar('\n');
            printf("index: %d\n", index_of_pivot);
            //exit(1);
        }
        //if(i == 0) break;
    }
    if(index_of_pivot != 0){
        for(size_t i = 0; i < index_of_pivot - 1; i++){
            if(array[i] > array[index_of_pivot]){
                printf("shya: ");
                for(size_t i = 0; i < length; i++){
                    printf("%d ", array[i]);
                }
                putchar('\n');
                swap(array[i], array[index_of_pivot-1]);
                printf("shya2: ");
                for(size_t i = 0; i < length; i++){
                    printf("%d ", array[i]);
                }
                putchar('\n');
                swap(array[index_of_pivot-1], array[index_of_pivot]);
                index_of_pivot--;
                printf("shya3: ");
                for(size_t i = 0; i < length; i++){
                    printf("%d ", array[i]);
                }
                putchar('\n');
                printf("index: %d\n", index_of_pivot);
            }
            //if(i == 0) break;
        }
    }
    return index_of_pivot;
}

void _1byte_buble_sort(uint8_t array[], size_t length){ // length -- длина массива
    for(size_t i = 0; i < length-1; i++){
        for(size_t j = 0; j < length-i-1; j++){
            if(array[j] > array[j+1]){
                uint8_t temp = array[j+1];
                array[j+1] = array[j];
                array[j] = temp;
            }
        }
    }
}

void _2buble_sort(uint16_t array[], size_t length){ // length -- длина массива
    for(size_t i = 0; i < length-1; i++){
        for(size_t j = 0; j < length-i-1; j++){
            if(array[j] > array[j+1]){
                uint16_t temp = array[j+1];
                array[j+1] = array[j];
                array[j] = temp;
            }
        }
    }
}

void _4buble_sort(uint32_t array[], size_t length){ // length -- длина массива
    for(size_t i = 0; i < length-1; i++){
        for(size_t j = 0; j < length-i-1; j++){
            if(array[j] > array[j+1]){
                uint32_t temp = array[j+1];
                array[j+1] = array[j];
                array[j] = temp;
            }
        }
    }
}

