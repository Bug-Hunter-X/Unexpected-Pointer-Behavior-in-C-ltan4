# Unexpected Pointer Behavior in C

This example demonstrates a subtle bug related to pointer aliasing and potential compiler optimizations in C.  Modifying data through one pointer can unexpectedly change the value of other seemingly independent variables.

The `bug.c` file contains the problematic code, while `bugSolution.c` offers a safer approach to avoid these unexpected consequences.

## How to Run

1. Compile the code (e.g., using GCC):
   ```bash
   gcc bug.c -o bug
   gcc bugSolution.c -o bugSolution
   ```
2. Run the compiled executables:
   ```bash
   ./bug
   ./bugSolution
   ```

## Understanding the Bug

The bug arises because the code doesn't explicitly manage memory allocation and pointer usage carefully. Compiler optimizations could lead to overlapping memory locations for different variables.   This means a change made through one pointer might unexpectedly affect the value of another variable. 