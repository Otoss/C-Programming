/*
 * @Author: Wink
 * @Date: 2022-01-23 14:56:38
 * @LastEditTime: 2022-01-23 16:07:29
 * @Description: 逆置温度转换表
 * Copyright (c) 2022 by Wink, All Rights Reserved. 
 */
#include <stdio.h>
int main() {
    float fahr;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    for (fahr = upper; fahr >= lower; fahr -= step) {
        printf("%3.0f %6.1f\n", fahr, (5.0/9.0) * (fahr - 32.0));
    }
    return 0;
}