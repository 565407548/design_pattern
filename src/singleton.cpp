#include<iostream>

using namespace std;

#include "singleton.h"

Singleton * Singleton::_instance=NULL;

Singleton::Singleton(){
  
}

Singleton * Singleton::Instance(){
  if(_instance==NULL){
    _instance=new Singleton;
  }
  return _instance;
}
