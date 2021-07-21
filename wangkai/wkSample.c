//
// Created by Administrator on 2021/7/20.
//

#include "wkSample.h"

void calculatePower() {

    int num[MAXI] = {
            0,
    };
    num[0] = 7;
    for (int i = 0; i < POW - 1; i++) {
        int j = 0;
        while (1) {
            if (num[j] == 0)
                break;
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

