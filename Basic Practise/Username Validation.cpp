//#include<iostream>
//#include<string>
//#include<math.h>
//using namespace std;
//int main()
//{
//	string username,concatination;
//	cout << "Enter the username: ";
//	getline(cin, username);
//	int len, countl = 0, countc = 1;
//	len = username.length();
//	if (len < 4 || len>20)
//		countl = 1;
//	for (int i = 0; i < len; i++)
//	{
//		if (isalpha(username[i]) || username[i] == '-' || username[i] == '_'|| username[i] == ' ')
//			countc++;
//	}
//	cout << "Report:" << endl;
//	if (countl == 1)
//	{
//		concatination = concatination + "Must have length between 4 and 20.\n";
//	}
//	if (countc < len)
//	{
//		concatination= concatination+"Must be a-z or A-Z or - or _\n";
//	}
//	if (username == "admin" || username == "support" || username == "moderator")
//	{
//		concatination = concatination + "These are reserved word and can't be used.\n";
//	}
//	if (username == "inappropriate" || username == "offensive" || username == "restricted")
//	{
//		concatination = concatination + "These are disallowded username and can't be used.\n";
//	}
//	cout << concatination;
//}