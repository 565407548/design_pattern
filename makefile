cc = g++
ccflags= -g -I./include

bin=bin/test
obj= obj/singleton.o obj/factory.o obj/timeTable.o obj/curriculum.o obj/college.o obj/prototype.o

image:$(bin)

clean:
	-rm -f $(obj) $(bin)

# Singleton 单例模式
obj/singleton.o : src/singleton.cpp include/singleton.h
	$(cc) $(ccflags) -c -o $@ $<

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

bin/test:src/test.cpp $(obj)
	$(cc) $(ccflags) -o $@ $< $(obj)
