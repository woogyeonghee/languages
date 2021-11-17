#include <algorithm>
#include <iomanip>
#include <iostream>
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



bool fgrade(const Student_info& s)
{
    return grade(s)<60;
}
/*
//first version-fgrade
vector<Student_info> extract_fails(vector<Student_info>& students)
{
    //make 2 vectors
    vector<Student_info> pass,fail;

    //all vectors
    for(vector<Student_info>::size_type i=0;i!= students.size();++i)
    {
        //60<or not go fail or pass
        if(fgrade(students[i]))
            fail.push_back(students[i]);
        else
            pass.push_back(students[i]);
    }
    students=pass;
    return fail;
}
*/
/*
//second version-fgrade
vector<Student_info> extract_fails(vector<Student_info>& students)
{
    //make 2 vectors
    vector<Student_info> fail;
    vector<Student_info>::size_type i=0;

    while(i!= students.size())
    {
        //60< then go to fail vector
        if(fgrade(students[i])) {
            fail.push_back(students[i]);
            //to erase elements
            students.erase(students.begin() + i);
        }
        else
            ++i;
    }
    return fail;
}
*/

//third version-fgrade
vector<Student_info> extract_fails(vector<Student_info>& students)
{
    vector<Student_info> fail;
    //array's value one by one iter=0 then *iter is the first value
    vector<Student_info>::iterator iter = students.begin();

    //if it is not the last one
    while (iter!=students.end())
    {
        //60< value
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
    vector<Student_info> students; //when use vector
    Student_info record;

    //longest name
    string::size_type maxlen=0;

    //record.name record.mid record.fin record.hw
    while (read(cin,record))//record.name ==> students one by one
    {
        //maxlen and record.name.size() who is bigger and return
        maxlen=max(maxlen,record.name.size());
        students.push_back(record);
    }

    vector<Student_info>pass=students;//when use vector
    vector<Student_info>fail=::extract_fails(pass);//when use vector


    //**************************pass***********************************
    //sort by alphabat
    sort(pass.begin(),pass.end(),compare); //when use vector

    cout<<"[pass list]"<<endl;
    //print by alphabat begin to end, line 1==size_type 0
    for(vector<Student_info>::size_type i=0; i!=pass.size();++i)
    {
        //print name and look better
        cout << pass[i].name << string(maxlen + 1 - pass[i].name.size(), ' ');

        try {
            double final_grade = grade(pass[i]);
            streamsize prec = cout.precision();
            cout<< setprecision(3)<< final_grade << setprecision(prec);
        }
        catch (domain_error e)
        {
            //error's object name e and print e's message
            cout << e.what();
        }
        cout <<endl;
    }
    //**************************fail***********************************
    //sort by alphabat
    sort(fail.begin(),fail.end(),compare); //when use vector

    cout<<"[fail list]"<<endl;
    //print by alphabat begin to end, line 1==size_type 0
    for(vector<Student_info>::size_type i=0; i!=fail.size();++i)
    {
        //print name and look better
        cout << fail[i].name << string(maxlen + 1 - fail[i].name.size(), ' ');

        try {
            double final_grade = grade(fail[i]);
            streamsize prec = cout.precision();
            cout<< setprecision(3)<< final_grade << setprecision(prec);
        }
        catch (domain_error e)
        {
            //error's object name e and print e's message
            cout << e.what();
        }
        cout <<endl;
    }
    return 0;
}
