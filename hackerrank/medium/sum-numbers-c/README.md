# Sum and Difference of Two Numbers

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

**Objective**

The fundamental data types in c are int, float and char. Today, we're discussing int and float data types. 	

The `printf()` function prints the given statement to the console. The syntax is `printf("format string",argument_list);`. In the function, if we are using an integer, character, string or float as argument, then in the format string we have to write ``%d`` (integer), ``%c`` (character), ``%s`` (string), ``%f`` (float) respectively.

The `scanf()` function reads the input data from the console. The syntax is `scanf("format string",argument_list);`. For ex: The ``scanf("%d",&number)`` statement reads integer number from the console and stores the given value in variable $number$.

To input two integers separated by a space on a single line, the command is `scanf("%d %d", &n, &m)`, where $n$ and $m$ are the two integers.

**Task** 	

Your task is to take two numbers of int data type, two numbers of float data type as input and output their sum:

1. Declare $4$ variables: two of type int and two of type float. 
2. Read $2$ lines of input from stdin (according to the sequence given in the 'Input Format' section below) and initialize your $4$ variables. 
3. Use the $+$ and $-$ operator to perform the following operations:		
    - Print the sum and difference of two int variable on a new line.
    - Print the sum and difference of two float variable rounded to one decimal place on a new line.    



**Input Format**

The first line contains two integers.  		
The second line contains two floating point numbers.		


**Constraints**

- $1 \le $ integer variables $\le 10^4$
- $1 \le $ float variables $\le 10^4$

**Output Format**

Print the sum and difference of both integers separated by a space on the first line, and the sum and difference of both float (scaled to $1$ decimal place) separated by a space on the second line.

## Solution

**Language:** C  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-08T12:33:59.893Z  

```c
#include <stdio.h>

int main() {
    int num1;
    int num2;
    float num3;
    float num4;

    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%f", &num3);
    scanf("%f", &num4);

    int intSum = num1 + num2;
    int intDiff = num1 - num2;
    float floatSum = num3 + num4;
    float floatDiff = num3 - num4;

    printf("%d %d\n", intSum, intDiff);
    printf("%.1f %.1f\n", floatSum, floatDiff);

    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/sum-numbers-c/problem)