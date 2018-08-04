#include<bits/stdc++.h>


using namespace std;


int main(){
	int n;

	cin>>n;
	vector< vector<string>> str;
	vector<string> s;

	for(int i=0;i<n;i++){
		string x;
		cin>>x;
		s.push_back(x);
	}
	for(int i=0;i<n;i++){
		str[s[i].size()].insert(s[i]);
		if(str[s[i].size()] > 1){
			cout<<"NO";
			return 0;
		}
	}
	int i=0;
	while(str[i].size() == 0){
		i++;
	}
	string pre = *(str[i].begin());

	for(;i<100;i++){
		

	}
