# Define the compiler and flags
CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra -g

# Define the source files
SRC = main.cpp Game.cpp Stack.cpp ./uiuc/Cube.cpp ./uiuc/HSLAPixel.cpp

# Define the object files
OBJ = main.o Game.o Stack.o Cube.o HSLAPixel.o 

# Define the executable
EXEC = myprogram

# Default target
all: $(EXEC)

# Rule to build the executable
$(EXEC): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(EXEC)

# Rule to build object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

# Standard C++ Makefile rules:
clean:
	rm -rf $(EXEC) $(TEST) $(OBJS_DIR) $(CLEAN_RM) *.o *.d

tidy: clean
	rm -rf doc

.PHONY: all tidy clean
