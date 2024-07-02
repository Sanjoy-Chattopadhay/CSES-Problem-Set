#include<iostream>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--){
	long long int y, x, z, z2, ans;
	cin>>y>>x;
	z = max(y, x);
	z2 = (z-1) * (z-1);
	if(z%2 !=0){
		if(y==z){
			ans = z2+x;
		}
		else{
			ans = z2 + 2*z-y;
		}
	}
	else{
		if(x == z){
			ans = z2+y;
		}
		else{
			ans = z2 + 2 * z - x;
		}
	}
	cout<<ans;
		
	}
	return 0;
}
