#include<stdio.h>
int main()
{
    float basic_salary,DA,PF,HRA,gross_salary,net_salary;
    printf("\nenter the base salary of employee\n");
    scanf("%f",&basic_salary);
    DA=(basic_salary*25.0)/100.0;
    HRA=(basic_salary*15.0)/100.0;
    gross_salary=basic_salary+HRA+DA;
    PF=(gross_salary*10.0)/100.0;
    net_salary=gross_salary-PF;
    printf("\n DA=%.2f",DA);
    printf("\n HRA=%.2f",HRA);
    printf("\n PF=%.2f",PF);
    printf("\n gross salary=%.2f",gross_salary);
    printf("\n net salary=%.2f",net_salary);
    return 0;
}