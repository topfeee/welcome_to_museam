#include <stdio.h>

double getAverage1(int arr[], int size);
int getAverage2();

int main()
{
    double avg;
    int avg2;
    int height[5] = {170, 150, 160, 180, 190};
    avg = getAverage1(height, 5);
    avg2 = getAverage2();
    printf("The Average of height of member1cs1 \n");
    printf("Average value is: %.2lf \n\n", avg);
    printf("The Average of age of member1cs1\n");
    printf("Average value is: %d \n\n", avg2);
    return 0;
}
double getAverage1(int arr[], int size)
{
    int i;
    double avg;
    double sum;
    for (i = 0; i < size; ++i)
    {
        sum += arr[i];
    }
    avg = sum / size;
    return avg;
}
int getAverage2()
{
    int j;
    float avg2;
    int sum2;
    int age[6] = {18, 18, 19, 20, 22, 27};
    for (j = 0; j < 5; ++j)
    {
        sum2 += age[j];
    }
    avg2 = sum2 / 6;
    return avg2;
}
