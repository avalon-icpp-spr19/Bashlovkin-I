#include <iostream>

using namespace std;

const float PI(3.14159);
const int YEARDAYS(365);
const int WEEKDAYS(7);

int main()
{
	setlocale(0, "");
	// 1 �������
	int a;
	unsigned b;
	short int c;
	char d;
	float e;

	// 2 �������
	int a(0);
	unsigned b(1);
	short int c(long long int);
	char d(numeric_limits<char>::max());

	// 3 �������

	int a(10);
	const short int b(0xA);
	const long long int c(077);
	char d(0b0110);
	char e('f');
	unsigned int f(23);
	const long long int(12345);


	// 4 �������
	short int MyAge;
	unsigned int AreaOfBackyard;
	long double NumberOfStars;
	float Rainfall;

	// 5 �������
	float pi(PI);
	int WeeksInYear(YEARDAYS / WEEKDAYS);
	cin.get(); // ������� ��� ����, ����� ������� �� ����������� �������������
}