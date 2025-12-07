#include <stdio.h>

int main(void)
{
    char name[50];

    printf("What is your name?\n");
    scanf("%49s", name);

    printf("hello, %s\n", name);
    return 0;
}
