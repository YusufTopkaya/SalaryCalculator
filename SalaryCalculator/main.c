#include <stdio.h>
#include <stdlib.h>

int main()
{
    char choice;
    int workingHour;
    int salary;
    printf("\t-----Accounting Program For Salaries---------\n");
    printf("\t- 1 IT                                      -\n");
    printf("\t- 2 Human Resources                         -\n");
    printf("\t- 3 Manager                                 -\n");
    printf("\t- 4 Warehouse                               -\n");
    printf("\t\nChoose your department:");
    scanf(" %c", &choice);
    printf("\nEnter your weekly working hours:");
    scanf("%d",&workingHour);

    if(choice=='1')
        salary=workingHour*16;
    else if(choice=='2')
        salary=workingHour*14;
    else if(choice=='3')
        salary=workingHour*20;
    else if(choice=='4')
        salary=workingHour*12;


    printf("\nYour salary: %d",salary*4);





    return 0;
}
