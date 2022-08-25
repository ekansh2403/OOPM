#include <iostream>
using namespace std;
void swap(int &a, int &b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}
int main() {
	// FUNCTION CALL BY REFERENCE
	int x, y;
	cout << "Enter 1st number:";
	cin >> x;
	cout << "Enter 2nd number:";
	cin >> y;

	cout << "Original 1st number:" << x << " & "
		 << "Original 2nd number:" << y << endl;
	swap(x,y);
	cout << "Swapped 1st number:" << x << " & "
		 << "Swapped 2nd number:" << y << endl;
	return 0;
}
