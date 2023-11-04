//#include<iostream>
//using namespace std;
//int main()
//{
//	char selection;
//	do
//	{
//		cout << "\nFor Range of Prime numbers (R)" << endl
//			<< "To check nth Prime Number (C)" << endl
//			<< "Quit (Q)" << endl;
//		cin >> selection;
//		switch (selection)
//		{
//		case'r':
//		{}
//		case'R':
//		{
//			int limit, count = 0;
//			cout << "Enter the limit of range: ";
//			cin >> limit;
//			for (int i = 1; i < limit; i++)
//			{
//				for (int j = 1; j < i; j++)
//				{
//					if (i % j == 0)
//						count++;
//				}
//				if (count == 1)
//				{
//					cout << i << " ";
//				}
//				count = 0;
//			}
//			break;
//		}
//		case'c':
//		{}
//		case'C':
//		{
//			int num,count=0;
//			cout << "Enter the number to check if it is prime or not: ";
//			cin >> num;
//			for (int i = 1; i < num; i++)
//			{
//				if (num % i == 0)
//					count++;
//			}
//			if (count == 1)
//				cout << "It is a prime number.";
//			else
//				cout << "It is not a prime number.";
//			break;
//		}
//		}
//	} while (selection != 'Q' && selection != 'q');
//}