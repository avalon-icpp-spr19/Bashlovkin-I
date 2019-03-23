

#include <iostream>
#include <limits>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(0, "");
	cout << "тип\t\t|\tразмер,\t|\t\t\t\tзначение\t\t\t|\tкол-во\n";

	cout << "данных\t\t|\tбит\t|\t\tмин.\t\t|\tмакс.\t\t\t|\tзначимых бит\n";

	cout << "=======================================================================================================================\n";

	cout << "bool\t\t|\t" << sizeof(bool) << "\t|\t" << numeric_limits<bool>::min() << "\t\t\t|\t" << numeric_limits<bool>::max() << "\t\t\t|\t" << numeric_limits<bool>::digits << "\n";

	cout << "unsigned short\t|\t" << sizeof(unsigned short) << "\t|\t" << numeric_limits<unsigned short>::min() << "\t\t\t|\t" << numeric_limits<unsigned short>::max() << "\t\t\t|\t" << numeric_limits<unsigned short>::digits << "\n";

	cout << "short\t\t|\t" << sizeof(short) << "\t|\t" << numeric_limits<short>::min() << "\t\t\t|\t" << numeric_limits<short>::max() << "\t\t\t|\t" << numeric_limits<short>::digits << "\n";

	cout << "unsigned int\t|\t" << sizeof(unsigned int) << "\t|\t" << numeric_limits<unsigned int>::min() << "\t\t\t|\t" << numeric_limits<unsigned int>::max() << "\t\t|\t" << numeric_limits<unsigned int>::digits << "\n";

	cout << "int\t\t|\t" << sizeof(int) << "\t|\t" << numeric_limits<int>::min() << "\t\t|\t" << numeric_limits<int>::max() << "\t\t|\t" << numeric_limits<int>::digits << "\n";

	cout << "unsigned long\t|\t" << sizeof(unsigned long) << "\t|\t" << numeric_limits<unsigned long>::min() << "\t\t\t|\t" << numeric_limits<unsigned long>::max() << "\t\t|\t" << numeric_limits<unsigned long>::digits << "\n";

	cout << "long\t\t|\t" << sizeof(long) << "\t|\t" << numeric_limits<long>::min() << "\t\t|\t" << numeric_limits<long>::max() << "\t\t|\t" << numeric_limits<long>::digits << "\n";

	cout << "U.L.L\t\t|\t" << sizeof(unsigned long long) << "\t|\t" << numeric_limits<unsigned long long>::min() << "\t\t\t|\t" << numeric_limits<unsigned long long>::max() << "\t|\t" << numeric_limits<unsigned long long>::digits << "\n";

	cout << "long long\t|\t" << sizeof(long long) << "\t|\t" << numeric_limits<long long>::min() << "\t|\t" << numeric_limits<long long>::max() << "\t|\t" << numeric_limits<long long>::digits << "\n";

	cout << "char\t\t|\t" << sizeof(char) << "\t|\t" << numeric_limits<char>::min() << "\t\t\t|\t" << numeric_limits<char>::max() << "\t\t\t|\t" << numeric_limits<char>::digits << "\n";

	cout << "float\t\t|\t" << sizeof(float) << "\t|\t" << numeric_limits<float>::min() << "\t\t|\t" << numeric_limits<float>::max() << "\t\t|\t" << numeric_limits<float>::digits << "\n";

	cout << "double\t\t|\t" << sizeof(double) << "\t|\t" << numeric_limits<double>::min() << "\t\t|\t" << numeric_limits<double>::max() << "\t\t|\t" << numeric_limits<double>::digits << "\n";

	cin.get();
}