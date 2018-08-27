// Quadratic Formula
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int a=2, b=4, c=6;
	int x1, x2;
	int ans;
	int d;
	
	
	ans = (b*b) - (4*a*c);
	d = sqrt(ans);
	
	
	x1 = (-b+d) / (2*a);
	
	
	x2 = (-b-d) / (2*a);
	
	cout << "The x1 is :" << x1;
	cout << "The x2 is :" << x2;
	
	
	
	return 0;

}
