#include<bits/stdc++.h>
using namespace std;
#define EPSILON 0.00001

class newtonRaphsan{

public:

	double func(double x){
		return x*x*x - x*x + 2;
	}

	double derivFunc(double x){
		return 3*x*x-2*x;
	}

	double solve(double x){

		 double h=func(x)/derivFunc(x);
		 
		 while(abs(h)>=EPSILON){
		 	h=func(x)/derivFunc(x);
		 	x=x-h;
		 }

		 return x;
	}

};

int main(){

	newtonRaphsan OBJ;
	double x0=-20;
	double ans=OBJ.solve(x0);

	cout<<fixed<<setprecision(5);
	

	 cout << "The value of the root is : " << ans <<endl;

}