#include<iostream>

#include "singleton.h"
#include "timeTable.h"
#include "factory.h"

using namespace std;

int main(int argc, char *argv[])
{
  // Singleton *s=Singleton::Instance();

  Factory *f1=new L1Factory;
  f1->CreateTimeTable();

  Factory *f2=new L2Factory;
  f2->CreateTimeTable();
  
  return 0;
}
