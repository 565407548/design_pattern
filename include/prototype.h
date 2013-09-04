#ifndef _PROTOTYPE_H_
#define _PROTOTYPE_H_

class Prototype
{
 public:
  Prototype();
  Prototype(int data);
  Prototype *Clone();
  virtual ~Prototype();

 private:
  int _data;
};

#endif /* _PROTOTYPE_H_ */
