/*
 * @Author: Wink
 * @Date: 2022-01-22 11:36:55
 * @LastEditTime: 2022-01-23 16:07:52
 * @Description: 打印温度转换表
 * Copyright (c) 2022 by Wink, All Rights Reserved. 
 */
#include <stdio.h>
int main() {
    float fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    printf("Temperature translate program\n");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr += step;
    }
    return 0;
}