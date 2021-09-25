//
//  main.c
//  sort
//
//  Created by Rakis on 2021/4/24.
//

#include <stdio.h>

#include "rakis_sort.h"

int main(int argc, const char * argv[]) {

    int arr[] = { 22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70 };
    int len = (int)(sizeof(arr)/sizeof(*arr));
    
    // bubbleSort(arr, len);
    // for (int i = 0; i < len; i++) {
    //     printf("%d, ", arr[i]);
    // }
    // printf("\n");

    selectionSort(arr, len);
    for (int i = 0; i < len; i++) {
        printf("%d, ", arr[i]);
    }
    printf("\n");

    return 0;
}



// todo 增加随机生成数组与自动校验
