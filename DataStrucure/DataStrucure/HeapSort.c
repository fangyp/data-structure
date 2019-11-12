//
//  HeapSort.c
//  DataStrucure
//
//  Created by fangyp on 2019/11/12.
//  Copyright © 2019 fangyp. All rights reserved.
//

#include "HeapSort.h"

void sort(int array[], int length);
void swap(int array[],int a ,int b);
void adjustHeap(int array[],int i,int length);

/**
 *堆排序
 *排序过程就是构建最大堆的过程
 *最大堆：每个结点的值都大于或等于其左右孩子结点的值，堆顶元素是最大值
 *
 *基本思路:
 *a.将无需序列构建成一个堆，根据升序降序需求选择大顶堆或小顶堆;
 *b.将堆顶元素与末尾元素交换，将最大元素"沉"到数组末端;
 *c.重新调整结构，使其满足堆定义，然后继续交换堆顶元素与当前末尾元素，反复执行调整+交换步骤，直到整个序列有序。
 */
void heapSort(){
    
    int array[] =  {9,8,7,6,5,4,3,2,1};
    int length = sizeof(array)/ sizeof(array[0]);
    
    sort(array,length);
    printf("堆排序:");
    for (int i = 0; i<length; i++) {
        printf("%d",array[i]);
    }
    printf("\n");
}

void sort(int array[], int length){
    
    // 1.构建大顶堆
    for (int i = length / 2 -1; i >= 0; i--) {
         //从第一个非叶子结点从下至上，从右至左调整结构
        adjustHeap(array, i, length);
    }
    
    for (int n = length -1; n > 0; n --) {
        swap(array, 0, n);
        adjustHeap(array, 0, n);
    }
}

/**
 * 调整大顶堆（仅是调整过程，建立在大顶堆已构建的基础上）
 * @param array 数组
 * @param i i
 * @param length 数组长度
 */
void adjustHeap(int array[],int i,int length){
    int temp = array[i]; //先取出当前元素i
    for (int k = i * 2 + 1; k < length; k = k * 2 + 1) { //从i结点的左子结点开始，也就是2*i+1处开始
        if(k + 1 < length && array[k] < array[k + 1]){ //如果左子结点小于右子结点，k指向右子结点
            k ++;
        }
        if (array[k] > temp) { //如果子节点大于父节点，将子节点值赋给父节点（不用进行交换）
            array[i] = array[k];
            i = k;
        }else {
            break;
        }
    }
    array[i] = temp;
}

/**
 * 交换元素
 * a and b are array`s indexs
 */
void swap(int array[],int a ,int b){
    int temp = array[a];
    array[a] = array[b];
    array[b] = temp;
}
