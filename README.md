Node is defined as follows :
typedef struct Node
{
    TypeTag type;
} Node;

typedef enum TypeTag
{
    ...
}
Using this structure, please write a function that returns fibonacci sequence based on the following arithmetic operations (+, -, *, /) and conditions. The fibonacci function should be implemented using Dynamic Programming.

main()
{
    Node *add = (*makeFunc(ADD))(10, 6);
    Node *mul = (*makeFunc(MUL))(5, 4);
    Node *sub = (*makeFunc(SUB))(mul, add);
    Node *fibo = (*makeFunc(SUB))(sub, NULL);
    calc(add);
    calc(mul);
    calc(sub);
}
Output
add : 16
mul : 20
sub : -4






















Apache AGE Internship 2023 Coding Test – Question No.1: Backend
Please submit
- Source code (Please write this in C)
- README text file explaining development
environment and how to compile and run the
source code.
7
ⓒ 2022 by Bitnine Co, Ltd. All Rights Reserved.≈
Bitnine Global Inc.Apache AGE Internship 2023 Coding Test – Question No.2: Backend
▪ Implement the following piecewise recurrence relation in the 3 different ways.
▪ Explain the differences (advantages, disadvantages) between the 3.
▪ Must be written in C
The problem
F(n) = F(n-3) + F(n -2) where F(0) = 0, F(1) = 1, and F(2) = 2.
Assume that n will be less than or equal to the maximum integer value and non-negative. You only need to
write the function(s).
[ Question No. 2 ]
Please submit
- Source code (Please write this in C)
- README text file explaining development
environment and how to compile and run the
source code.
