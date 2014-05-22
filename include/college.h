#ifndef _COLLEGE_H_
#define _COLLEGE_H_

#include "curriculum.h"

/*
  一所大学就是一个抽象工厂 Abstract Factory
 */

class College
{
public:
  College();

  virtual CS * CreateCS();
  virtual Math * CreateMath();
  
  virtual ~College();
};

class Whut : public College
{
public:
  Whut();

  CS * CreateCS();
  Math * CreateMath();
  
  virtual ~Whut();
};

class Hust:public College
{
public:
  Hust();

  CS * CreateCS();
  Math * CreateMath();
  
  virtual ~Hust();
};

#endif /* _COLLEGE_H_ */
