#include<iostream>

#include "timeTable.h"
#include "factory.h"

using namespace std;


Factory::Factory(){
  
}
TimeTable * Factory::CreateTimeTable(){
  return NULL;
}
Factory::~Factory(){
  
}

L1Factory::L1Factory(){
  
}
L1Factory::~L1Factory(){
  
}

TimeTable * L1Factory::CreateTimeTable(){
  return new L1TimeTable;
}

L2Factory::L2Factory(){
  
}

TimeTable * L2Factory::CreateTimeTable(){
  return new L2TimeTable;
}

L2Factory::~L2Factory(){
  
}
