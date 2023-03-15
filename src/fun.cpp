// Copyright 2022 UNN-IASR
#include "fun.h"

int64_t power(int64_t x, uint16_t n) {
    int64_t res = 1;

    for (int64_t i = 0; i < n; i++) {
        res = res * x;
    }

    return res;
}
