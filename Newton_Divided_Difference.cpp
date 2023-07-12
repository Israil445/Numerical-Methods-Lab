#include<bits/stdc++.h>
using  namespace std;

class NewtonDividedDifferenceFormula{

public:
	int n;
	double value;
	double x[100],y[100][100];

	NewtonDividedDifferenceFormula() {
		cin>>n;

		for(int i=0;i<n;i++){
			cin>>x[i]>>y[i][0];
		}
		cin>>value;
	}

	void dividedDiffTable(double x[],double y[][100],int n){
		for(int i=1 ; i<n ; i++){
			for(int j = 0; j<n-i; j++){
				y[j][i] = (y[j+1][i-1]-y[j][i-1])/(x[i+j]-x[j]);

			}
		}
	}

	void printDiffTable(double y[][100],int n){
		for(int i=0;i<n;i++){
			cout<<x[i]<<"\t";
			for(int j=0;j<n-i;j++){
				cout<<y[i][j]<<"\t";
			}
			cout<<endl;
		}
	}

	double proterm(int i,double value,double x[]){
		double pro = 1;
		for(int j = 0;j<i;j++){
			pro = pro*(value-x[j]);
		}
		return pro;
	}

	double applyFormula(double value,double x[],double y[][100],int n){
		double sum = y[0][0];
		for(int i=1;i<n;i++){
			sum+=(y[0][i]*proterm(i,value,x));
		}

		return sum;
	}

	void solve(){
        // calculating divided difference table
		dividedDiffTable(x,y,n);

		printDiffTable(y,n);

		double ans = applyFormula(value,x,y,n);

		cout<<"value at "<<value<<" is "<<ans<<endl;



	}





};

int main(){

	NewtonDividedDifferenceFormula Nddf = NewtonDividedDifferenceFormula();
	Nddf.solve();


	return 0;
}