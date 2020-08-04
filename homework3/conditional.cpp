#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << " Enter A number : ";
	cin >> a;
	cout << endl;
	cout << " Enter B number : ";
	cin >> b;
	cout << " Largest : " << ((a >= b) ? a : b)<<endl;
	cout << " Smallest : " << ((a <= b) ? a: b)<<endl;
	return(0);
}