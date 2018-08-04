#include<bits/stdc++.h>


using namespace std;


int main(){
	string s;
	cin>>s;
	int len = s.length();
	if(len == 0 || len == 1 || len == 2){
		cout<<"NO";
		return 0;
	}
	for(int i=1;i<len-1;i++){
		//cout<<s[i-1]<<" " << s[i]<<" "<<s[i+1]<<" "<<(s[i]-'A' )+ ( s[i-1]-'A' )+ (s[i+1]-'A') <<endl;
		if((s[i]-'A' )+ ( s[i-1]-'A' )+ (s[i+1]-'A') == 3 && s[i] !=s[i+1] && s[i-1] != s[i] && s[i-1] != s[i+1]){
			cout<<"Yes";
			return 0;
		}
	}
	
	cout<<"No";
	return 0;

}
