#ifndef _MUTEX_H_
#define _MUTEX_H_

#include<pthread.h>

class Mutex{
public:
  Mutex();
  ~Mutex();

  void lock();
  /* int tryLock(); */
  void unlock();

private:
  pthread_mutex_t mMutex;
};

#endif /* _MUTEX_H_ */
