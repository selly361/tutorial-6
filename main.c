#include <stdio.h>
#include <stdlib.h>


void task_one(void);
void task_two(void);
void task_three(void);
void task_four(void);
void task_five(void);
void task_six(void);
void task_seven(void);
void task_eight(void);
void task_nine(void);
void task_ten(void);
void task_eleven(void);
void task_twelve(void);

int main()
{
    task_twelve();

    return 0;
}

/* Task 1

    Write a C program that print natural numbers from 1 to 10.
    Expected time to code: 3 minutes.
    Expected output: 1 2 3 4 5 6 7 8 9 10

*/

void task_one(void)
{
    for(int i = 1; i <= 10; i++)
    {
        printf("Number %d\n", i);
    }

}

/* Task 2

    Write a C program to print natural numbers from 1 to 10 using while loop.
    Expected time to code: 3 minutes.
    Expected output: 1 2 3 4 5 6 7 8 9 10

*/

void task_two(void)
{

    int i = 1;

    while(i < 11)
    {
        printf("Number: %d\n", i);
        i++;
    }

}

/* Task 3

    Write a C program to print natural numbers from 1 to 10
    using do...while loop.
    Expected time to code: 3 minutes.
    Expected output: 1 2 3 4 5 6 7 8 9 10


*/

void task_three(void)
{
    int i = 1;

    do
    {
        printf("Number %d\n", i);
        i++;
    }

    while(i != 10);
}

/* Task 4

    Write a program to compute the sum of first 10 numbers from 1 to 10 using for
    statement.
    Now try using a while and do while statements.


*/

void task_four(void)
{
    int sum_one;
    int sum_two;
    int sum_three;


    for(int i = 1; i < 11; i++)
    {
        sum_one += i;
    }
}


/* Task 5

    Write code that will calculate the product of 5 numbers entered by the user
    from the keyboard.
*/

void task_five(void)
{

    int one, two, three, four, five;

    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d", one, two, three, four, five);

    printf("Answer: %d", one * two * three * four * five);


    int product;

    for(int i = 1; i <= 5; i++)
    {
        int number;

        printf("Enter number %d: ", i);
        scanf("%d", &number);

        product *= number;
    }
}

/* Task 6

    Write a program to compute the sum of the squares of the first 5 numbers
    numbers entered by the user from the keyboard.
*/

void task_six(void)
{
    int sum_of_squares;

    for(int i = 1; i <= 5; i++)
    {
        int number;

        printf("Enter number %d: ", i);
        scanf("%d", &number);

        sum_of_squares += (number * number);
    }
}


/* Task 7


    Write a program in C to display the n terms of odd natural number starting from 1.
    N has to be read from user input using scanf().
    Input number of terms : 10
    Expected Output :
    The odd numbers are :1 3 5 7 9 11 13 15 17 19

*/

void task_seven(void)
{

    int n;

    printf("Input number of terms: ");
    scanf("%d", &n);

    printf("\nExpect Output:\n");
    printf("The odd numbers are: ");

    for(int i = 1; i <= n; i+=2)
    {
        printf("%d ", i);
    }
}

/* Task 8


Write a program in C to display the n terms of odd natural number starting from 1.
N has to be read from user input using scanf().
Input number of terms : 10
Expected Output :
The odd numbers are :1 3 5 7 9 11 13 15 17 19

*/

void task_eight(void)
{

    int n, i = 1;

    printf("Multiplication table to be calculated: ");
    scanf("%d", &n);

    while(i < 11)
    {
        printf("%d X %d = %d \n", n, i, n*i);
        i++;
    }

}


/* Task 9

Write a program in C to display the pattern like right angle triangle using an
asterisk.
The pattern like :
*
**
***
****

*/

void task_nine(void)
{
    int length;
    printf("Enter length: ");
    scanf("%d", &length);


    for(int i = 0; i < length; i++)
    {
        for(int j = 0; j < i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}

/* Task 10

Write a program in C to display the pattern like right angle triangle with a
number.
The pattern like :
1
12
123
1234

*/

void task_ten(void)
{
    int length;
    printf("Enter length: ");
    scanf("%d", &length);


    for(int i = 1; i <= length; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }
}

/* Task 11

Write a program in C to make such a pattern like right angle triangle with a
number which will repeat a number in a row.
The pattern like :
1
22
333
4444

*/

void task_eleven(void)
{
    int length;
    printf("Enter length: ");
    scanf("%d", &length);


    for(int i = 1; i <= length; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("%d", i);
        }

        printf("\n");
    }
}


/* Task 12

Write a program in C to make such a pattern like right angle triangle with a
number which will repeat a number in a row.
The pattern like :
1
22
333
4444

*/

void task_twelve(void)
{
    int length;
    printf("Enter length: ");
    scanf("%d", &length);


    for(int i = 1; i <= length; i++)
    {
        for(int j = length - i; j > 0; j--)
        {
            printf(" ");
        }


        for(int k = 1; k <= i; k++)
        {
            printf("* ");
        }


        printf("\n");

    }
}
