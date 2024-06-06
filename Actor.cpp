#include "Actor.h"
void Actor :: set_ActorName(string iName){
    mName = iName;
}
void Actor :: set_ActorHp(int iHp){
    mHp = iHp;
}
void Actor ::showinfo() {
    cout << "Actor Name :" << mName <<endl; 
    cout << "Health :" << mHp << endl;
}
string Actor :: get_name(){ return mName;}
int Actor :: get_hp(){return mHp;}