#include <random>
#pragma once
class Random
{
public:
    static int RandomDist(int min, int max);

private:
    static std::random_device rd;
    static std::mt19937 gen; // 获取 随机数
};
