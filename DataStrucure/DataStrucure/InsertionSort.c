//
//  InsertionSort.c
//  DataStrucure
//
//  Created by fangyp on 2019/11/11.
//  Copyright © 2019 fangyp. All rights reserved.
//

#include "InsertionSort.h"
/**
 *插入排序 O(n^2)
 *插入排序的基本思想是：
 *每步将一个待排序的记录，按其关键码值的大小插入前面已经排序的文件中适当位置上，直到全部插入完为止。（优：提前终止循环）
 **/
int insertionSort(){
    
    int array[] = {3,5,6,9,4,1,2,7,8};
    int length = sizeof(array)/ sizeof(array[0]); //数组长度
    
    int i,n,temp;
    //插入排序第一个元素本身就有序，所以从1开始
    for (i = 1; i < length; i++ ) {//寻找元素array[i]合适的插入位置
        for (n = i; n > 0; n--) {//从当期位置i比较，最多比较到n=1时，即
            if (array[n] < array[n-1]) {
                temp = array[n];
                array[n] = array[n-1];
                array[n-1] =temp;
            }else {
                break; //n位置的元素已经大于等于n-1位置的元素终止循环
            }
        }
    }
    printf("插入排序:");
    for (i =0; i<length; i++) {
        printf("%d",array[i]);
    }
    printf("\n");
    return 0;
}

//插入排序的优化
int optimizationInsertionSort(){
    
    int array[] = {3,5,6,9,4,1,2,7,8};
    int length = sizeof(array)/ sizeof(array[0]);

    int i,n,temp;
    
    for (i = 1; i < length; i++ ) {
        
        temp = array[i]; //保存当前位置i的元素，其中[0,i-1]已经有序
        
        for (n = i; n > 0; n--) {
            
            if (temp > array[n-1]) {
                array[n] = array[n-1];// 后移一位
            }else {
                break;
            }
        }
        array[n] = temp;// 插入到合适的位置
    }
    
    printf("插入排序:");
    for (int i =0; i<length; i++) {
        printf("%d",array[i]);
    }
    printf("\n");
    return 0;
}
