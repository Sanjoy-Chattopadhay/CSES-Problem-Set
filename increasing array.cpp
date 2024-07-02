#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
	vector<int> v;
    for(int i = 0 ; i<n ; i++){
    	int ele;
    	cin>>ele;
    	v.push_back(ele);
	}
	int mx = 0;
	long long int ans = 0;
	for (int i = 1 ; i< n; i++){
		if(v[i]<v[i-1]){
			mx = max(v[i], mx);
			ans += mx - x;
		}
	}
	cout<<max;
    return 0;
}
