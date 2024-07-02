#include <bits/stdc++.h>
using namespace std;

int main() {
	
	vector<int> v1, v2, v3;
	int player, ele, n, diff, max = 0;
	cin>>n;
	
	for (int i = 0 ; i < n; i++){
	    cin>>ele;
	    v1.push_back(ele);
	    cin>>ele;
	    v2.push_back(ele);
	    
	}
    for( int i = 0 ; i<n ; i++){
	    if(v1[i] > v2[i]){
	        diff = v1[i] - v2[i];
	        if(diff > max){
	            max = diff;
	            player = 1;
	        }
	    }
	   else if(v2[i] > v1[i]){
	        diff = v2[i] - v1[i];
	        if(diff > max){
	            max = diff;
	            player = 2;
	        }
	       
	    }
	        
	}
	
    cout<<player<<max;
}
	
