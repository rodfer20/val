# Compile using C++11 required by Catch2
C++11 = -std=c++11
# Compile flags
CXX = g++ $(C++11)
DEBUG = -g -Wall -Wextra
# Project location
PROGGIE = val
TEST_FRAMEWORK = catch2
SRC = src/
INCLUDE = include/
BIN = bin/
TEST = test/


.PHONY: main
main: $(SRC)main.cpp $(SRC)renderer.cpp
	$(CXX) -c $(SRC)main.cpp \
		   -c $(SRC)renderer.cpp \
		   -L $(INCLUDE)$(PROGGIE) &&\
	$(CXX) main.o \
		   renderer.o \
		   -o $(BIN)$(PROGGIE) &&\
	rm -f *.o *.a

.PHONY: debug
debug: $(SRC)main.cpp
	$(CXX) $(DEBUG) $(SRC)main.cpp \
		   $(SRC)renderer.cpp \
		   -L $(INCLUDE)$(PROGGIE) \
		   -o $(BIN)debug_$(PROGGIE) 

.PHONY: test
test: $(TEST)test.cpp $(SRC)renderer.cpp
	$(CXX) -c $(TEST)test.cpp \
		   -c $(SRC)renderer.cpp \
		   -L $(INCLUDE)$(PROGGIE) \
		   -L $(INCLUDE)$(TEST_FRAMEWORK) &&\
	$(CXX) test.o \
		   renderer.o \
		   -o $(BIN)test_$(PROGGIE) &&\
	rm -f *.o *.a

.PHONY: clean
clean:
	rm -f *.o
	rm -f *.a
	rm -f a.out
	rm -f $(BIN)*
	rm -f $(SRC)*.o
	rm -f $(SRC)*.a
	rm -f $(TEST)*.o
	rm -f $(TEST)*.a
	rm -f $(PROGGIE)
	rm -f debug_$(PROGGIE)
	rm -f debug_$(PROGGIE).log
