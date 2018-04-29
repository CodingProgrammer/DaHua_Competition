#include<iostream>
#include<cstdio>  
#include<algorithm> 
#include <iomanip>
using namespace std;

int main()
{
	int T;
	float M, N, X;
	cin >> T;
	float *result = new float[T * 2];
	int index_result = 0;
	for (int i = 0; i < T; i++)
	{
		float data_remainder = 0.0, T0 = 0;
		cin >> M >> N >> X;
		//stop
		while (data_remainder < (X * 0.8))
		{
			data_remainder += (M - N);
			T0 += 1;
		}
		//processing while no input
		while (data_remainder > (X * 0.6))
		{
			data_remainder -= N;
			T0 += 1;
		}
		float first_restart = T0;
		result[index_result] = first_restart;
		index_result += 1;
		//second stop
		while (data_remainder < (X * 0.8))
		{
			data_remainder += (M - N);
			T0 += 1;
		}
		while (data_remainder > (X * 0.6))
		{
			data_remainder -= N;
			T0 += 1;
		}
		float restart_interval = T0 - first_restart;
		result[index_result] = restart_interval;
		index_result += 1;
	}
	for (int i = 0; i < (T * 2); i++)
	{
		cout.setf(ios::fixed);
		cout <<  setprecision(2) << result[i] << endl;
	}
	delete []result; 
}
