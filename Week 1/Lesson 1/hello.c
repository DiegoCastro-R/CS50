#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string ans = get_string("Whats is you name ? ");
    printf("hello, %s\n", ans);
}