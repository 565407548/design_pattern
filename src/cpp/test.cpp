#include<iostream>

#include "timeTable.h"
#include "factory.h"

#include "curriculum.h"
#include "college.h"

#include "prototype.h"

#include "adaptor.h"

using namespace std;

int main(int argc, char *argv[])
{
  /*
  // Singleton
  Singleton *s=Singleton::Instance();
  */
  /* //Factory Method
  Factory *f1=new L1Factory;
  f1->CreateTimeTable();

  Factory *f2=new L2Factory;
  f2->CreateTimeTable();
  */

  /*
  //Abstract Factory
  College * whut=new Whut;
  xbwhut->CreateCS()->desc();
  whut->CreateMath()->desc();

  College * hust=new Hust;
  hust->CreateCS()->desc();
  hust->CreateMath()->desc();
  */

  /*// Prototype
  Prototype *p1=new Prototype(5);
  Prototype *p2=p1->Clone();
  */

  //Adaptor
  // FactoryB *fb=new FactoryB();
  // FactoryA *fa=new Adaptor(fb);
  // fa->CreateB();
  
  return 0;
}
