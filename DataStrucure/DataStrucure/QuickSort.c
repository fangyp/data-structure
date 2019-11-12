//
//  QuickSort.c
//  DataStrucure
//
//  Created by fangyp on 2019/11/12.
//  Copyright © 2019 fangyp. All rights reserved.
//

#include "QuickSort.h"

/**
 *基本思想:
 *通过一趟排序将要排序的数据分割成独立的两部分，其中一部分的所有数据都比另外一部分的所有数据都要小，
 *然后再按此方法对这两部分数据分别进行快速排序，整个排序过程可以递归进行，以此达到整个数据变成有序序列。
 */

int array[] = {3,5,6,9,4,1,2,7,8};
int length = sizeof(array)/ sizeof(array[0]);

void readQuickSort(int left, int right){
    
    int i,n,t,temp;
    
    if (left > right) {
        return;
    }
    temp = array[left];//temp中存的就是基准数
    i = left;
    n = right;
    
    while (i != n) {
         //顺序很重要，要先从右边开始找
        while (array[n] >= temp && i < n){
            n--;
        }
        //再找右边的
        while (array[i] <= temp && i < n){
            i++;
        }
         //交换两个数在数组中的位置
        if(i < n){
            t = array[i];
            array[i] = array[n];
            array[n] = t;
        }
    }
    //最终将基准数归位
    array[left] = array[i];
    array[i] = temp;
    
    //继续处理左边的，这里是一个递归的过程
    readQuickSort(left, i-1);
    //继续处理右边的 ，这里是一个递归的过程
    readQuickSort(i+1, right);
}

/**
 *如数组int array[] = {6,1,2,7,9}; 6在左，9在右,我们将6作为基数。
 *假设从左边开始（与正确程序正好相反）
 *于是i 就会移动到现在的 数字 7 那个位置停下来，而  j 原来在 数字 9 那个位置 ，因为
 *while(array[n]>=temp&&i<n)
 *于是，n也会停留在数字7,那个位置,于是问题来了。当你最后交换基数6与7时，不对呀！！。
 *问题在于当我们先从在边开始时，那么 i 所停留的那个位置肯定是大于基数6的，而在上述例子中，为了满足 i<n 于是 n也停留在7的位置
 *但最后交换回去的时候，7就到了左边，不行，因为我们原本 交换后数字6在左边应该是全部小于6，右边全部大于6.但现在不行了。
 *于是，我们必须从右边开始，也就是从基数的对面开始。
 */

int quickSort(){
    
    readQuickSort(0, length);
    
    printf("希尔排序:");
    for (int i = 0; i<length; i++) {
        printf("%d",array[i]);
    }
    printf("\n");
    return 0;
}

