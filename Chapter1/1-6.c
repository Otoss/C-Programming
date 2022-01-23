/*
 * @Author: Wink
 * @Date: 2022-01-23 15:44:17
 * @LastEditTime: 2022-01-23 16:38:00
 * @Description: 验证表达式 getchar() != EOF 的值是0还是1
 * Copyright (c) 2022 by Wink, All Rights Reserved. 
 */
#include <stdio.h>
int main() {
    printf("Please enter a char:\n");
    printf("The expression \"getchar() != EOF\" is %d.\n", getchar() != EOF);
    return 0;
}