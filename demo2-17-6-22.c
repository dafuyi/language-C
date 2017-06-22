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
//    int length = 100;
    double angle = 0.0;
    double tmp = 0;
    for(int i = 0 ; i <= 180 ;  i += 20 ) {
        tmp = cos(angle + i);
        printf("%.5f\n",tmp);
    }
    return 0;
}