//
//  BubbleSort.c
//  DataStrucure
//
//  Created by fangyp on 2019/11/12.
//  Copyright © 2019 fangyp. All rights reserved.
//

#include "BubbleSort.h"
/**
 *冒泡排序算法的运作如下：（从后往前）
 *1.比较相邻的元素。如果第一个比第二个大，就交换他们两个。
 *2.对每一对相邻元素作同样的工作，从开始第一对到结尾的最后一对。在这一点，最后的元素应该会是最大的数。
 *3.针对所有的元素重复以上的步骤，除了最后一个。
 *4.持续每次对越来越少的元素重复上面的步骤，直到没有任何一对数字需要比较。
 **/
int bubbleSortA(){
    
    int array[] = {3,5,6,9,4,1,2,7,8};
    int length = sizeof(array)/ sizeof(array[0]);
    
    int i,n,temp;
    //，array[j] 和 array[j+1]比较,如果前者比后者小，把前者和后者调换顺序，两两调换后一轮下来 最小的会被排到最后去，以此类推.
    for (i=0; i<length-1; i++) {// 内部循环执行length-1次
        for (n = 0; n < length - i - 1; n ++) {
            if(array[n] > array[n+1]){
                temp = array[n];
                array[n] = array[n+1];
                array[n+1] = temp;
            }
        }
    }
    printf("冒泡排序:");
    for (i =0; i<length; i++) {
        printf("%d",array[i]);
    }
    printf("\n");
    
    return 0;
}

/**
 *用8和7比较，在和2比较,在和1比较以此进行,发现9是最大的，把9排到第一位(index=0的位置)。
 *然后i=1,也就是第二轮，就不用看下标为0的9了因为他是老大，然后接着比较。
 */
int bubbleSortB(){
    
    int array[] = {3,5,6,9,4,1,2,7,8};
    int length = sizeof(array)/ sizeof(array[0]);
    
    int i,n,temp;
    
    for (i=0; i<length-1; i++) {
        for (n =(length-2); n>=i; n--) {
            if (array[n]<array[n+1]) {
                temp = array[n];
                array[n]=array[n+1];
                array[n+1] = temp;
            }
        }
    }
    printf("冒泡排序:");
    for (i =0; i<length; i++) {
        printf("%d",array[i]);
    }
    printf("\n");
    
    return 0;
}
