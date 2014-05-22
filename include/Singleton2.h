#include"Mutex.h"

class Singleton2{
private:
  static Singleton2 *mInstance;
  Singleton2();
  ~Singleton2();

public:
  static Singleton2 *getInstance();
  static Mutex *mMutex;
};
