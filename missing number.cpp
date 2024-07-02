#include<iostream>
using namespace std;

int main(){
	
	long long int n;
	cin>>n;
	int totalSum =0; 
	int arraySum = 0;
	int array[n];
	for (int i = 0; i< n-1 ; i++){
		cin>>array[i];
		arraySum += array[i];	
	}
	totalSum = n * (n+1) / 2;
	int missed = totalSum - arraySum;
	cout<<missed;
	
	return 0;
}
