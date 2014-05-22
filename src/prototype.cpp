#include<iostream>
#include<string.h>

#include "prototype.h"

using namespace std;

Prototype::Prototype(){
  
}

Prototype::Prototype(int data){
  _data=data;
}

Prototype * Prototype::Clone(){
  Prototype *cp=new Prototype;

  /*复制数据域*/
  memcpy((void*)cp,(void*)this,sizeof(Prototype));
  return cp;
}

Prototype::~Prototype(){
  
}
