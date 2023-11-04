/*#include<iostream>
#include<string>
using namespace std;
int main()
{
	int a,str_volcount=0, str_conscount = 0;
	string str;
	cout << "Enter a String:";
	getline(cin, str);
	a=str.length();
	for (int i = 0; i < a; i++)
	{
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
			str_volcount++;
		else if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
			str_volcount++;
		else
			str_conscount++;
	}
	cout << "Number of Vowels: "<< str_volcount++;
	cout << "\nNumber of Consonants: " << str_conscount++;
	return 0;
}*/