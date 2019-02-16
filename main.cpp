#include <iostream>

using namespace std;

const float PI(3.14159);
const int YEARDAYS(365);
const int WEEKDAYS(7);

int main()
{
	setlocale(0, "");
	// 1 çàäàíèå
	int a;
	unsigned b;
	short int c1;
	char d;
	float e;

	// 2 çàäàíèå
	int a(0);
	unsigned b(0xFFFFFFFFU);
	size_t c = sizeof(long long int);
	char d(numeric_limits<char>::max());

	// 3 çàäàíèå

	int a(10);
	const short int b(0xA);
	const long long int c(077LL);
	char d(0b0110);
	char e('f');
	unsigned int f(23U);
	const long long int(12345LL);


	// 4 çàäàíèå
	short int MyAge;
	float AreaOfBackyard;
	long double NumberOfStars;
	float Rainfall;

	// 5 çàäàíèå
	float pi(PI);
	int WeeksInYear(YEARDAYS / WEEKDAYS);
	cin.get(); // êîìàíäà äëÿ òîãî, ÷òîáû êîíñîëü íå çàêðûâàëàñü àâòîìàòè÷åñêè
}
