#ifndef _FACTORY_H_
#define _FACTORY_H_

#include "timeTable.h"

class Factory
{
 public:
  Factory();
  virtual ~Factory();

  virtual TimeTable * CreateTimeTable();
};

class L1Factory:public Factory
{
 public:
  L1Factory();
  virtual ~L1Factory();

  TimeTable * CreateTimeTable();
};

class L2Factory:public Factory
{
 public:
  L2Factory();
  virtual ~L2Factory();

  TimeTable * CreateTimeTable();
};




#endif /* _FACTORY_H_ */
