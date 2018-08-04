#include<bits/stdc++.h>

using namespace std;


int maint(){
	string n;
	cin>>n;
	int len= n.length();	
/*	if( n[len-1] == '0'){
		if(n[len-2] =='0'|| n[len-2] == '5'){
			cout<<"0";
			return 0;
		}
	} else if(
*/
	int count = INT_MAX;
	bool first = false , second =false;
	int c = 0;
	for(int i=len-1; i>=0;i--){
		if(n[i] == '0'){
			count+= len-i;
			c++;
		}
		if(c==2){
			break;
		}
	}
	if(c!= 2){
		count = INT_MAX;
	}




	return 0;
}
