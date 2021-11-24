#include <iostream>
#include <iomanip>
#include <conio.h>
#include <cstdlib>
#include <ctime>

using namespace std;

void Create(int* a, const int n, int Low, int High)
{
	for (int i = 0; i < n; i++)
		a[i] = Low + rand() % (High - Low + 1);
}
void Print(int* a, const int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(4) << a[i];
	cout << endl;
}
int Kil(int* a, const int n)
{
	int S = 0;
	for (int i = 0; i < n; i += 2) {
		S += a[i];
	}
	return S;

}
int dil(int* a, const int n) {
	int m = 0;
	for (int i = 0; i < n; i += 2) {
		m++;
	}
	return m;
}


int main()
{
	srand((unsigned)time(NULL));

	const int n = 10;
	int a[n];
	int S, m;
	int Low = 15;
	int High = 85;

	Create(a, n, Low, High);
	S = Kil(a, n);
	m = dil(a, n);
	Print(a, n);
	cout << "arithmetic mean = " << 1. * S / m << endl;
	//cout << " Середнє значення" << m << endl;
}