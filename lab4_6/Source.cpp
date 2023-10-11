#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double P, S;
	int k, i;

	P = 0;
	k = 1;

	//Option 1
	while (k <= 20)
	{
		S = 0;
		i = 1;
		while (i <= 40 - k)
		{
			S += i * i;
			i++;
		}
		P += (1 + sqrt(S)) / (k * k);
		k++;
	}
	cout << P << endl;

	// Option 2
	P = 0;
	k = 1;
	do {
		S = 0;
		i = 1;
		do 
		{
			S += i * i;
			i++;
		} while (i <= 40 - k);
		P += (1 + sqrt(S)) / (k * k);
		k++;
	} while (k <= 20);
	cout << P << endl;

	//Option 3
	P = 0;
	for (k = 1; k <= 20; k++)
	{
		S = 0;
		for (i = 1; i <= 40 - k; i++)
		{
			S += i * i;
		}
		P += (1 + sqrt(S)) / (k * k);
	}
	cout << P << endl;

	//Option 4
	P = 0;
	for (k = 20; k >= 1; k--)
	{
		S = 0;
		for (i = 40 - k; i >= 1; i--)
		{
			S += i * i;
		}
		P += (1 + sqrt(S)) / (k * k);
	}
	cout << P << endl;

	return 0;
}