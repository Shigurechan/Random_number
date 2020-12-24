#include <iostream>

#include <locale.h>
#include <Random>


std::random_device rnd;                         // 非決定的な乱数生成器を生成
std::mt19937 mt(rnd());                         //  メルセンヌ・ツイスタの32ビット版、引数は初期シード値
std::uniform_int_distribution<> Rand(0, 99);    // [0, 99] 範囲の一様乱数


int main()
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",Rand(mt));
    }

    return 0;
}