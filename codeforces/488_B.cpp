#include<bits/stdc++.h>


using namespace std;


int a[100010][11];

vector< pair<int , pair <int,long long>>> score;

int power[100010], coin[100010];

struct compare{
        bool operator()( const pair<int,pair<int,int>>& f , const pair<int,pair<int,int>>& s){
                return f.second.first < s.second.first;
        }
};

int main(){
	int n,k;
	
	cin>>n>>k;

	for(int i=0;i<n;i++) cin>>power[i];
	for(int i=0;i<n;i++) cin>>coin[i];

	if(k==0){
		for(int i=0;i<n;i++)
		cout<<coin[i]<<" ";
		return 0;
	}
	for(int i=0;i<n;i++){
		score.push_back({i,{power[i],coin[i]}});
	}
	compare c;
	sort(score.begin(),score.end() ,c);
	
	vector<int> sc;
	long long ans[100010];
	memset(ans,0,sizeof(ans));
	long long count =0;
	for(int i=0;i<k;i++){
		ans[score[i].first] = count;
		count+= score[i].second.second;
		sc.push_back(score[i].second.second);
	}
	for(int i=k;i<n;i++){
		long long min = sc[0];
		int min_i = 0;
		long long count = sc[0];
		for(int j=1;j<k;j++){
			if(sc[j] < min){
				min = sc[j];
				min_i = j;
			}
			count+=sc[j];
		}
		ans[score[i].first] = count;

		if(min < score[i].second.second){
			sc.erase(sc.begin()+min_i);
			sc.push_back(score[i].second.second);
		}
		
	}

	for(int i=0;i<n;i++){

		cout<<ans[i]+coin[i]<<" ";

	}

	return 0;

}
