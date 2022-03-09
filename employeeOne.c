#include<string.h>
#include"employee.h"

PtrToEmployee searchEmployeeByNumber(PtrToConstEmployee ptr, int tableSize, long targetNumber)
{
    const PtrToConstEmployee endPtr = ptr + tableSize;
    for(; ptr < endPtr ; ptr++) // search until end of table ptr++ will increment
    {
        if(ptr->number == targetNumber) // check if it equals the employee number
        return (PtrToEmployee) ptr; // return location of the number to callee
    }

    return NULL;
}


PtrToEmployee searchEmployeeByName(PtrToConstEmployee ptr, int tableSize, char * targetName)
{
    const PtrToConstEmployee endPtr = ptr + tableSize;
    for(; ptr < endPtr ; ptr++) // search until end of table ptr++ will increment
    {
        if(strcmp(ptr->name,targetName)==0) // check if it equals the employee number
        return (PtrToEmployee) ptr; // return location of the number to callee
    }
    return NULL;
}

PtrToEmployee searchEmployeeBySalary(PtrToConstEmployee ptr, int tableSize, double targetNumber)
{
    const PtrToConstEmployee endPtr = ptr + tableSize;
    for(; ptr < endPtr ; ptr++) // search until end of table ptr++ will increment
    {
        if(ptr->salary == targetNumber) // check if it equals the employee number
        return (PtrToEmployee) ptr; // return location of the number to callee
    }

    return NULL;
}


PtrToEmployee searchEmployeeByPhone(PtrToConstEmployee ptr, int tableSize, char * targetPhone)
{
    const PtrToConstEmployee endPtr = ptr + tableSize;
    for(; ptr < endPtr ; ptr++) // search until end of table ptr++ will increment
    {
        if(strcmp(ptr->phone,targetPhone)==0) // check if it equals the employee number
        return (PtrToEmployee) ptr; // return location of the number to callee
    }
    return NULL;
}