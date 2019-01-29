#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *fptr;

void main(void)
{
    
    float total, unitcost, units, linetotal;
    total = 0;
    char string[80], orderdate[80], region[80], rep[80], item[80], input[80];
    while (strcmp(item, "") != 0)
    {
        printf("Enter Product Name <or return to quit>");
        gets(input);
        if (input[0] == 0)
            {
                printf("Closing...\n");
                break;
            }
        fptr = fopen("SampleData.txt", "r");
        fgets(string, 80, fptr);
        while(!feof(fptr))
            {
                fscanf(fptr,"%s\t%s\t%s\t%s\t%f\t%f\t%f", &orderdate, &region, &rep, &item, &units, &unitcost, &linetotal);
                if(strcmp(item, input) == 0)
                {
                    total = total + linetotal;
                }
            }
        fclose(fptr);
        printf("%.2f\n", total);
    }
}
