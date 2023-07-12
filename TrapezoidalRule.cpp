#include <bits/stdc++.h>
using namespace std;

class TrapezoidalRule{

public:
	double lower,upper,n,h;
	double ans = 0;

	TrapezoidalRule(double a,double b,double c){
		lower=a;
		upper=b;
		n=c;
	}

	double func(double x){
		return 1/(1+x*x);
	}

	void solve(){

		h = (upper-lower)/n;
		ans = func(lower)+func(upper);

		for(int i=1;i<n;i++){
			ans+=2*func(lower+i*h);
		}
		ans=ans*(h/2);
		cout<<ans<<endl;
	}

};

int main(){

	TrapezoidalRule x = TrapezoidalRule(0,1,10);
	x.solve();

	return 0;
}