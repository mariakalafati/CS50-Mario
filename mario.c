#include <cs50.h>
#include <stdio.h>

int get_positive_int(void);
void print_blocks(int n);
void print_1(int n, int j, int i);
void print_2(int n, int j, int i);

int main(void)
{
    int n = get_positive_int();
    print_blocks(n);
}

// Prompt user to give a positive integer between 1 and 8
int get_positive_int(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);
    return n;
}

void print_blocks(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * n + 2; j++)
        {
            if (j < n)
            {
                print_1(n, j, i);
            }
            else if (j == n || j == n + 1) 
            {
                printf(" ");
            }
            else
            {
                print_2(n, j, i);
            }
        }
        printf("\n");
    }
}

void print_1(int n, int j, int i)
{
    if (j >= n - i - 1)
    {
        printf("#");
    }
    else 
    {
        printf(" ");
    }
}

void print_2(int n, int j, int i)
{
    if (j <= n + i + 2)
    {
        printf("#");
    }
}
