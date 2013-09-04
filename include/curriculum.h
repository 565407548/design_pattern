#ifndef _CURRICULUM_H_
#define _CURRICULUM_H_

class CS
{
 public:
  CS();
  virtual void desc();
  virtual ~CS();
};

class WhutCS:public CS
{
 public:
  WhutCS();
  void desc();
  virtual ~WhutCS();
};

class HustCS:public CS
{
 public:
  HustCS();
  void desc();
  virtual ~HustCS();
};

class Math
{
 public:
  Math();
  virtual void desc();
  virtual ~Math();
};

class WhutMath:public Math
{
 public:
  WhutMath();
  void desc();
  virtual ~WhutMath();
};

class HustMath:public Math
{
 public:
  HustMath();
  void desc();
  virtual ~HustMath();
};

#endif /* _CURRICULUM_H_ */
