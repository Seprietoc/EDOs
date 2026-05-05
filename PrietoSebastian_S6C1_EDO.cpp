#include <fstream>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <array>
using namespace std;

const int N=500; //numero de puntos

void euler(array<double, N>& arr);
void runge(array<double, N>& arr);

double tf = 2.0;
double dt = 2.0/(N-1);

int main()
{
	array<double, N> real;
	array<double, N> eulerv;
	array<double, N> rungev;
	array<double, N> t;
	t[0] = 0;
	eulerv[0] = 1;
	rungev[0] = 1;
	euler(eulerv);
	runge(rungev);

	for (int i = 0; i < N - 1; i++)
	{
		t[i+1] = t[i]+dt;
	}
	for (int i = 0; i < N - 1; i++)
	{
		real[i] = exp(-t[i]);
		cout << t[i] << " , " << eulerv[i] << " , " << rungev[i] << " , " << real[i] << " , "
		 << std::abs(real[i]-eulerv[i]) << " , " << std::abs(real[i]-rungev[i]) << endl;
	}

 	
	return 0;
}	

void runge(array<double, N>& arr)
{	
	double k1, k2, k3, k4;
	for (int i = 0; i < N - 1; i++)
	{
		k1 = -dt*arr[i];
		k2 = dt*(k1/2-arr[i]);
		k3 = dt*(k2/2-arr[i]);
		k4 = dt*(k3-arr[i]);
		arr[i+1] = arr[i]+(k1+2*k2+2*k3+k4)/6;
	}
	return;
}

void euler(array<double, N>& arr)
{
	for (int i = 0; i < N - 1; i++)
	{
		arr[i+1] = arr[i] - (dt*arr[i]);
	}
	return;
}

