cc = g++
ccflags= -g -I./include

bin=bin/test
obj= obj/singleton.o obj/factory.o obj/timeTable.o

image:$(bin)

clean:
	-rm -f $(obj) $(bin)

#单例模式
obj/singleton.o : src/singleton.cpp include/singleton.h
	$(cc) $(ccflags) -c -o $@ $<

#工厂模式
obj/factory.o: src/factory.cpp include/factory.h
	$(cc) $(ccflags) -c -o $@ $<
obj/timeTable.o:src/timeTable.cpp include/timeTable.h
	$(cc) $(ccflags) -c -o $@ $<

bin/test:src/test.cpp $(obj)
	$(cc) $(ccflags) -o $@ $< $(obj)
