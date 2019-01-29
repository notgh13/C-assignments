#include <stdio.h>

int main()
{
  float max = 0;
  float min = 0;
  float sum = 0;
  float avg;
  int i;
  float num[10];


   printf("Program to calculate the average, min and max of 10 floating point numbers. \nEnter up to 10 numbers. <0.0 to end input.>\n");
  for (i = 0; i < 10; i++)
  {
    printf("Enter digit %d:", i + 1);
    scanf("%f", &num[i]);
    if(num[i] == 0.0)
      {
        break;
      }
    if(num[i] > max)
    {
      max = num[i];
    }
    if(min == 0)
    {
      min = num[i];
    }
    if(num[i] < min)
    {
      min = num[i];
    }
    sum = (sum + num[i]);
  }
  avg = sum/i;
  printf("Average = %f. \nMax number = %f. \nMin number = %f. \n", avg, max, min);
}
