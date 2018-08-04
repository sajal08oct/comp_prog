#include<bits/stdc++.h>

using namespace std;

struct compare{
	bool operator()( const string& first, const string& second){
		return first.size()< second.size();
	}
};
int main(){
	int n;

	cin>>n;
	vector<string> s;
	for(int i=0;i<n;i++){
		string x;
		cin>>x;
		s.push_back(x);
	}
	compare c;
	sort(s.begin(),s.end(), c);

	for(int i=0;i<n-1;i++){
		if(s[i+1].find(s[i]) == string::npos){
			cout<<"NO";
			return 0;
		}
	}

	cout<<"YES"<<endl;
	for(int i=0;i<n;i++){
		cout<<s[i]<<endl;
	}
	return 0;
}
