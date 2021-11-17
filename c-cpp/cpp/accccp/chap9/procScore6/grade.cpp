#include <stdexcept>            // to use except
#include <vector>
#include "median.h"
#include "student_info.h"
#include "grade.h"


using std::vector;
using std::domain_error;
// 두 개의 grade 함수는 메인에서 다루지 않고 여기서만 다뤄서 일시적으로 static을 붙힘.
static double grade(double midterm, double finalterm, double homework)
{
    return 0.2 * midterm + 0.4 * finalterm + 0.4 * homework;
}

// 구조체와 관련되어 있으므로 static 제거 및 멤버함수로
double grade(double midterm, double finalterm, const vector<double>& homeworks)        // 3번째 인자가 달라서 오버로딩 가능, 숙제들을 입력받아서 전달하는 함수
{
    if (homeworks.size() == 0) {
        // 예외처리 숙제가 0이면 0으로 나누어지기 때문에 문제가 생기는 것을 방지
        throw domain_error("median of an empty vector");
    }
    double homework = median(homeworks);

    return ::grade(midterm, finalterm, homework);           // 다른 grade 함수를 호출
}

//double grade(const student_info& s)
//{
//    return ::grade(s.midterm, s.finalterm, s.homeworks);
//}