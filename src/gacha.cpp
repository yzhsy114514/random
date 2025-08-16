#include "gacha.h"
#include "Random.hpp"
#include <ctime>
#include <print>
using namespace std;
void ms_sleep(unsigned int milliseconds)
{
    struct timespec ts = {.tv_sec  = milliseconds / 1000,
                          .tv_nsec = (milliseconds % 1000) * 1000000};
    nanosleep(&ts, NULL);
}
void oneGacha(int& fre)
{
    print("正在抽卡...\n");
    ms_sleep(400);
    if (fre >= 90) {
        print("保底！SSR\n");
        fre = 0;
    }
    else if (fre == 50) {
        print("保底！SR\n");
        fre++;
    }
    else {
        int ssr = Random::RandomDist(0, 49);
        int sr  = Random::RandomDist(0, 24);
        int r   = Random::RandomDist(0, 1);
        if (ssr == 0) {
            print("SSR\n");
        }
        else if (sr == 0) {
            print("SR\n");
        }
        else {
            print("R\n");
        }
        fre++;
    }
}
void tenGacha(int& fre)
{
    print("正在抽卡...\n");
    ms_sleep(400);
    if (fre >= 90) {
        print("保底！SSR\n");
        fre = 0;
    }
    if (fre == 50) {
        print("保底！SR\n");
        fre++;
    }
    for (int i = 0; i < 10; ++i) {
        int ssr = Random::RandomDist(0, 49);
        int sr  = Random::RandomDist(0, 24);
        int r   = Random::RandomDist(0, 1);
        if (ssr == 0) {
            print("SSR\n");
        }
        else if (sr == 0) {
            print("SR\n");
        }
        else {
            print("R\n");
        }
        fre++;
    }
}
