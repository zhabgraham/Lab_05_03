#include <iostream>
#include <cmath>

using namespace std;

double j(const double x);

int main()
{
	double kp, kk, z;
	int n;

	cout << "kp = "; cin >> kp;
	cout << "kk = "; cin >> kk;
	cout << "n = "; cin >> n;

	double dk = (kk - kp) / n;
    double k = kp;

    cout << "--------------------------------------------------------------" << endl;
	cout << "| \t k" << "\t|  " << "\t (1 + k + j(k)) + pow(j(1 + k * k), 2)" << "\t|" << endl;

	while (k <= kk)
	{
		z = j(1 + k + j(k)) + pow(j(1 + k * k), 2);
		
		cout << "--------------------------------------------------------------" << endl;
		cout << "| " << "\t " << k << "\t|  " << "\t\t" << z << "\t\t" << "\t|" << endl;

		k += dk;
	}
	cout << "--------------------------------------------------------------" << endl;
	return 0;
}

double j(const double x)
{
	if (abs(x) >= 1)
		return (cos(1. * x) + exp(-1 * abs(1 * x)));
	else
	{
		double S = 0;
		int i = 0;
		double a = 1;
		S = a;
		do
		{
			i++;
			double R = (x * x) / (4. * i + 2 * i);
			a *= R;
			S += a;
		} while (i < 5);
		return S;
	}
}
