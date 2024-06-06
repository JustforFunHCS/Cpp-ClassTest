#include"Enemy.h"
void Enemy :: showinfo(){
    Actor::showinfo();
    cout << "experience :" << mExp << endl;
}
void Enemy :: set_Exp(int iExp){
  mExp = iExp;
}
int Enemy :: get_exp(){
    return mExp;
}