#include <iostream>
#include "string.h"
#include "employee.h"

int main()
{
    Employee *ptrArr[5];
    ptrArr[0]=new Employee(1,"Park Junk Seok",NULL);
    ptrArr[1]=new Employee(2,"Sung Yung Ho",ptrArr[0]);
    ptrArr[2]=new Employee(3,"Yun Jung Soo",ptrArr[0]);
    ptrArr[3]=new Employee(4,"An Da In",ptrArr[2]);
    ptrArr[4]=new Employee(5,"Ha Sung Ho",ptrArr[2]);
    
    for(int i=0;i<5;++i)
    {
        std::cout<<"id: "<<ptrArr[i]->id()<<" name: "<<ptrArr[i]->name()<<" manager name: ";
        if(ptrArr[i]->getManager()) 
            std::cout<<ptrArr[i]->getManager()->name();
        else
            std::cout<<"none";
        std::cout<<std::endl;    
    }

    for (int i=0;i<5;++i)
        std::cout<<*(ptrArr[i])<<std::endl;

    std::cout<<ptrArr[0]->name()<<"is Manager : "<<ptrArr[0]->isManager()<<std::endl;
    
    for (int i=0;i<5;++i)
        delete ptrArr[i];
    
    return 0;
}
