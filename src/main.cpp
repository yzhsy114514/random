#include "gacha.h"
#include "Random.hpp"
#include <ctime>
#include <iostream>
#include <limits>
#include <print>

using namespace std;
int main()
{
    int fre = 0;
    print("------------------------");
    print("\n欢迎来到欢乐抽卡！");
    print("\n你要？");
    print("  1.单抽");
    print("  2.十连抽");
    print("  3.退出\n\n");

    while (true) {
        print("请输入：");
        int a;
        cin >> a;
        if (cin.fail() || cin.peek() != '\n') {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            print("不要乱套公式\n");
            continue;
        }
        if (a == 3) {
            print("已退出，欢迎下次游玩哦");
            break;
        }
        else if (a == 1) {
            oneGacha(fre);
        }
        else if (a == 2) {
            tenGacha(fre);
        }
        else {
            print("不要乱套公式\n");
        }
    }
}
