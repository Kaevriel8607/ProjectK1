#include <stdio.h>

int main(){
    int i, sub, j;

    int array[] = {9, 3, 6, 8, 2, 1, 7, 4, 5};
    int size = sizeof(array)/sizeof(array[0]);

    for(j = 0; j < size-1; j++){
        for(i = 0; i < size-1; i++){
            if(array[i] > array[i+1]){
                sub = array[i+1];
                array[i+1] = array[i];
                array[i] = sub;
            }
        }
        


    }
    for(i = 0; i < size-1; i++){
        
        
        printf("%d", array[i]);
        printf(", ");

    
    }




    return 0;
}