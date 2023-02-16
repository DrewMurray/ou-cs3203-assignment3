#include<stdio.h>

int summation(int arr[], int length){
    int sum = 0;
    for (int i = 0; i < length; i++){
        sum += arr[i];
    }
    return sum;
}

int multiplication(int arr[], int length){
    int mult = 1;
    for (int i = 0; i < length; i++){
        mult = mult * arr[i];
    }
    return mult;
}

void main(){
    int len;
    printf("Enter number of elements in the array.");
    scanf("%d", &len);

    int arr[len];
    printf("Enter elements of array: ");
    for(int i=0; i < len; i++){
        scanf("%d", &arr[i]);
    }

    printf("Sum of array: %d\n", summation(arr, len));
    printf("Product of array: %d\n", multiplication(arr, len));
}