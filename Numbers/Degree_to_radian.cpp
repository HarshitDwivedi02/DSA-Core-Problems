// C++ program to convert degree to radian

#include <iostream>
#include <math.h>
using namespace std;

// Function for conversion
double Convert(double degree)
{
	double pi = 3.14159265359;
	return (degree * (pi / 180));
}


// Driver code
int main()
{
	double degree;
    cin >> degree;
	double radian = Convert(degree);
	cout << radian <<endl;;
    double ans = tan(radian);
    cout << ans;
	return 0;
}
