#include <stdio.h>

int main(void)
{
    int n; // store user number
    printf("Enter Number: "); // prompt user for input
    scanf("%d", &n); //take input in the form of an integer

    int sum = 0; // stores the sum as the loop iterates - starts at 0

    // for loop is used because we know we want to iterate n times
    for(int i = 1; i <= n; i++)
    {
       sum += i; // sum updates with every iteration (ex: 0 + 1, 1 + 1, 1 + 2)
       // when the loop reachs n times it will terminate
    }
    printf("The sum of numbers from 1 to %d is: %d\n", n, sum);
    return 0;
}
