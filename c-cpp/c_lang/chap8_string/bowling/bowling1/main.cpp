#include <iostream>
#include "bowling.h"
using std::cout;
using std::endl;

int main()
{
	int frame = 1;
	int number;
	int score = 0;
	
	while (frame == 11) {
		if(frame == 1) {
			cout << "input 1st number : " <<endl;
			cin >> number;
			if (number == 10) {
				score += 30;
				frame += 1;	
			}
			else {
				score += number;
				frame += 1;
			}
		else if(frame == 2) {
			cout << "input 2nd number : " <<endl;
			cin >> number;
			if (number == 10) {
				score += 30;
				frame += 1;	
			}
			else {
				score += number;
				frame += 1;
			}
		else if(frame == 3) {
			cout << "input 3rd number : " <<endl;
			cin >> number;
			if (number == 10) {
				score += 30;
				frame += 1;	
			}
			else {
				score += number;
				frame += 1;
			}
		else if(frame == 4) {
			cout << "input 4th number : " <<endl;
			cin >> number;
			if (number == 10) {
				score += 30;
				frame += 1;	
			}
			else {
				score += number;
				frame += 1;
			}
		else if(frame == 5) {
			cout << "input 5th number : " <<endl;
			cin >> number;
			if (number == 10) {
				score += 30;
				frame += 1;	
			}
			else {
				score += number;
				frame += 1;
			}
		else if(frame == 6) {
			cout << "input 6th number : " <<endl;
			cin >> number;
			if (number == 10) {
				score += 30;
				frame += 1;	
			}
			else {
				score += number;
				frame += 1;
			}
		else if(frame == 7) {
			cout << "input 7th number : " <<endl;
			cin >> number;
			if (number == 10) {
				score += 30;
				frame += 1;	
			}
			else {
				score += number;
				frame += 1;
			}
		else if(frame == 8) {
			cout << "input 8th number : " <<endl;
			cin >> number;
			if (number == 10) {
				score += 30;
				frame += 1;	
			}
			else {
				score += number;
				frame += 1;
			}
		else if(frame == 9) {
			cout << "input 9 number : " <<endl;
			cin >> number;
			if (number == 10) {
				score += 30;
				frame += 1;	
			}
			else {
				score += number;
				frame += 1;
			}
		else if(frame == 10) {
			cout << "input 9 number : " <<endl;
			cin >> number;
			if (number == 10) {
				score += 30;
				frame += 1;	
			}
			else {
				score += number;
				frame += 1;
			}
		
		cout << "total score is : " << score << endl;
			//Bowling.throwball();
		}
	}

	return 0;
}
