//LCM and HCF of two numbers
#include<iostream>
using namespace std;
int main()
{
	int n1, n2, i;
	cout << "Enter two numbers: ";
	cin >> n1 >> n2;
	int hcf = 1, lcm;
	if (n1 > n2)
	{
		for (i = 1; i <= n2; i++)
		{
			if ((n1 % i == 0) && (n2 % i == 0))
				hcf = i;
		}
	}
	else
	{
		for (i = 1; i <= n1; i++)
		{
			if ((n1 % i == 0) && (n2 % i == 0))
				hcf = i;
		}
	}
	lcm = ((n1 * n2) / hcf);
	cout << "\nHCF of " << n1 << " and " << n2 << " is " << hcf;
	cout << "\nLCM of " << n1 << " and " << n2 << " is " << lcm;
	return 0;
}