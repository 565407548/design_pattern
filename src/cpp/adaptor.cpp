#include<iostream>

#include "adaptor.h"

using namespace std;

FactoryA::FactoryA(){
  
}

FactoryA::~FactoryA(){
  
}

void FactoryA::CreateB(){
  cout<<"can't create b"<<endl;
}

FactoryB::FactoryB(){
  
}

FactoryB::~FactoryB(){
  
}
void FactoryB::CreateB(){
  cout<<"create B"<<endl;
}

Adaptor::Adaptor(FactoryB *fb){
  _factoryB=fb;
}

Adaptor::~Adaptor(){
  
}

void Adaptor::CreateB(){
  _factoryB->CreateB();
}
