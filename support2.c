#include <stdio.h>
void calculate(void){
        printf("========================================================");
        printf("\n\nwhat multiplication table do ya wanna know?\n");
        printf("This program can run only full number\n\n");
        printf("========================================================");
        while (1)
        {
        int x,i;
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