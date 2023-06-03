# TASK 2
## The Problem
- Implement the following piecewise recurrence relation in the 3 different ways.

        F(n) = F(n-3) + F(n -2)
        where F(0) = 0, F(1) = 1, and F(2) = 2.

- Explain the differences (advantages, disadvantages) between the 3.

## Files
Below is an overview of the files in this dir:
Filename	|	Description
---------------	|------------------
task_2.c |	This files contains three functions, each being an implementation of the problem function specified above. 
DIFF.md | This gives and explaination on the differences between the 3 implementations of the problem function.
README.md | Gives a description on the project.

## Technologies / Environment
- C files written and compiled on Ubuntu 20.04 LTS using gcc
- C files checked using Betty 0.32
- The program was written, compiled and tested on Ubuntu 20.04 LTS

## Running the code
- The code should first be compiled using
    
        gcc *.c -o task2
- and then run using
        
        ./task2
