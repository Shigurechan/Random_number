#include <iostream>

#include <locale.h>
#include <Random>


std::random_device rnd;                         // �񌈒�I�ȗ���������𐶐�
std::mt19937 mt(rnd());                         //  �����Z���k�E�c�C�X�^��32�r�b�g�ŁA�����͏����V�[�h�l
std::uniform_int_distribution<> Rand(0, 99);    // [0, 99] �͈͂̈�l����


int main()
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",Rand(mt));
    }

    return 0;
}