#include <iostream>

using namespace std;

int factorial(int n);
int main()
{
	int n;
int product = 1;
while(n > 0)
{
product = n * product;
n--;
}
return product;
}
