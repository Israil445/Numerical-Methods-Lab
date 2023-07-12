#include<bits/stdc++.h>
using namespace std;
#define EPSILON 0.00001

class falsePosition{

public:
	double func(double x) {
		return x*x*x - x*x + 2;
	}


	double solve(double a, double b) {
		if(func(a)*func(b) >= 0){
			 cout << "You have not assumed right a and b\n";
             return 0;
		}

		double c;

		while(abs(b-a)>=EPSILON){

			c=(a*func(b)-b*func(a))/(func(b)-func(a));

			// Check if the point c is a root
			if(func(c)==0.0) break;

			else if(func(c)*func(a)<0) b=c;

			else a=c;
		}

		return c;
	}

	

};

int main() {

	falsePosition falseObj;
	double a=-200, b=300;
	double ans=falseObj.solve(a,b);
    cout<<"The Value of  root is: "<<ans<<endl;
   
   
	return 0;
}