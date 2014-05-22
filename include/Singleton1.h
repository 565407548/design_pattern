class Singleton1{
private:
  static Singleton1 *mInstance;
  Singleton1();
  ~Singleton1();

public:
  static Singleton1 *getInstance();
};
