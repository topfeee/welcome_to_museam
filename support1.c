#include <stdio.h>
void greeting(void){
    char greet[20];
    char choose;
    printf("Hello i'm MIKOSAKI\n");
    printf("What's your name?\n");
    scanf("%s",greet);
    getchar();
    printf("Ok %s let's run multiplication table program >_< \n",greet);
}