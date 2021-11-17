#include "string.h"
#include "employee.h"

std::ostream& operator<<(std::ostream& out, const Employee& rhs)
{
    out << "("<<rhs.name_<<", "<<rhs.name_<<", ";
    out<<((rhs.pManager_==NULL)?"none ":rhs.pManager_->name_);
    out << ")";
    return out;
}

Employee::Employee(int id,String name, const Employee *pManager)
:id_(id),name_(name),pManager_((Employee*)pManager)
{
}

Employee::~Employee()
{

}

int Employee::id() const
{
    return id_;
}

String Employee::name() const
{
    return name_;
}

const Employee *Employee::getManager() const
{
    return pManager_;
}

void Employee::setManager (const Employee *pManager)
{
    pManager_=(Employee*)pManager;
}

bool Employee::isManager() const
{
    return pManager_==NULL;
}

