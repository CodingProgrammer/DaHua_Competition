#include<iostream>
using namespace std;
int is_magicnum(int num);
int main(void)
{
    int T, num;
	cin >> T;
	int *inut_number = new int[T];
	int *ans = new int[T];

	for (int i = 0; i < T; i++)
	{
		cin >> inut_number[i];
	}
	for (int i = 0; i < T; i++)
	{
		if (is_magicnum(inut_number[i]))
		{	
			ans[i] = 1;
		}
		else
		{
			ans[i] = 0;		
		}
	}
	for (int i = 0; i < T; i++)
	{
		cout << ans[i] << endl;
	}
	delete[] inut_number;
	delete[] ans;
}
int is_magicnum(int num)
{
	int count = 0, temp;
	temp = num;
	while(temp!=0) {temp/=10;count++;}
	temp = num;
	int *temp_array = new int[count];
	int j = 1;

	//put the number into a temp array 
	while((temp/10)!=0)
	{
		temp_array[count-j]=temp%10;
		temp/=10;
		j++;
	}
	temp_array[count-j]=temp%10;
	
	int left_sum = 0, right_sum = 0;
	int sum = 0;
	for (int i = 0; i < count; i ++)
	{
		sum += temp_array[i];	
	}
	right_sum = sum;
	for (int i = 0; i < count; i++)
	{
		left_sum += temp_array[i];
		right_sum -= temp_array[i];
		if (left_sum == right_sum)
		{
			delete[] temp_array;
			return 1;
		}
	}
	delete[] temp_array;
	return 0;
}
