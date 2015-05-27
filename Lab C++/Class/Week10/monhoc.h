#pragma once

#include <iostream>
#include <cstring>

using namespace std;

class Monhoc {
    char ten[100];
    int sotinchi;
public:
    const char* layten();
    int laysotinchi();
public:
    Monhoc();
    void nhapmonhoc();
    void inmonhoc();
    void copy(Monhoc mh);
    void operator=(Monhoc mh);
};

