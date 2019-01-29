#include "string.h"
#include "stdlib.h"
#include <stdio.h>
#include <time.h>

struct date
{
	int day, month, year;
};

struct customer
{
	char name[50];
	int accountNumber;
	double balance;
	struct date lastTrans;
};

int getDay(int month);
int getMonth();
int getYear();
double getBalance();

void printCustomers(struct customer customers[], int nCustomers);
void populateCustomers(struct customer customers[], int nCustomers);
int transaction (struct customer customers[], int accountNumber, double amount, int nCustomers);

int main()
{
	int i;
	srand(time(NULL));
	struct customer customers[10];

	populateCustomers(customers, 10);

	printf("%25s\t%13s\t%12s\t%s\n\n","Name", "Account Number", "Balance", "Date of Last Transaction");

	printCustomers(customers, 10);

	printf ("\n\n");

	if (!(transaction (customers, 10001, -967.89, 10)))
	{
		printf ("account number %d not found - transaction cancelled", 10001);
	}
	else
	{
		printf ("account number %d - transaction processed", 10001);
	}
	printf ("\n\n");

	if (!(transaction (customers, 33, -967.89, 10)))
	{
		printf ("account number %d not found - transaction cancelled", 33);
	}
	else
	{
		printf ("account number %d  - transaction processed", 33);
	}
	printf ("\n\n");

	printf("%25s\t%13s\t%12s\t%s\n\n","Name", "Account Number", "Balance", "Date of Last Transaction");

	printCustomers(customers, 10);

	printf ("\n\n");

	return 0;
}

int getDay(int month)
{
	int day, max = 31;
	int min = 1;
	if (month == 2)
	{
		max = 28;
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		max = 30;
	}
	day = rand()%(max - min + 1) + min;
	return day;
}

int getMonth()
{
	int month;
	int max = 12;
	int min = 1;
	month = rand()%(max - min + 1) + min;
	return month;
}

int getYear()
{
	int year;
	int max = 2018;
	int min = 2014;
	year = rand()%(max - min + 1) + min;
	return year;
}

double getBalance()
{
	int balance;
	int max = 5000;
	int min = -5000;
	balance = rand()%(max - min + 1) + min;
	return balance;
}

void printCustomers(struct customer customers[], int nCustomers)
{
	int i;

	for (i = 0; i < nCustomers; i++)
	{
		printf("%25s\t%d \t\t     %.2f\t%d-%d-%d\n", customers[i].name, customers[i].accountNumber, customers[i].balance, customers[i].lastTrans.year, customers[i].lastTrans.month, customers[i].lastTrans.day);
	}
	return;
}

void populateCustomers(struct customer customers[], int nCustomers)
{
	int i;
	char names[10][50] = {"Haiden Soto","Oscar Hernandez","Heath Hickman","Reagan Mcknight","Noah Bartlett","Ross Day","Maribel Livingston","Jewel Phillips","Blake Gardner","Fernanda Ponce"};

	for (i=0;i<nCustomers;i++) 
	{
		strcpy(customers[i].name, names[i]);
		customers[i].accountNumber = 10000 + i;
		customers[i].balance = getBalance();
		customers[i].lastTrans.month = getMonth();
		customers[i].lastTrans.day = getDay(customers[i].lastTrans.month);
		customers[i].lastTrans.year = getYear();	
		
		
	}

	return;

}

int transaction (struct customer customers[], int accountNumber, double amount, int nCustomers)
{
	int i;
	int counter = 0;
	for (i = 0; i < nCustomers; i++)
	{
		if(customers[i].accountNumber == accountNumber)
		{
			customers[i].balance = customers[i].balance + amount;
			counter++;
		}
	}
	if (counter == 0)
	{
		return 0;
	}
	else return 1;
}
