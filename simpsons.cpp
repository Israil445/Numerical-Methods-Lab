#include <bits/stdc++.h>
using namespace std;

class SimpsonsRule{

public:
	double lower,upper,n,h;
	double ans = 0;

	SimpsonsRule(double a,double b,double c){
		lower=a;
		upper=b;
		n=c;
	}

	double func(double x){
		return 1/(1+x);
	}

	void solve(){

		h = (upper-lower)/n;
		ans = func(lower)+func(upper);

		for(int i=1;i<n;i++){
			if(i%2 == 0){
				ans+=2*func(lower + i*h);
			}
			else{
				ans+=4*func(lower + i*h);
			}
		}
		ans=ans*(h/3);
		cout<<ans<<endl;
	}

};

int main(){

	SimpsonsRule x = SimpsonsRule(0,1,10);
	x.solve();

	return 0;
}