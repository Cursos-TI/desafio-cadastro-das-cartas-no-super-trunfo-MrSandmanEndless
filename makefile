# Makefile for Super Trunfo Project
# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -std=c99 -g
TARGET = CartasSuperTrunfo
SOURCE = $(TARGET).c

# Default target
default: all

# Build all
all: $(TARGET)

# Build the main executable
$(TARGET): $(SOURCE)
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCE)

# Clean compiled files
clean:
	rm -f $(TARGET)

# Run the program
run: $(TARGET)
	./$(TARGET) < test.txt

# Help target
help:
	@echo "Available targets:"
	@echo "  all     - Build the program"
	@echo "  clean   - Remove compiled files"
	@echo "  run     - Build and run the program"
	@echo "  help    - Show this help message"

# Phony targets
.PHONY: all clean run help default
