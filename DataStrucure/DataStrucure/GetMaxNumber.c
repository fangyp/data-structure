//
//  GetMaxNumber.c
//  DataStrucure
//
//  Created by fangyp on 2019/11/12.
//  Copyright © 2019 fangyp. All rights reserved.
//

#include "GetMaxNumber.h"

int getMaxNumber(){
    
    int array[] = {3,5,56,74,669,1,92,7,8};
    int length = sizeof(array)/ sizeof(array[0]); //数组长度
    
    int i,max,maxIndex = 0;
    // 假设一个数最大
    max = array[0];
    
    for (i = 1; i < length; i++) {
        if (array[i] > max) {
            max = array[i];// 记录最大的数
            maxIndex = i; // 记录最大的数的位置
        }
    }
    // 计算最大数的位数
    int time = 0;
    
    while (max > 0) {
        max /= 10;
        time ++;
    }
    
    printf("数组中最大的数为：%d 最大数的下标为：%d 最大数的位数为：%d ",array[maxIndex],maxIndex,time);
    printf("\n");
    return 0;
    
}
