/*
 * @Author: Wink
 * @Date: 2022-01-22 12:01:36
 * @LastEditTime: 2022-01-23 15:42:43
 * @Description: 摄氏度转华氏度
 * Copyright (c) 2022 by Wink, All Rights Reserved. 
 */
#include <stdio.h>
int main() {
    float fahr, celsius;
    int lower, upper, step;
    lower = -100;
    upper = 100;
    step = 10;
    celsius = lower;
    printf("celsius transfer to fahr")
    while (celsius <= upper) {
        fahr = (9.0/5.0) * celsius + 32.0;
        printf("%6.1f %3.0f\n", celsius, fahr);
        celsius += step;
    }
    return 0;
}