#include<bits/stdc++.h>

using namespace std;


int main(){
	int k,n;
	cin>>k;
	
	vector<pair<int, pair<int,int> > > sum;
	vector<set<int> > st;
	set<int> su;
	sum.reserve(k);
	st.reserve(k);

	for(int i=0;i<k;i++){
		cin>>n;
		int a[200101];
		int su =0 ;
		for(int j=0;j<n;j++){
			cin>>a[j];
			su+=a[j];
		}
		
		for(int j=0;j<n;j++){
			sum.push_back( { su-a[j],{i,j}} ) ;
		}
	}
/*
	for(int i=0;i<sum.size();i++){

		cout<<sum[i].first<<" " << sum[i].second.first<<" " << sum[i].second.second<<endl;

	}
*/	sort(sum.begin(), sum.end());
	int len = sum.size();
	for(int i=0;i< len-1; i++){
//		cout<<sum[i].second.first<< sum[i+1].second.first<<endl;
		if(sum[i].first == sum[i+1].first && sum[i].second.first != sum[i+1].second.first){
			cout<<"YES"<<endl;
			cout<<sum[i].second.first+1<<" "<<sum[i].second.second+1;
		
			cout<<endl;
			cout<<sum[i+1].second.first+1<<" "<<sum[i+1].second.second+1;
			return 0;
		}
	}

	cout<<"NO";

	return 0;
}

