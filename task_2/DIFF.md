# DIFFERENCE BETWEEN THE 3 IMPLEMENTATION OF THE GIVEN FUNCTION
The Three methods used are

    -   Recursion method
    -   Dynamic programming method
    -   Variable Iteration method

## RECURSION METHOD
As the name implies, this method implements the function using recursion.
That is, it breaks the problem into sub-problems of itself.

### Advantages of Recursion method:
    It is straighforward to understand and implemented.
    
    It saves time and critical thinking on the part of the programmer.
### Disadvantages of Recursion method:
    The same subproblems may be solved multiple times, this leads to redundancy.
    
    It has an exponential time complexity, making it inefficient or even leading to stack overflow for larger values of n.

## DYNAMIC PROGRAMMING METHOD
This is an iterative approach using an array.
### Advantages of Dynamic programming method:
    It avoids the redundancy of recusion method as it stores the previously computed values in an array.
    
    It has a linear time complexity, making it more efficient compared to the recursion method.
### Disadvantages of Dynamic programming method:
    It requires extra space as it creates an array of size n+1 to store the computed values. This can be very inefficent for large values of n.

    It saves all the values of F(0) to F(n) which may be unnecessary in most cases.

## VARIABLE ITERATION METHOD
This is similar to the dynamic programming method, only that instead of using an array, it uses variable to store the computed values.
### Advantages of variable iteration method:
    It has a linear time complexity.

    It avoids the issue of creating and accessing an array.

    It saves space as it uses a few variable in storing the computed values compared to using an array.
### Disadvantages of using variable iteration method
    It can be complicated to understand.

    It can only compute the final value of F(n), so it won't be suitable in a situation where F(k) is needed assuming k < n.

