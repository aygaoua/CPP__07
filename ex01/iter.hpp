#pragma once

#include <iostream>
#include <string>
#include <functional>

template <typename T, typename FUNC> void iter(T *a, int len, FUNC *f){
    for (int i = 0; i < len; ++i) {
        f(a[i]);
    }
}

