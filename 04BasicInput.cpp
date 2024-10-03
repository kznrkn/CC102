#include <iostream>
using namespace std;

int main(){
	
	string nn;
	string cy;
	string sch;
	
	cout << "Nickname:\t";
	cin >> nn;
	cout << "Course-Year Level:\t";
	cin >> cy;
	cout << "School:\t";
	cin >> sch;
	
	cout << "\nWow Congrats "<<nn <<"! "<<cy<<" is a nice course. And you are studying in " << sch<< " which is one of the Center of Excellence Tertiary Education.";
	return 0;
}