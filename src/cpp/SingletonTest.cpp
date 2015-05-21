#include<iostream>

#include"Singleton.h"
#include"Singleton1.h"
#include"Singleton2.h"

using namespace std;

int main(int argc, char *argv[])
{
  Singleton *instance=Singleton::getInstance();
  Singleton1 *instance1=Singleton1::getInstance();
  Singleton2 *instance2=Singleton2::getInstance();
  return 0;
}
