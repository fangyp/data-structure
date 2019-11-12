//
//  ShellSort.h
//  DataStrucure
//
//  Created by fangyp on 2019/11/12.
//  Copyright © 2019 fangyp. All rights reserved.
//

#ifndef ShellSort_h
#define ShellSort_h

#include <stdio.h>
/**
 *希尔排序 O(n^2)
 *希尔排序是插入排序的一种又称“缩小增量排序”，是直接插入排序算法的一种更高效的改进版本。希尔排序是非稳定排序算法。
 *希尔排序是把记录按下标的一定增量分组，对每组使用直接插入排序算法排序；随着增量逐渐减少，每组包含的关键词越来越多，
 *当增量减至1时，整个文件恰被分成一组，算法便终止。
 *实质上是一种分组插入方法
 **/
int shellSort(void);
#endif /* ShellSort_h */
