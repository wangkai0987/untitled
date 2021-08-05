//
// Created by Administrator on 2021/7/20.
//

#include "wkSample.h"

void calculatePower() {

    int num_1[100] = {
            0, 1, 2, 3, 4,
    };

    int num_2 = num_1[4];

    int b = 1 < -1;

    /*while (1) {
        printf("123");
    }*/

    int num[MAXI] = {
            1,2,3,4,5,6,7,8
    };

    int* nResult0 = &num[0];
    int* nResult1 = &num[1];
    int* nResult2 = &num[2];

    int nResult = *nResult0;

    Frmt(&num[MAXI]);
    Frmt(&num[MAXI]);

    num[0] = 7;
    for (int i = 0; i < POW - 1; i++) {
        int j = 0;
        while (1) {
            if (num[j] == 0) {
                break;
            }
            else {
                num[j] *= 7;
                j++;
            }
        }
        for (int ji = 0; ji < MAXI; ji++) {
            if (num[ji] == 0)
                break;
            else {
                Frmt(&num[ji]);
            }
        }
    }

    int i;
    for (i = MAXI - 1; i >= 0; i--) {
        if (num[i] != 0) {
            break;
        }
    }

    for (; i >= 0; i--) {
        num[i];
    }

}

void Frmt(int *buffer) {

    if (*buffer > TenMil) {
        *(buffer + 1) += *buffer / TenMil;
        *buffer = *buffer % TenMil;
    }
}

