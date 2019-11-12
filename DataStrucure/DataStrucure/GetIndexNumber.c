//
//  GetIndexNumber.c
//  DataStrucure
//
//  Created by fangyp on 2019/11/12.
//  Copyright © 2019 fangyp. All rights reserved.
//

#include "GetIndexNumber.h"

/**
 *取数字指定位数的字
 *d = 1 代表取个位，d= 2 代表取是十位，d= 3 代表取百位，依此论推
 */
void getIndexNumber(int num, int d){
    
    int pow = 1;
    while (--d > 0) {
        pow *= 10;
    }
    printf("取数字指定位数的字:%d", (num / pow % 10));
    
    printf("\n");
    
    // 可以将此函数的返回值设为 int 将结果返回
    // return num / pow % 10;
}
