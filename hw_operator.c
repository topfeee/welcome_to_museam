#include <stdio.h>
#include <math.h>
int bitwise_op();
 assignment_op();
main()
{
    bitwise_op();
    assignment_op();
}
int bitwise_op()
{
    int a = 20; // 20 = 0001 0100
    int b = 45; // 45 = 0010 1101
    int c;
    c = a & b; //  4  = 0000 0100
    printf("We have a = 20 and b = 45\n");
    printf("1.the Operator is &\n");
    printf("a & b is %d\n", c);
    c = a | b; //  61 = 0011 1101
    printf("2.the Operator is |\n");
    printf("a | b is %d\n", c);
    c = a ^ b; //  57 = 0011 1001
    printf("3.the operator is ^\n");
    printf("a ^ b is %d\n", c);
    c = ~a; // -21 = 1110 1011
    printf("4.the operator is ~\n");
    printf("~a is %d\n", c);
    c = a << 2; // 80 = 0101 0000
    printf("5.the operator is <<\n");
    printf("a << 2 is %d\n", c);
    c = a >> 2; //  5 = 0000 0101
    printf("6.the operator is >>\n");
    printf("a >> 2 is %d\n\n", c);
    return 0;
}
assignment_op()
{
    int a = 13;
    int c;

    printf("this is about the assignment operator we have a = 13 and find value of c\n");
    c = a;
    printf("Line 1 - = Operator Example, Value of c = %d\n", c);
    c += a;
    printf("Line 2 - += Operator Example, Value of c = %d\n", c);
    c -= a;
    printf("Line 3 - -= Operator Example, Value of c = %d\n", c);
    c *= a;
    printf("Line 4 - *= Operator Example, Value of c = %d\n", c);
    c /= a;
    printf("Line 5 - /= Operator Example, Value of c = %d\n", c);
    c = 240;
    c %= a;
    printf("Line 6 - %= Operator Example, Value of c = %d\n", c);
    c <<= 2;
    printf("Line 7 - <<= Operator Example, Value of c = %d\n", c);
    c >>= 2;
    printf("Line 8 - >>= Operator Example, Value of c = %d\n", c);
    c &= 2;
    printf("Line 9 - &= Operator Example, Value of c = %d\n", c);
    c ^= 2;
    printf("Line 10 - ^= Operator Example, Value of c = %d\n", c);
    c |= 2;
    printf("Line 11 - |= Operator Example, Value of c = %d\n", c);

}
