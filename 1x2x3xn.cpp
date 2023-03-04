#include <iostream>

using namespace std;

int T(int n) 
{
	if (n == 0) 
	{
		return 1;
	}
	else 
	{
		return T(n - 1) * n;
	}
}
void main()
{
	int n;
	cout << "nhap so n";
	cin >> n;
	cout << T(n);

}