#include<bits/stdc++.h>

using namespace std;


int main(){
	int n,p;
	cin>>n>>p;

	string s;

	cin>>s;
	

	int i = 0;

	while(i+p< n &&  s[i] != '.' && s[i+p] !='.' && s[i] ==s[i+p]){
		i++;
	}
	if(i+p == n){
		cout<<"No";
		return 0;
	}
	for(int i=0;i+p<n;i++){
		if(s[i] == '.' && s[i+p] == '.'){
			s[i] = '1';
			s[i+p]='0';
		} else {
			if(s[i] == '.' ){
				if(s[i+p] == '1'){
					s[i] = '0';
				} else {
					s[i]='1';
				}
			} else if(s[i+p]=='.'){
				if(s[i]=='1') s[i+p] ='0';
				else s[i+p]='1';
			}
		}
	}
	for(int i=0;i<n;i++){
		if(s[i]=='.')s[i]='0';
	}
	cout<<s;
	return 0;

}
