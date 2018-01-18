#include <iostream>
using namespace std;
int main()
{
	int a, b;
	double c;
	
	cin>>a;
	cin>>b;
	c = static_cast<double>(a)/b;
	cout<<c;
	
	return 0;
}
