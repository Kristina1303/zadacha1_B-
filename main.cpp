#include <iostream>
using namespace std;



int main()
{
	long long n;
	cout << "Please enter a number: ";
	cin >> n;
	long long tmp = n;
	int sbor=0;
	while (n != 0)
	{	
		sbor = sbor + n % 10;
		n=n/10;
     }
	
	cout << "The sum of all digits is: "<<sbor << endl;
	return 0;
}

