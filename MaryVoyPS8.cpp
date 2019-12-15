#include <iostream>
#include <vector>
using namespace std;
int main(){
	int a,b,x,y,n,c,d;
	for (int i=0;i<n;i++){
		cin >>a>>b>>x>>y;
		if ((a%3==0)&&(b%3==0)&&(x%3==0)&&(y%3==0)){
			int c=a*b*x*y;
			cout<<"\n";
			if (c>0){
				int d=(x+y)%13;
				if ((x+y)%13==0){
				}
				else{
					cout<<d;
				}
			}
		}
	}
	return 0;
}
