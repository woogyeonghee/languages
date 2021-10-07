#include <algorithm>
#include <iomanip>
#include <iostream>
#include <list>
#include <stdexcept>
#include <string>
#include <vector>
#include "grade.h"
#include "Student_info.h"


using std::cin; using std::setprecision;
using std::cout; using std::sort;
using std::domain_error; using std::streamsize;
using std::endl; using std::string;
using std::max; using std::vector;
using std::list;



bool fgrade(const Student_info& s)
{
    return grade(s)<60;
}

//fourth version-fgrade
list<Student_info> extract_fails(list<Student_info>& students)
{
    //list type's template
    list<Student_info> fail;
    auto iter=students.begin();

    while (iter !=students.end())
    {
        if(fgrade(*iter))
        {
            fail.push_back(*iter);
            iter=students.erase(iter);
        }
        else
            ++iter;
    }
    return fail;
}

int main()
{
    //students object and struct record
    list<Student_info> students;
    Student_info record;

    //longest name
    string::size_type maxlen=0;

    //record.name record.mid record.fin record.hw
    while (read(cin,record))//record.name ==> students one by one
    {
        //maxlen and record.name.size() who is bigger and return
        students.push_back(record);
        maxlen=max(maxlen,record.name.size());
    }

    //sort by alphabat
    students.sort(compare); //sort in list

    list<Student_info>pass=students;//when use vector
    list<Student_info>fail=::extract_fails(pass);//when use vector


    //**************************pass***********************************

    cout<<"[pass list]"<<endl;
    //print by alphabat begin to end, line 1==size_type 0
    for(auto iter =pass.cbegin(); iter!=pass.cend();++iter)
    {
        //print name and look better
        cout << iter->name << string(maxlen + 1 - iter->name.size(), ' ');

        try {
            streamsize prec = cout.precision();
            cout<< setprecision(3)<< ::grade(*iter) << setprecision(prec)<<endl;
        }
        catch (domain_error e)
        {
            //error's object name e and print e's message
            std::cerr << e.what()<<endl;
            return 1;
        }
    }
    //**************************fail***********************************

    cout<<"[fail list]"<<endl;
    //print by alphabat begin to end, line 1==size_type 0
    for(auto iter=fail.cbegin(); iter != fail.cend();++iter)
    {
        //print name and look better
        cout << iter->name << string(maxlen + 1 - iter->name.size(), ' ');

        try {
            streamsize prec = cout.precision();
            cout<< setprecision(3)<<::grade(*iter) << setprecision(prec)<<endl;
        }
        catch (domain_error e)
        {
            //error's object name e and print e's message
            std::cerr<<e.what()<<endl;
            return 1;
        }
    }
    return 0;
}
