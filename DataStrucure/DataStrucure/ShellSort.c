//
//  ShellSort.c
//  DataStrucure
//
//  Created by fangyp on 2019/11/12.
//  Copyright © 2019 fangyp. All rights reserved.
//

#include "ShellSort.h"

/**
 *希尔排序 O(n^2)
 *希尔排序是插入排序的一种又称“缩小增量排序”，是直接插入排序算法的一种更高效的改进版本。希尔排序是非稳定排序算法。
 *希尔排序是把记录按下标的一定增量分组，对每组使用直接插入排序算法排序；随着增量逐渐减少，每组包含的关键词越来越多，
 *当增量减至1时，整个文件恰被分成一组，算法便终止。
 *实质上是一种分组插入方法
 *
 *使用该算法，应首先为待排序元素序列选择一个不大于元素个数的增量，或者也称步长(step)。其本质是给元素序列分组。
 *现在我们有如下一组数据:
 *96，107, 145, 137, 106, 142, 146, 134, 32, 86
 *一般我们会选择元素个数的一半作为步长(这里元素个数为10，所以步长取5)。其本质是给这个序列分为5(5就是元素的下标之差)组：
 *(96--142,107--146，145--134,137--32,106--86，所以这几组元素都是对应关系。)。并让步长在循环中每次变为上次的一半。
 * 其次，应该从下标等于步长处开始遍历直至到达末尾。并使用一个临时变量(temp)保存每次遍历到的值，为以后的插入排序做准备.
 *然后，就是遍历数组啦，按照一定规则(升序还是降序，根据需要，这里以升序为例)，用上面的临时变量temp来和对应位置元素比较
 *
 **/

int shellSort(){
    
    int array[] = {3,5,6,9,4,1,2,7,8};
    int length = sizeof(array)/ sizeof(array[0]);
    int i, n, temp; //i =index n = next index
    
    for (int step = length/2; step>0; step /= 2) { //step就是步长，并让之在循环中每次减少一半
        for (i=step; i<length; i++) {
            temp = array[i];
            for (n = i - step; n >= 0; n -= step) {
                if(array[n]>temp){
                    array[n+step] = array[n];
                }else {
                    break;
                }
            }
             array[n+step] = temp;
        }
    }
    printf("希尔排序:");
    for (i =0; i<length; i++) {
        printf("%d",array[i]);
    }
    printf("\n");
    return 0;
}
