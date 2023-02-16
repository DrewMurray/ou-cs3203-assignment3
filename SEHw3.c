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