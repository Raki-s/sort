//
//  rakis_sort.c
//  sort
//
//  Created by Rakis on 2021/4/24.
//

#include <stdio.h>

#include "rakis_sort.h"

// int arr[] = { 22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70 };

void swap(int *left, int *right)
{
    int temp = *left;
    *left = *right;
    *right = temp;
    
    return;
}

void bubbleSort(int arr[], int len)
{
    int lastSwapIndex = len - 1;
    
    for (int i = lastSwapIndex; i > 0; i = lastSwapIndex, lastSwapIndex = -1) {
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                lastSwapIndex = j;
            }
        }
    }
    
    return;
}


void selectionSort(int arr[], int len)
{
    int curIndex = 0;
    int i = curIndex;
    int min = 0;
    int minIndex = 0;
    
    for (curIndex = 0; curIndex < len; curIndex++) {
        for (i = curIndex, min = arr[curIndex], minIndex = i; i < len; i++) {
            if (arr[i] < min) {
                min = arr[i];
                minIndex = i;
            }
        }
        
        swap(&arr[curIndex], &arr[minIndex]);
    }

    return;
}
