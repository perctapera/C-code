# include <iostream>
# include <cmath>
using namespace std;

int main ()
{
	float a, b, c, x1, x2, p, q, r,s ,t, v, u;
		cout<<"enter a=";
		cin>>a;
		cout<<"enter b=";
		cin>>b;
		cout<<"enter c=";
		cin>>c;
	
	p = b*b;
	q = 4*a*c;
	r = 2*a;
	s = p-q;
	t = sqrt (s);
	u = -b+t;
	v = -b-t;
	x1 =u/r;
	x2 =v/r;
		cout<<x1;
		cout<<"\n";
		cout<<x2;
	return 0;
}
