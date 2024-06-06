#include<iostream>
#include "Enemy.cpp"
using namespace std;
int main()
{
    Enemy* aBoss = new Enemy();
    aBoss->set_Name("Big boss");
    aBoss->set_Hp(100);
    aBoss->set_Exp(10);
    aBoss->showinfo();
    delete aBoss;
    return 0;
}