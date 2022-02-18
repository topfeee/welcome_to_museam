#include <stdio.h>
int valuable();

int main()
{
    valuable();
}
int valuable()
{
    while (18)
    {
        int x, i;
        printf("========================================================");
        printf("\n\nwhat multiplication table do ya wanna know bro?\n");
        printf("This program can run only full number\n\n");
        printf("========================================================");
        printf("\ninput full number = ");
        scanf("%d", &x);
        for (i = 1; i <= 12; i++)
        {
            printf("\n%d * %d = %d", x, i, i * x);
        }

        char ch;
        printf("\n\nDo you want another multiplication table? (y or n): ");
        scanf(" %c", &ch);
        if (ch == 'y')
        {
            continue;
        }
        else
        {
            printf("\n                                             =========================");
            printf("\n                                              Okay comeback again UwU");
            printf("\n                                             =========================");
            break;
        }
    }
}
