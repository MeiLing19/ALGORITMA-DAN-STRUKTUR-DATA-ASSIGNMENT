#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_Sort(int array[], int size){
    int i, j, temp;
    for(i = 0; i < size; i++){
        for(j=0; j < size-i-1; j ++){
            if(array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void cetakArray(int array[], int size){
    for(int i=0; i<size; ++i){
        printf("%d ",array[i]);
    }
    printf("\n");
}

int main(){
    int data[]= {23, 65, 30, 8, 33, 24, 76, 7};
    int size = sizeof(data)/sizeof(data[0]);
    bubble_Sort(data, size);
    printf("Array Ascending(NIM Ganjil):\n");
    cetakArray(data,size);
}