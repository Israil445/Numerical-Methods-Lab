#include<bits/stdc++.h>
using namespace std;

class LeastSquareCurveFitting{
public:
	int n;
	double x[100],y[100];
	double a,b;

	LeastSquareCurveFitting(){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>x[i]>>y[i];
		}
	}

	void solve(){
		double xSum = 0, ySum = 0,xySum = 0,xSquare = 0;
		for(int i=0;i<n;i++){
			xSum+=x[i];
			ySum+=y[i];
			xSquare+=x[i]*x[i];
			xySum+=x[i]*y[i];
		}

		a = (xySum*xSum)-(ySum*xSquare);
		a /= (xSum*xSum)-(n*xSquare);
		b = (ySum-n*a)/xSum;
		cout<<fixed<<setprecision(5);
		cout << "Y = " << b << " * X + " << a << "\n";
	}

};

int main(){

	LeastSquareCurveFitting st = LeastSquareCurveFitting();
	st.solve();



	return 0;
}