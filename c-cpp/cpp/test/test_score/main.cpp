#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

class Student{
	char name[20];
	int kor;
	int mat;
	int eng;
	int sum;
	double average;
	int rank;
	//	
} ;

int main()
{
	ifstream fin("score.dat");
	ofstream fout("score.out");
	
	Student students[10];
	
	for (int i = 0; i < 10; ++i) {
		cin(ifstream fin, "%s %d %d %d", 
					students[i].name, &students[i].kor, &students[i].eng, &students[i].mat);
					
		students[i].sum = students[i].kor + students[i].eng + students[i].mat;
		students[i].average = (double)students[i].sum / 3.0;
		students[i].rank = 1;
	}
	
	//rank 나(1번)와 비교해서 순위에 +1 만큼 해줘서 순위를 매김
	for (int i = 0; i < 10; ++i) {
		for(int j = 0; j < 10; ++j) {
			if(/*i != j && */ students[i].sum < students[j].sum) {
				++students[i].rank;
			}
		}
	}
	Student *table[10];
	for (int i = 0; i < 10; ++i) {
		table[i] = &students[i];
	}
	
	for (int i = 0; i < 10 - +1; ++i) {	// 선택 정렬
		for (int j = i + 1; j < 10; ++j) {
			if (strcmp(table[i]->name, table[j]->name) > 0) {			// 앞쪽(i번째 값)이 크면 값을 바꿈
				Student *tmp = table[i];
				table[i] = table[j];
				table[j] = tmp;
			}
		}
	}

	fprintf(fout, "------------------------------------------\n");
	fprintf(fout, "	name	kor eng mat sum   avg  rnk\n");
	fprintf(fout, "------------------------------------------\n");	
	// printf(%-15) -> 15글자까지 왼쪽정렬로 설정
	for (int i = 0; i < 10; ++i) {
		fprintf(fout, "%-15s %3d %3d %3d %3d %6.2f %2d\n", table[i]->name,
		 table[i]->kor, table[i]->eng, table[i]->mat,
		 table[i]->sum, table[i]->average, table[i]->rank);
	}
	fprintf(fout, "------------------------------------------\n");
	
	fclose(fin);
	fclose(fout);
	return 0;
}
