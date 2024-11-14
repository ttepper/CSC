#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

class Info {
private:
    static const int NAME_SIZE = 51, ADDR_SIZE = 51, PHONE_SIZE = 14;
    char name[NAME_SIZE];
    int age;
    char address1[ADDR_SIZE];
    char address2[ADDR_SIZE];
    char phone[PHONE_SIZE];

public:
    void writeRecords();
    void readRecords();
};

