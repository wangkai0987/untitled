//
// Created by Administrator on 2021/7/20.
//

#include <stdio.h>
#include <stdbool.h>
#include "wzSample.h"

void example1(int count){
    for(int i=1; i<10; i++  ){
    printf("hello ~ this is c program\n");
    printf("i=%d\n",i);
    }
}

void example2(int count){
    int j = 1;
    while (j<10) {
    if (j < 5 ) {
        printf("j<5, 当前j 为 %d", j);
    }
    printf("life is a fairy\n");
    j++;
    }

}

void example3() {
    int num_k[10] = {
            0,
    };
}