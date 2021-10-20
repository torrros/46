#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double P, S;
	int i, k;

	//1
	S = 0;
	i = 1;
	while (i <= 20)
	{
		P = 1;
		k = 1;
		while (k <= i)
		{
			P *= fabs(cos(i + k));
			k++;
		}
		S += (sin(1. * k) * sin(1. * k));
		i++;
	}
	cout << "S = " << S << endl;
	//2
	S = 0;
	i = 1;
	do
	{
		P = 1;
		k = 1;
		do
		{
			P *= fabs(cos(i + k));
			k++;
		} while (k <= i);
		S += (sin(1. * k) * sin(1. * k));
		i++;
	} while (i <= 20);
	cout << "S = " << S << endl;
	//3
	S = 0;
	for (i = 1; i <= 20; i++)
	{
		P = 1;
		for (k = 1; k <= i; k++)
		{
			P *= fabs(cos(i + k));
		}
		S += (sin(1. * k) * sin(1. * k));
	}
	cout << "S = " << S << endl;
	//4
	for (i = 20;i >=1; i--)
	{
		P = 1;
		for (k = i; k >= 1; k--)
		{
			P *= fabs(cos(i + k));
		}
		S += (sin(1. * k) * sin(1. * k));
	}
	cout << "S = " << S << endl;
	return(0);
}




