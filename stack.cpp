#include <iostream>
#include <string>
using namespace std;

const int MAX_SIZE = 6;

int push(string arr[], int &sp, const string &v) {
    if (sp >= MAX_SIZE) return -1;
    arr[sp++] = v;
    return 0;
}