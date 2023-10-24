// Q1. Define a structure Employee with memeber variable id ,name salary..
#include<stdio.h>
#include<string.h>

struct Employee
{
    int id;
    char name[20];
    float salary;
};
// Q2. Write a function to take input employee data from the user.[Refer structure from Q1]
struct Employee inputEmployee()
{
    struct Employee e;
    printf("Enter employee id, title and salary:");
    scanf("%d",&e.id);
    fflush(stdin);
    fgets(e.name,20,stdin);
    e.name[strlen(e.name)-1]='\0';
    scanf("%f",&e.salary);
    return e;
}
// Q3. Write a function to display employee data..[Refer structure from Q1]
void displayEmployee(struct Employee e)
{
    printf("\n%d %s %f",e.id,e.name,e.salary);
}
// Q4. Write a functon to find the highest salary employee from a given array of 10 employees.[Refer structure from Q1]
struct Employee highestSalaryEmployee(struct Employee e[],int n)
{
    int i;
    struct Employee emp;
    emp=e[0];
    for(i=1;i<=n-1;i++)
       if(emp.salary<e[i].salary)
        emp=e[i];
    return emp;
}
// Q5. Write a function to sort employees according to their salaries.[Refer structure from Q1]
