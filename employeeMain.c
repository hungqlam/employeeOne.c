#include<string.h>
#include<stdlib.h>
#include "employee.h"

int main(void)
{
PtrToEmployee searchEmployeeByNumber(const Employee table[], int tableSize, long targetNumber);
PtrToEmployee searchEmployeeByName(const Employee table[], int tableSize, char * targetName);
PtrToEmployee searchEmployeeBySalary(const Employee table[], int tableSize, double targetSalary);
PtrToEmployee searchEmployeeByPhone(const Employee table[], int tableSize, char * targetPhone);
extern Employee EmployeeTable[];
extern const int EmployeeTableEntries;

PtrToEmployee matchPtr;
matchPtr = searchEmployeeByNumber(EmployeeTable,EmployeeTableEntries,1045);

//Example not found
if(matchPtr!=NULL)
{
    printf("Employee ID 1045 is in record %d\n",matchPtr - EmployeeTable);
}
else 
    printf("Employee ID is NOT found in the record\n");

//Example found
matchPtr = searchEmployeeByName(EmployeeTable,EmployeeTableEntries, "Tony Bobcat");
if(matchPtr != NULL)
{
    printf("Employee Tony Bobcat is in record %d\n", matchPtr - EmployeeTable);

}

else 
printf("Employee Tony Bobcat is NOT found in the record\n");

matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 8.78);


if(matchPtr!=NULL)
{
    printf("Employee with 8.78 Salary is in record %d\n",matchPtr - EmployeeTable);
}
else 
    printf("Employee with 8.78 Salary is NOT found in the record\n");

matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 5);


if(matchPtr!=NULL)
{
    printf("Employee with 5 Salary is in record %d\n",matchPtr - EmployeeTable);
}
else 
    printf("Employee with 5 Salary is NOT found in the record\n");

matchPtr = searchEmployeeByPhone(EmployeeTable,EmployeeTableEntries,"909-555-2134");
if(matchPtr!=NULL)
{
    printf("Employee with phone number 909-555-2134 is in record %d\n",matchPtr - EmployeeTable);
}
else 
    printf("Employee with phone number 909-555-2134 is NOT found in the record\n");
matchPtr = searchEmployeeByPhone(EmployeeTable,EmployeeTableEntries,"714-565-2134");
if(matchPtr!=NULL)
{
    printf("Employee with phone number 909-555-2134 is in record %d\n",matchPtr - EmployeeTable);
}
else 
    printf("Employee with phone number 909-555-2134 is NOT found in the record\n");


return EXIT_SUCCESS ;


}