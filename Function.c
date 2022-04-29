#include<stdio.h>
int add(int a,int b);
int subtract(int a,int b);
int multiply(int a,int b);
int divide(int a,int b);
int main(){
    int a = 20;
    int b = 10;
    printf("Use Function Declarations with operators\n");
    int aws1 = add(a,b);
    printf("%d + %d = %d\n",a,b,aws1);
    int aws2 = subtract(a,b);
    printf("%d - %d = %d\n",a,b,aws2);
    int aws3 = multiply(a,b);
    printf("%d * %d = %d\n",a,b,aws3);
    int aws4 = divide(a,b);
    printf("%d / %d = %d",a,b,aws4);
    return 0;
}
int add(int a,int b){
    int c = a + b;
    return c;
}
int subtract(int a,int b){
int c = a - b;
return c;
}
int multiply(int a,int b){
    int c = a * b;
    return c;
}
int divide(int a,int b){
    int c = a / b;
    return c;
}
