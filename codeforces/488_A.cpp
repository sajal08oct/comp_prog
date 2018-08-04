#include<bits/stdc++.h>


using namespace std;

int a[11], b[11];

int main(){
	int n,m;
	cin>>n>>m;
	
	for(int i=0;i<n;i++) cin>>a[i];

	for(int i=0;i<m;i++) cin>>b[i];
	int ans[11];
	int k =0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i] == b[j]){
				ans[k] = a[i];
				k++;
				break;
			}
		}
	}

	for(int i=0;i<k;i++) cout<<ans[i]<<" ";
	return 0;

}
