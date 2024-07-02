#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
   char c = 'A';
   int ans, count  = 0;
   for (char d : s){
   	if(d == c){
   		count++;
   		ans = max(ans, count);
	   }
	   else{
	   	count = 1;
	   	c = d;
	   }
   }
    ans = max(ans, count);
	cout<<ans;
   
    return 0;
}
