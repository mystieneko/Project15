#include "mathFunc.h"
#include <algorithm>
#include <vector>
// hi github
int factorial(int n)
{
    if (n >= 0) {
        if (n == 1 || n == 0) { return 1; }
        return n * (factorial(n - 1));
    }
    else {
        return -1;
    }
}

float divAtoB(float a, float b)
{
    return a / b;
}

bool isPositive(int n)
{
    return n > 0;
}

bool areEqual(std::string str1, std::string str2) {
    std::transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
    std::transform(str2.begin(), str2.end(), str2.begin(), ::toupper);
    return (str1 == str2);
}

std::vector<int> sortVec(std::vector<int> v) {
    std::sort(v.begin(), v.end());
    return v;
}

std::string reverseStr(std::string str)
{
    std::reverse(str.begin(), str.end());
    return str;
}
