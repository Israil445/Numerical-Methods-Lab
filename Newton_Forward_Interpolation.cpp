#include<bits/stdc++.h>
using namespace std;

class newtonInterPolationFormula{

public:

	int n;
	double value;
	double x[100],y[100][100];
	double h,u;
	

	newtonInterPolationFormula(){

		cin>>n;

		for(int i=0;i<n;i++){
			cin>>x[i]>>y[i][0];
		}

		cin>>value;
	}

	void Difference_Table(){
		for(int i=1;i<n;i++){

			for(int j=0;j<n-i;j++){

				y[j][i]=y[j+1][i-1]-y[j][i-1];

			}

		}
	}

	void display(){
		for(int i=0;i<n;i++){
			cout<<setw(4)<<x[i]<<"\t";
			for(int j=0;j<n-i;j++){
				cout<<setw(4)<<y[i][j]<<" ";
			}
			cout<<endl;
		}
	}

	double u_cal(double u,int n){

		double tmp = u;

		for(int i=1;i<n;i++){
			tmp*=(u-i);
		}

		return tmp;
	}

	int fact(int n){
		int ans = 1;

		for(int i=2;i<=n;i++){
			ans*=i;
		}

		return ans;
	}

	void solve() {

		h=x[1]-x[0];
		u=(value-x[0])/h;

		Difference_Table();
		display();

		double sum = y[0][0];

		for(int i=1;i<n;i++){
     
			sum = sum + ((u_cal(u,i)*y[0][i])/fact(i));

		}
         
		cout<<"value at "<<value<<" is "<<sum<<endl;

	}


};

int  main()
{

	newtonInterPolationFormula Nip=newtonInterPolationFormula();

	Nip.solve();
	

	
	return 0;
}

