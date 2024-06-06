#ifndef _Enemy_
#define _Enemy_
#include "Actor.h"
#include "Actor.cpp"
class Enemy : public Actor
{
   private:
   int mExp;
   public:
   void set_Exp(int iExp);    
   int get_exp();

   virtual void showinfo() override;
};
#endif