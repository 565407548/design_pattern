#include<iostream>

#include"Singleton1.h"

using namespace std;

Singleton1* Singleton1::mInstance=new Singleton1;

Singleton1::Singleton1(){
  
}
Singleton1::~Singleton1(){
  if(mInstance!=NULL){
    delete mInstance;
  }
}

Singleton1 *Singleton1::getInstance(){
  return mInstance;
}
