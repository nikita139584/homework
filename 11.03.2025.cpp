#include <iostream>
using namespace std;

int main()
{
	1;
	cout << "Print first number: ";
	int number;
	cin >> number;
	cout << "Print second number: ";
	int number2;
	cin >> number2;
	cout << number + number2 << "\n";
	cout << number - number2 << "\n";
	cout << number * number2 << "\n";
	cout << number / number2 << "\n";
	2;
	cout << "Print number: ";
	double number;
	cin >> number;
	cout << "Print procent : ";
	double procent;
	cin >> procent;
	cout << number / 100 * procent << "\n";
	3;
	cout << "Print width: ";
	int width;
	cin >> width;
	cout << "Print height: ";
	int height;
	cin >> height;
	cout << height * width << "\n";
	4;
	cout << "Print degree: ";
	double degree;
	cin >> degree;
	cout << (degree * 9 / 5) + 32 << "\n";
	5;
	cout << "Print first number: ";
	double number;
	cin >> number;
	cout << "Print second number: ";
	double number2;
	cin >> number2;
	cout << "Print third number: ";
	double number3;
	cin >> number3;
	cout << (number + number2 + number3) / 3 << "\n";
	6;
	cout << "Print radius: ";
	double radius;
	cin >> radius;
	const double PI = 3.1415926;
	cout << "circuit: " << 2 * PI * radius << "\n";
	cout << "area of ​​a circle: " << PI * radius / 2 << "\n";
}


