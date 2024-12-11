# Compiler and flags
CC = gcc
CFLAGS = -shared -fPIC -DKXVER=3 -g
LDFLAGS = -shared -lglut -lGL -lm  # Add the necessary libraries

# Source files
SRCS = plt.c plt.h

# Output shared library
OUT = plt.so

# Default target
all: $(OUT)

# Compile and link shared library
$(OUT): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) $(LDFLAGS) -o $(OUT)

# Clean target to remove generated files
clean:
	rm -f $(OUT)

# Phony targets
.PHONY: all clean
