#ifndef _Actor_
#define _Actor_
#include<iostream>
#include<string>
using namespace std;

class Actor
{
  protected :
  string mName =  "";
  int mHp = 0;  
  public:
  string get_name();
  int get_hp();
  virtual void showinfo();
  virtual void set_Name(string actorname);  
  virtual void set_Hp( int actorhp);
};

#endif
