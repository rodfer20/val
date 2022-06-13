CXX = g++
DEBUG = -g -Wall -Wextra
PROGGIE = val
SRC = src/
INCLUDE = include/
BIN = bin/
TEST = test/

.PHONY: main
main: $(SRC)main.cpp $(SRC)renderer.cpp
	$(CXX) $(SRC)renderer.cpp \
		   $(SRC)main.cpp \
		   -L $(INCLUDE) \
		   -o $(BIN)$(PROGGIE) 

.PHONY: debug
debug: $(SRC)main.cpp $(SRC)renderer.cpp
	$(CXX) $(DEBUG) $(SRC)main.cpp \
		   $(SRC)renderer.cpp \
		   -L $(INCLUDE) \
		   -o $(BIN)debug_$(PROGGIE) 

.PHONY: test
test: $(TEST)/test.cpp
	$(CXX) test/test.cpp -L $(INCLUDE) -o $(BIN)test_$(PROGGIE)
		
.PHONY: clean
clean:
	rm -f $(BIN)*
	rm -f $(SRC)*.o
	rm -f $(SRC)*.a
	rm -f $(TEST)*.o
	rm -f $(TEST)*.a
	rm -f $(PROGGIE)
	rm -f debug_$(PROGGIE)
	rm -f debug_$(PROGGIE).log
