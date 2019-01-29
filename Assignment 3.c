#include "stdio.h"
#define Triangle 1
#define Square 2
#define Rectangle 3
#define Parallelogram 4
#define Trapezium 5
#define Circle 6
#define Ellipse 7
#define Sector 8
#define Pi  3.1415926536

int main()
{
  int shape;
  float vertheight;
  float length;
  float height;
  float sidelength;
  float radius;
  float axis1;
  float axis2;
  float angle;
  float area;
  int again = 1;

  do
  {
  printf("Area Calculator \n 1). Triangle \n 2). Square \n 3). Rectangle \n 4). Parallelogram \n 5). Trapezium \n 6). Circle \n 7). Ellipse \n 8). Sector \n Enter shape: ");
  scanf("%d", &shape);
switch(shape)
{

  case Triangle:
  printf("Enter height:");
  scanf("%f", &vertheight);
  printf("Enter base:");
  scanf("%f", &length);
  area = 0.5*vertheight*length;
  printf("Area = %f \n", area);
  break;

  case Square:
  printf("Enter length:");
  scanf("%f", &length);
  area = length*length;
  printf("Area = %f \n", area);
  break;

  case Rectangle:
  printf("Enter length:");
  scanf("%f", &length);
  printf("Enter height:");
  scanf("%f", &height);
  area = length*height;
  printf("Area = %f \n", area);
  break;

  case Parallelogram:
  printf("Enter base length:");
  scanf("%f", &length);
  printf("Enter vertical height:");
  scanf("%f", &vertheight);
  area = length*vertheight;
  printf("Area = %f \n", area);
  break;

  case Trapezium:
  printf("Enter length 1:");
  scanf("%f", &length);
  printf("Enter length 2:");
  scanf("%f", &sidelength);
  area = 0.5*length*sidelength;
  printf("Area = %f \n", area);
  break;

  case Circle:
  printf("Enter radius:");
  scanf("%f", &radius);
  area = Pi*radius*radius;
  printf("Area = %f \n", area);
  break;
  
  case Ellipse:
  printf("Enter length of semi-major axis:");
  scanf("%f", &axis1);
  printf("Enter length of semi-minor axis:");
  scanf("%f", &axis2);
  area = Pi*axis1*axis2;
  printf("Area = %f \n", area);
  break;
  
  case Sector:
  printf("Enter radius:");
  scanf("%f", &radius);
  printf("Enter angle in radians:");
  scanf("%f", &angle);
  area = 0.5*Pi*radius*radius*angle;
  printf("Area = %f \n", area);
  break;

  }
  printf("Do you want to try again? Y/N");
  scanf("%s", str);
  if(str == "n" ||str == "N")
  {
    again = 0;
  }
  }
  while(again == 1);

}

