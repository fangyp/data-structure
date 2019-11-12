//
//  FirstNoRepetition.c
//  DataStrucure
//
//  Created by fangyp on 2019/11/12.
//  Copyright © 2019 fangyp. All rights reserved.
//

#include "FirstNoRepetition.h"
#include <string.h>

int firstNoRepetition(){
    
    const char *name = "ffangyyangpping";
    
    int i;
    
    int count[26] = {0};
    
    int index[26] = {0};
    
    for (i = 0; i < strlen(name); i++) {
        count[name[i] - 'a'] ++ ; //记录该字母出现的次数
        if(index[name[i] - 'a'] == 0) {
            index[name[i] - 'a'] = i; // 记住该字母第一次出现的索引
        }
    }
    
    int pos = (int)strlen(name);
    
    for (i = 0; i < 26; i++) {
        if(count[i] == 1){ // 找到之出现一次的字母
            if(index[i] != -1 && index[i] < pos) { // 在只出现一次的子母中找出索引值最小的即可
                pos = index[i];
            }
        }
    }
    if (pos<strlen(name)) {
        printf("找到字符串中第一个不重复的字符：%c\n\n",name[pos]);
    }
    
    return 0;
}
