#include<iostream>

#include"Singleton.h"

using namespace std;

Singleton* Singleton::mInstance=NULL;

Singleton::Singleton(){
  mInstance=NULL;
}
Singleton::~Singleton(){
  if(mInstance==NULL){
    delete mInstance;
  }
}

Singleton * Singleton::getInstance(){
  if(mInstance==NULL){
    mInstance=new Singleton;
  }
  return mInstance;
}
