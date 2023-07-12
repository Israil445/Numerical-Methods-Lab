
#include<bits/stdc++.h>
using namespace std;
#define EPSILON 0.00001
 
// An example function whose solution is determined using
// Bisection Method. The function is x^3 - x^2  + 2
class bisectionMethod{

public:
 double func(double x)
{
    return x*x*x - x*x + 2;
}
 
// Prints root of func(x) with error of EPSILON
void bisection(double a, double b)
{
    if (func(a) * func(b) >= 0)
    {
        cout << "You have not assumed right a and b\n";
        return;
    }
 
    double c;
    while (abs(b-a) >= EPSILON)
    {
        // Find middle point
        c = (a+b)/2;
 
        // Check if middle point is root
        if (func(c) == 0.0)
            break;
 
        // Decide the side to repeat the steps
        else if (func(c)*func(a) < 0)
            b = c;
        else
            a = c;
    }
    cout << "The value of root is : " << c <<endl;
}


};
 
// Driver program to test above function
int main()
{
    // Initial values assumed
    bisectionMethod biObj;

    double a =-200, b = 300;
    biObj.bisection(a, b);
    return 0;
}