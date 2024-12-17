#include <iostream>
using namespace std;
int main() {
	
	
	for(int i=7; i>=1; i--){
	for(int j=7-i; j>0; j--)
		
	cout << "  ";
	
	for(int k=i; k>0; k--) {
	if (k % 2 ==0) {
		cout << "@ ";
	} else {
		cout << "# ";
	}
	}
	cout << endl;
	}
	return 0;
}