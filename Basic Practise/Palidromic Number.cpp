//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string pal;
//	int count = 1, len;
//
//	cout << "Enter a palindomic number: ";
//	cin >> pal;
//	len = pal.length();
//	if (len % 2 == 1)
//	{
//		int div = len / 2;
//		int j = len - 1;
//		for (int i = 0; i < div && j>div + 1; i++)
//		{
//			if (pal[i] == pal[j])
//			{
//				count++;
//				j--;
//			}
//		}
//		if (count == div)
//			cout << "It is a palindromic number";
//		else
//			cout << "It is not a palindromic number";
//	}
//	else
//	{
//		count = 1;
//		int div = len / 2;
//		int j = len - 1;
//		for (int i = 0; i < div && j >= div; i++)
//		{
//			if (pal[i] == pal[j])
//			{
//				count++;
//				j--;
//			}
//		}
//		if (count == div + 1)
//		{
//			cout << "It is a palindromic number";
//		}
//		else
//			cout << "It is not a palindromic number";
//	}
//	cout << "Thanks";
//	return 0;
//}