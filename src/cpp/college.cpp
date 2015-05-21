#include <iostream>

#include "curriculum.h"
#include "college.h"

using namespace std;

College::College(){
  
}

CS * College::CreateCS(){
  return NULL;
}

Math * College::CreateMath(){
  return NULL;
}

College::~College(){
  
}

Whut::Whut(){

}

CS * Whut::CreateCS(){
  return new WhutCS();
}

Math * Whut::CreateMath(){
  return new WhutMath;
}

Whut::~Whut(){
  
}

Hust::Hust(){
  
}

CS * Hust::CreateCS(){
  return new HustCS;
}

Math * Hust::CreateMath(){
  return new HustMath;
}

Hust::~Hust(){
  
}
