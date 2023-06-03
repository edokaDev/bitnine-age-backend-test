# TASK 1
## The Problem
- Node is defined as follows :

        typedef struct Node
        {
            TypeTag type;
        } Node;

        typedef enum TypeTag
        {
            ...
        }
- Using this structure, please write a function that returns fibonacci sequence based on the following arithmetic operations (+, -, *, /) and conditions. 
- The fibonacci function should be implemented using Dynamic Programming.

        main()
        {
            Node *add = (*makeFunc(ADD))(10, 6);
            Node *mul = (*makeFunc(MUL))(5, 4);
            Node *sub = (*makeFunc(SUB))(mul, add);
            Node *fibo = (*makeFunc(SUB))(sub, NULL);
            calc(add);
            calc(mul);
            calc(sub);
            calc(fibo);
        }
        Output
        add : 16
        mul : 20
        sub : -4
        fibo : 2


## Files
Below is an overview of the files in this dir:
Filename	|	Description
---------------	|------------------
calc.c |	Contains a function this prints the value of a Node and frees it. 
fib.c | This contains the fibonacci function.
makeFunc.c | Contains a function that maps an input operation to its function.
operations.c | Contains all the arithmetic functions.
main.h | this contains the prototypes of all functions, structs and enums.
main.c | This is the entry point, using in testing the program.
README.md | Gives a description on the project.

## Technologies / Environment
- C files written and compiled on Ubuntu 20.04 LTS using gcc
- C files checked using Betty 0.32
- The program was written, compiled and tested on Ubuntu 20.04 LTS

## Running the code
- The code should first be compiled using
    
        gcc *.c -o task1
- and then run using
        
        ./task1




