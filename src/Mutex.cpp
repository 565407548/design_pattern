#include<assert.h>

#include"Mutex.h"

// pthread_mutex_t Mutex::mMutex=NULL;

Mutex::Mutex(){
  assert(pthread_mutex_init(&mMutex,NULL)==0);
}

Mutex::~Mutex(){
  assert(pthread_mutex_destroy(&mMutex)==0);
}

void Mutex::lock(){
  assert(pthread_mutex_lock(&mMutex)==0);
}

// int Mutex::tryLock(){
//   return pthread_mutex_trylock(&mMutex)==0;
// }

void Mutex::unlock(){
  assert(pthread_mutex_unlock(&mMutex)==0);
}


