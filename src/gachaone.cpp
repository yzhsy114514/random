#include "gachaone.h"
#include "mssleep.h"
#include "Random.hpp"
#include <print>
using namespace std;

void oneGacha(int& fre)
{
    print("正在抽卡...\n");
    ms_sleep(400);
    if (fre >= 90) {
        print("保底！SSR\n");
        fre = 0;
    }
    else if (fre >= 50 && fre < 60) {
        print("保底！SR\n");
        fre++;
    }
    else {
        int ssr = Random::RandomDist(0, 71);
        int sr  = Random::RandomDist(0, 31);
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
