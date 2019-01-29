#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void getName(char emp[]);
int getID(char emp[]);
double getHours(char emp[]);

char firstName[40];
char surname[40];
int ID;
double hours[5];

void main()
{
	char emp1[] = "Smith,Fred,2214,,5,7,8.5,10.0";
	char emp2[] = "Murphy,Sarah,1579,8.5,5,5,8,8";

	getName(emp1);
	getID(emp1);
	getHours(emp1);
	printf ("Employee %s %s, ID: %d, worked the following hours:\n",firstName, surname, ID);
	printf ("Monday:%.2lf Tuesday:%.2lf Wednesday:%.2lf Thursday:%.2lf Friday:%.2lf \n", hours[0],hours[1],hours[2],hours[3],hours[4]);
	
	puts("");
	
	getName(emp2);
	getID(emp2);
	getHours(emp2);
	printf ("Employee %s %s, ID: %d, worked the following hours:\n",firstName, surname, ID);
	printf ("Monday:%.2lf Tuesday:%.2lf Wednesday:%.2lf Thursday:%.2lf Friday:%.2lf \n", hours[0],hours[1],hours[2],hours[3],hours[4]);

}


void getName(char emp[])
{
	int i = 0;
	int j = 0;
	do
	{
	i++;
	}
	while (emp[i] != ',');
	strncpy(surname, emp, i);
	do
	{
	j++;
	}
	while (emp[j] != ',');
	strncpy(firstName, &emp[i+1], j-1);

}

int getID(char emp[])
 {
	int i = 0;
	int j = 0;
	int k = 0;
	char tempID[40];
	do
	{
	i++;
	}
	while (emp[i] != ',');
	j = i;
	do
	{
	j++;
	}
	while (emp[j] != ',');
	k = j;
	do
	{
	k++;
	}
	while (emp[k] != ',');
	strncpy(tempID, &emp[j+1], k-1);
	ID = atoi(tempID);
	return ID;
}

double getHours(char emp[])
{
	int counter = 0;
	int less = 0;
	char temparray[5] = "";
	int i = 0;
	int j = 0;
	for (i = 0; i < 5; i++)
	{
		for (j; j < 40; j++)
		{
		if(counter < 3 + i)
		{
		if(emp[j] == ',') counter ++;
				less = j+1;
		}else
		{
		if(emp[j] == ',' || emp[j] == '\0') break;
		temparray[j-less] = emp[j];
		}
		}
	hours[i] = atof(temparray);
	temparray[0] = '\0';
	temparray[1] = '\0';
	temparray[2] = '\0';
	temparray[3] = '\0';
	}
}

