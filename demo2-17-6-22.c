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
            X = 0;
    // x 控制横坐标
    for(int x = 100 ; x > 0 ;x -= 5 ) {
        // 0 - 1
        X = (double)x/100;
        length = acos(X) * 100;
        for(int j = 0 ; j < length ; j += 3)
            printf(" ");
        printf("*\n");
    }
    return 0;
}