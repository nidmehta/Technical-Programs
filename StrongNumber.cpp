//Strong Number 
#include<iostream> 
using namespace std; 
int main() 
{ 
	int n, rem; 
	cout << "Enter a number: "; 
	cin >> n; 
	int sum = 0; 
	int temp = n; 
	while (temp > 0) 
	{ 
		rem = temp % 10; 
		int fact = 1; 
		for(int i = 1; i <= rem; i++) 
			fact *= i; 
		sum += fact; 
		temp /= 10; 
	} 
	if (sum == n) 
		cout << n << " is a strong number."; 
	else 
		cout << n << " is not a strong number."; 
	return 0; 
}