#include <stdio.h>
void main()
{
    while (1)
    {
        char c;
        printf("input charecter = ");
        scanf("%c", &c);
        getchar();
        printf("ACII is %d", c);
        printf("\n");
        continue;
    }
}