#include <algorithm>
#include <iomanip>
#include <ios>
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

int main()
{
    //students object and struct record
    vector<Student_info> students;
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

    //sort by alphabat
    sort(students.begin(),students.end(),compare);

    //print by alphabat begin to end, line 1==size_type 0
    for(vector<Student_info>::size_type i=0; i!=students.size();++i)
    {
        //print name and look better
        cout << students[i].name << string(maxlen + 1 - students[i].name.size(), ' ');

        try {
            double final_grade = grade(students[i]);
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
