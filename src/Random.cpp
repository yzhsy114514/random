#include "Random.hpp"
std::random_device Random::rd;
std::mt19937 Random::gen(Random::rd());
int Random::RandomDist(int min, int max)
{
    if (min > max) {
        return 255;
    }
    std::uniform_int_distribution<> dist(min, max); // 尖括号自动int
    return dist(gen);                               // 返回随机数
}
