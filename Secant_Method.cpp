#include "bits/stdc++.h"
using namespace std;
#define EPSILON 0.00001

class secantMethod{

public:

	double func(double x){
		double ans;
		ans=(x*x)-(2*x)-5;
		return ans;
	}

	double solve(double x0,double x1){

		double x2;
		double h = ((x1-x0) / (func(x1)-func(x0)))*func(x1);

		while(abs(h)>=EPSILON){

			h = ((x1-x0) / (func(x1)-func(x0)))*func(x1);
			x2=x1-h;
			x0 = x1;
			x1 = x2;


		}

		return x2;
	}


};


int main() {

	secantMethod OBJ;

	double x0=2, x1=4;

	double ans = OBJ.solve(x0,x1);

	cout<<fixed<<setprecision(5);

	cout << "The value of the root is : " << ans <<endl;




	return 0;
}