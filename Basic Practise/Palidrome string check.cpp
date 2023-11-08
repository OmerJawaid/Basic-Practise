#include<iostream>
#include<string>
using namespace std;
int main()
{
	string pal;
	int count = 0, len, len_div, j;
	cout << "Enter the string: ";
	cin >> pal;
	len = pal.length();
	len_div = len / 2;
	j = len-1;
	for (int i = 0; i < len_div; i++)
	{														
		if (pal[i] == pal[j])
			count++;
		j--;
	}
	if (count == len_div)
		cout << "It is palidrome.";
	else
		cout << "It is not a palidrome.";
}