# Dereferencing a Null Pointer in C++
This repository demonstrates a common but dangerous error in C++: dereferencing a null pointer.  The code attempts to write a value to a memory location that does not exist, causing undefined behavior, usually a program crash.

The `bug.cpp` file shows the problematic code.  The `bugSolution.cpp` file provides a corrected version that avoids the error.  Always check for null pointers before dereferencing them to prevent such crashes.

## How to run

1. Clone this repository.
2. Compile and run the `bug.cpp` file using a C++ compiler (like g++).
3. Observe the segmentation fault or crash.
4. Compile and run the `bugSolution.cpp` file to see the corrected version in action.