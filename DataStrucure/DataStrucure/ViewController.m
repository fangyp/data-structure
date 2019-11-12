//
//  ViewController.m
//  DataStrucure
//
//  Created by fangyp on 2019/11/11.
//  Copyright © 2019 fangyp. All rights reserved.
//

#import "ViewController.h"
#import "SelectionSort.h"
#import "InsertionSort.h"
#import "BubbleSort.h"
#import "ShellSort.h"
#import "QuickSort.h"
#import "HeapSort.h"
#import "MergeSortedList.h"
#import "GetIndexNumber.h"
#import "GetMaxNumber.h"
#import "FirstNoRepetition.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // 选择排序 O(n^2)
    selectionSort();
    // 插入排序 O(n^2)
    insertionSort();
    // 优化插入排序
    optimizationInsertionSort();
    // 冒泡排序
    bubbleSortA();
    // 冒泡排序
    bubbleSortB();
    // 希尔排序 O(n^2)
    shellSort();
    // 快速排序 O(n^2)    
    quickSort();
    // 堆排序
    heapSort();
    // 有序数组的合并
    int aarray[] = {1,3,5,7,7};
    int barray[] = {2,4,6,8,9};
    int alength = sizeof(aarray)/sizeof(aarray[0]);
    int blength = sizeof(barray)/sizeof(barray[0]);
    int result[10] = {0};
    mergeList(aarray, alength, barray, blength, result);
    //取数字指定位数的字
    getIndexNumber(9898, 3);//从后往前取
    //求数组中最大数的位数
    getMaxNumber();
    //找到字符串中第一个不重复的字符    
    firstNoRepetition();
}


@end
