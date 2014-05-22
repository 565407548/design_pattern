
/*
Adaptor 模式可以通过 组合 或者 继承 的方式来实现
以下实例是模拟公司 FactoryA 不能生产产品B， 而公司FacotryB可以生产，FactoryA找FactoryB代工，在外界看来，就是公司FactoryA生产了产品B

本实例通过 组合 方式实现 Adaptor 模式
优先选择组合 然后才选择继承
 */

class FactoryA
{
 public:
  FactoryA();
  virtual void CreateB();
  virtual ~FactoryA();
};

//Adaptee
class FactoryB
{
 public:
  FactoryB();
  void CreateB();
  virtual ~FactoryB();
};

class Adaptor:public FactoryA
{
 public:
  Adaptor(FactoryB *factoryB);
  void CreateB();
  virtual ~Adaptor();

 private:
  FactoryB *_factoryB;
};
