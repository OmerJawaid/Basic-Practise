#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int num,length,digit[20],count =1;
	cout << "Enter the number.";
	cin >> num;
	length = log10(num) + 1;
	for (int i = 0; i < length; i++)
	{
		for (int j=num; j > count; j = j / 10)
			digit[i] = j;
		 count = count * 10;
	}
	for (int i = 0; i < 1; i++)
	{
		cout << digit[i];
	}

}