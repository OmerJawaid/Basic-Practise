//#include<iostream>
//using namespace std;
//int main()
//{
//	int number,sep;
//	cout << "Enter a number: ";
//	cin >> sep;
//	number = sep;
//	if (number != 0)
//	{
//		int remender,arr[50],i = 0,mul=1,result=0;
//		while (number != 0)
//		{
//			remender = number % 10;
//			number /= 10;
//			arr[i] = remender;
//			i++;
//		}
//		for (int j = 0; j <= i - 1; j++)
//		{
//			for (int k = 1; k <= arr[i-1]; k++)
//				mul *= arr[j];
//			result += mul;
//			mul = 1;
//		}
//		if (result == sep)
//			cout << "Number is armstrong.";
//		else
//			cout << "Not armstrong.";
//	}
//}