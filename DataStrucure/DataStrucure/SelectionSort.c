//
//  SelectionSort.c
//  DataStrucure
//
//  Created by fangyp on 2019/11/11.
//  Copyright © 2019 fangyp. All rights reserved.
//

#include "SelectionSort.h"

/**
 *选择排序 O(n^2)
 *工作原理是每一次从待排序的数据元素中选出最小（或最大）的一个元素，存放在序列的起始位置，直到全部待排序的数据元素排完。
 *选择排序是不稳定的排序方法（比如序列[5， 5， 3]第一次就将第一个[5]与[3]交换，导致第一个5挪动到第二个5后面）
 * (缺：两层for循环必须全部走完)
 **/
int selectionSort(){
    
    int array[] = {3,5,6,9,4,1,2,7,8};
    int length = sizeof(array)/ sizeof(array[0]); //数组长度
    
    int i,n,minIndex,temp;
    
    for (i = 0; i<length; i++) {
        // 寻找[i length）区间最小值
        minIndex = i;
        for (n = i+1; n<length; n++) {
            if(array[n]<array[minIndex]){
                minIndex = n;
            }
        }
        if(minIndex != i) {
            temp = array[i];//循环结束后，交换两个标号下的元素的值
            array[i] = array[minIndex];
            array[minIndex] = temp;
        }
    }
    printf("选择排序:");
    for (i =0; i<length; i++) {
        printf("%d",array[i]);
    }
    printf("\n");
    return 0;
}
