
# Makefile

# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -g

# Target executable
TARGET = main

# Source files
SRC = $(wildcard src/*.cpp)

# Include directories (if any, add here)
INCLUDES = -I./src -I./lib

# Libraries (add any additional libraries here)
LIBS = -lraylib -lGL -lm -lpthread -ldl -lrt -lX11

# Default target
all: $(TARGET)

# Link target
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -o $(TARGET) $(SRC) $(LIBS)

# Clean target
clean:
	rm -f $(TARGET)
