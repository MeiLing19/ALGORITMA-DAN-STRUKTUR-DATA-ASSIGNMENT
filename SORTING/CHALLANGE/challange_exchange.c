#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

                
void exchange_Sort(int array[], int size){
    int i, j, temp;
    for(i = 0; i < (size -1); i++){
        for (j=(i + 1); j < size; j++){
            if (array[i] > array[j]){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

void cetakArray(int array[], int size){
    for (int i = 0; i < size; i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}

int main(){
    int data[]= {23, 65, 30, 8, 33, 24, 76, 7};
    int size = sizeof(data)/sizeof(data[0]);
    exchange_Sort(data, size);
    printf("Array Ascending(NIM Ganjil) :\n");
    cetakArray(data,size);
}