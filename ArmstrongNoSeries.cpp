//Armstrong Number Series
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter a number: ";
	cin >> num;
	for (int n = 0; n <= num; n++)
	{
		int temp = n;
		int temp1 = n;
		int digits = 0;
		while (temp > 0)
		{
			digits++;
			temp /= 10;
		}
		int sum = 0, rem;
		while (temp1 > 0)
		{
			rem = temp1 % 10;
			sum += pow(rem, digits);
			temp1 /= 10;
		}
		if (sum == n)
			cout << n << " ";
	}
	return 0;
}