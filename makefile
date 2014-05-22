cc = g++
ccflags= -g -I./include

bin=bin/SingletonTest 
obj=obj/factory.o obj/timeTable.o obj/curriculum.o obj/college.o obj/prototype.o obj/adaptor.o obj/Singleton.o obj/Singleton1.o obj/Singleton2.o obj/Mutex.o

image:$(bin)

clear:
	-rm -f $(obj) $(bin)

#Mutex 互斥量
obj/Mutex.o:src/Mutex.cpp include/Mutex.h
	$(cc) $(ccflags) -c -o $@ $<

# Singleton 单例模式
obj/Singleton.o:src/Singleton.cpp include/Singleton.h
	$(cc) $(ccflags) -c -o $@ $<
obj/Singleton1.o:src/Singleton1.cpp include/Singleton1.h
	$(cc) $(ccflags) -c -o $@ $<
obj/Singleton2.o:src/Singleton2.cpp include/Singleton2.h
	$(cc) $(ccflags) -lpthread -c -o $@ $<

# Factory Method 工厂方法
obj/factory.o: src/factory.cpp include/factory.h
	$(cc) $(ccflags) -c -o $@ $<
obj/timeTable.o:src/timeTable.cpp include/timeTable.h
	$(cc) $(ccflags) -c -o $@ $<

# Abstract Factory 抽象工厂
obj/curriculum.o:src/curriculum.cpp include/curriculum.h
	$(cc) $(ccflags) -c -o $@ $<
obj/college.o:src/college.cpp include/college.h
	$(cc) $(ccflags) -c -o $@ $<

# Prototype 原型模式
obj/prototype.o:src/prototype.cpp include/prototype.h
	$(cc) $(ccflags) -c -o $@ $<

# Adaptor 模式
obj/adaptor.o:src/adaptor.cpp include/adaptor.h
	$(cc) $(ccflags) -c -o $@ $<

bin/SingletonTest:src/SingletonTest.cpp $(obj)
	$(cc) $(ccflags) -o $@ $< $(obj)

