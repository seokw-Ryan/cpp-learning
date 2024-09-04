EXE = main
OBJS = main.o Cube.o
CLEAN_RM =

#include ../_make/generic.mk

# Compiler and directories
CXX = g++                             # Use g++ as the C++ compiler
OBJS_DIR = .                          # Object files will be placed in the current directory
CXXFLAGS = -std=c++14 -O0 -g -Wall    # Flags for compiling: use C++14, no optimization, debug symbols, warnings
LDFLAGS = -std=c++14      

# Default rule to build the executable
all: $(EXE)

# Rule to link object files into the executable
$(EXE): $(OBJS)
	$(CXX) $(OBJS) $(LDFLAGS) -o $(EXE)

# Rule to compile .cpp files into .o object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@
# Directory-specific rules:
clean: 
	rm -rf $(EXE) $(TEST) $(OBJS_DIR) $(CLEAN_RM) *.o *.d

tidy: clean
	rm -rf doc 
