//This program will calculate area of room in square feet
#include <iostream>
using namespace std;

int main(){
	int room_width {0};
	int room_length {0};
	cout << "Enter your bedroom length: ";
	cin >> room_length;
	cout<< "Enter your bedroom width: ";
	cin >> room_width;
	cout << "Area of the bedroom = " << room_length*room_width << " sq.ft" << endl;
	return 0;
	
}
