#include<stdio.h>

int summation(int arr[], int length){
    int sum = 0;
    for (int i = 0; i < length; i++){
        sum += arr[i];
    }
    return sum;
}
