/*Chandler is working on a project that involves computing powers of three for a given range of numbers. He needs a program that can calculate and print the powers from 30 to 3N, where N is a user-defined integer.



Assist Chandler, as he wants the program to use a recursive function to compute the powers of three efficiently.



Function Prototype: int powerOfThree(int )

Input format :
The input consists of an integer N, representing the highest power of three to compute.

Output format :
The output displays space-separated integers, representing the powers of three from 30 to 3N.*/

#include <stdio.h>

int powerOfThree(int n) {
    if (n == 0) {
        return 1;
    } else {
        return 3 * powerOfThree(n - 1);
    }
}

int main() {
    int N;
    scanf("%d", &N);
    for (int i = 0; i <= N; i++) {
        printf("%d ", powerOfThree(i));
    }
    return 0;
}
