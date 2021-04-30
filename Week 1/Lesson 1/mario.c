#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Width: ");
    }
    while (n < 1);

    // Print out that many questions marks
    for (int i = 0; i < n; i++)
    {
        printf("?");
    }
    printf("\n");
}