//
// Created by yidafu on 2017/6/22.
//


#include <stdio.h>
#include <math.h>
/**
 *
 * @function 这个函数是用来用 * 绘制余弦函数的
 * @return 0
 */
int main() {
    double length = 0,
            PI = 3.1415;
    for(int i = 1 ; i <= 20 ;  i ++ ) {
        length = cos(PI/2 * 0.05 * i)* 100;
        for(int j = 0 ; j < length ; j += 3)
            printf(" ");
        printf("*\n");
    }
    return 0;
}