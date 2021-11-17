#include <algorithm>
#include <iomanip>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
#include "median.h"
#include "grade.h"
#include "Student_info.h"


using std::cin; using std::setprecision;
using std::cout; using std::sort;
using std::domain_error; using std::streamsize;
using std::endl; using std::string;
using std::max; using std::vector;
using std::ostream; using std::back_inserter;

bool did_all_hw(const Student_info &s)
{
    //begin to end find who did homework
    return find(s.homework.cbegin(),s.homework.cend(),0)==s.homework.end();
}

double median_analysis(const vector<Student_info>& students)
{
    vector<double> scores;
    std::transform(students.cbegin(),students.cend(),back_inserter(scores), grade);
    return ::median(scores);
}

void write_analysis(ostream& out, const string& name,double (*analysis)(const vector<Student_info>&),
                    const vector<Student_info>& did,const vector<Student_info>& didnt)
{
    out<< name<<": median(did)= "<<analysis(did)
       <<", median(didnt)= "<<analysis(didnt)<<endl;
}

int main() {
    vector<Student_info> did, didnt;
    Student_info student;

    while (::read(cin, student)) {
        if (::did_all_hw(student))
            did.push_back(student);
        else
        didnt.push_back(student);
    }

    if (did.empty()) {
        cout << "No student did all the homework!" << endl;
    }

    if (did.empty()) {
        cout << "Every student did all the homework!" << endl;
    }

    write_analysis(cout, "median", median_analysis, did, didnt);

    return 0;
}




