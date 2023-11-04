/*#include<iostream>
#include<string>
using namespace std;
int main()
{
	int Area=0, radius, length=0, breath=0,height=0 ;
	char shape;
	const int pi = 3.14;
	cout << "For which shape you want to find area?";
	cin >> shape;
	switch (shape)
	{
	case'c':
		cout << "Enter Radius: ";
		cin >> radius;
		Area = pi * radius * radius;
		break;
	case'r':
		cout << "Enter length: ";
		cin >> length;
		cout << "Enter Breath: ";
		cin >> breath;
		Area = length * breath;
		break;
	case't':
		cout << "Enter Breath: ";
		cin >> breath;
		cout << "Enter Height: ";
		cin >> height;
		Area = 0.5 * breath * height;
	default:
		continue;
	}
	cout << "Area is: " << Area;
	return 0;
}*/