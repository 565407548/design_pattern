#include"Singleton2.h"

Singleton2* Singleton2::mInstance=NULL;
Mutex* Singleton2::mMutex=new Mutex;

Singleton2::Singleton2(){
  
}
Singleton2::~Singleton2(){
  if(mInstance!=NULL){
    delete mInstance;
  }
  if(mMutex!=NULL){
    delete mMutex;
  }
}

Singleton2 *Singleton2::getInstance(){
  if(mInstance==NULL){
    mMutex->lock();
    {
      if(mInstance==NULL){
        mInstance=new Singleton2;
      }
    }
    mMutex->unlock();
  }
  return mInstance;
}
