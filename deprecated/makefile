# Compile using C++11 required by Catch2
C++11 = -std=c++11
# Compile flags
CXX = g++ $(C++11)
DEBUG = -g -Wall -Wextra

.PHONY: main
main: src/main.cpp src/renderer.cpp
	$(CXX) -c src/main.cpp \
		   -c src/renderer.cpp \
		   -I include/val &&\
	$(CXX) main.o \
		   renderer.o \
		   -o bin/val &&\
	rm -f *.o *.a

.PHONY: debug
debug: src/main.cpp
	$(CXX) $(DEBUG) src/main.cpp \
		   src/renderer.cpp \
		   -L include/val \
		   -o bin/debug_val 

.PHONY: test/
test/: test/test/.cpp src/renderer.cpp
	$(CXX) -c test/test/.cpp \
		   -c src/renderer.cpp \
		   -I include/val \
		   -I include/catch2 &&\
	$(CXX) test/.o \
		   renderer.o \
		   -o bin/test_val &&\
	rm -f *.o *.a

.PHONY: clean
clean:
	rm -f *.o
	rm -f *.a
	rm -f a.out
	rm -f bin/*
	rm -f src/*.o
	rm -f src/*.a
	rm -f test/*.o
	rm -f test/*.a
	rm -f val
	rm -f debug_val
	rm -f debug_val.log
