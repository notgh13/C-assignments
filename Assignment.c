#include <stdio.h>

void main()
{
	int grade1;
	int grade2;
	int grade3;
	int grade4;
	int grade5;
	float avg;

  do
    {
	printf("Enter English Grade:");
	scanf("%d", &grade1);
	printf("Enter Maths Grade:");
	scanf("%d", &grade2);
	printf("Enter Irish Grade:");
	scanf("%d", &grade3);
	printf("Enter Science Grade:");
	scanf("%d", &grade4);
	printf("Enter French Grade:");
	scanf("%d", &grade5);

	avg = (grade1 + grade2 + grade3 + grade4 + grade5) / 5;
	printf("Average grade: %.2f \n", avg);

	if (avg >= 40)
	{
		printf("Your average grade was a pass.\n");
	}

	else
	{
		printf("Your average grade was a pass.\n");
	}

	printf("Passes: ");

	if (grade1 >= 40)
	{
		printf("English, ");
	}
	else
	{
		printf("");
	}

	if (grade2 >= 40)
	{
		printf("Maths, ");
	}
	else
	{
		printf("");
	}

	if (grade3 >= 40)
	{
		printf("Irish, ");
	}
	else
	{
		printf(" ");
	}

	if (grade4 >= 40)
	{
		printf("Science, ");
	}
	else
	{
		printf(" ");
	}

	if (grade5 >= 40)
	{
		printf("French\n");
	}
	else
	{
		printf("\n");
	}

	printf("Fails:");

	if (grade1 < 40)
	{
		printf("English, ");
	}
	else
	{
		printf(" ");
	}

	if (grade2 < 40)
	{
		printf("Maths, ");
	}
	else
	{
		printf(" ");
	}

	if (grade3 < 40)
	{
		printf("Irish, ");
	}
	else
	{
		printf(" ");
	}

	if (grade4 < 40)
	{
		printf("Science, ");
	}
	else
	{
		printf(" ");
	}

	if (grade5 < 40)
	{
		printf("French\n");
	}
	else
	{
		printf("\n");
	}

	if (grade1 > grade2 && grade1 > grade3 && grade1 > grade4 && grade1 > grade5)
	{
		printf("Highest mark: English\n");
	}
	else if (grade2 > grade1 && grade2 > grade3 && grade2 > grade4 && grade2 > grade5)
	{
		printf("Highest mark: Maths\n");
	}
	else if (grade3 > grade1 && grade3 > grade2 && grade3 > grade4 && grade3 > grade5)
	{
		printf("Highest mark: Irish\n");
	}
	else if (grade4 > grade1 && grade4 > grade2 && grade4 > grade3 && grade4 > grade5)
	{
		printf("Highest mark: Science\n");
	}
	else
	{
		printf("Highest grade: French\n");
	}
  while
  scanf("%d", again);

}
