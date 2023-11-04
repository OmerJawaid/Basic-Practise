/*#include<iostream>
using namespace std;
int main()
{
	int resultMartix[10][10], matrix1[10][10], matrix2[10][10], r1, c1, r2, c2, rf, cf, result = 0;
	cout << "Enter number of rows of 1 matrix: ";
	cin >> r1;
	cout << "Enter number of columns of 1 matrix: ";
	cin >> c1;
	cout << "Enter number of rows of 2 matrix: ";
	cin >> r2;
	cout << "Enter number of columns of 2 matrix: ";
	cin >> c2;
	for (rf = 0; rf < r1; rf++)
		for (cf = 0; cf < c1; cf++)
		{
			cout << "Enter values of 1 matrix: ";
			cin >> matrix1[rf][cf];
		}
	for (rf = 0; rf < r2; rf++)
		for (cf = 0; cf < c2; cf++)
		{
			cout << "Enter values of 2 matrix: ";
			cin >> matrix2[rf][cf];
		}
	char op;
	cout << "Choose the operation: ";
	cin >> op;
	switch (op)
	{
	case'+':
		cout << "Addition:";
		for (rf = 0; rf < r1; rf++)
			for (cf = 0; cf < c1; cf++)
				cout << "\nRow " << rf + 1 << "	Column " << cf + 1 << endl << matrix1[rf][cf] + matrix2[rf][cf];
		break;
	case'-':
		cout << "Subtraction:";
		for (rf = 0; rf < r1; rf++)
			for (cf = 0; cf < c1; cf++)
				cout << "\nRow " << rf + 1 << "	Column " << cf + 1 << endl << matrix1[rf][cf] - matrix2[rf][cf];
		break;
	case'*':
		cout << "Multiplication:"<<endl;
		for (rf = 0; rf < r1; rf++)
		{
			for (cf = 0; cf < c2; cf++)
			{
				for (int k = 0; k < c1; k++) {
					result += matrix1[rf][k] * matrix2[k][cf];
				}
				resultMartix[rf][cf] = result;
			}
		}
		for (rf = 0; rf < r1; rf++) {
			for (cf = 0; cf < c2; cf++) {
				cout << resultMartix[rf][cf] << " ";
			}
			cout << endl;
		}

	default:
		cout << "Invalid operation. Please choose +, -, or *." << endl;
	}
	system("pause");
	return 0;
}*/