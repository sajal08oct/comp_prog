#include<bits/stdc++.h>

using namespace std;

char mat[101][101];
int temp[101][101];
int n,m;

bool validPoint(int x,int y){
	if(x<0 || x>=n || y<0 || y>=m) return false;
	return true;
}
int checkCentre(int x,int y){
	int max_size = -1;
	if(mat[x][y] != '*') return max_size;

	for(int i=1;i<50;i++){
		if ( !(validPoint(x+i,y) && validPoint(x-i,y) && validPoint(x,y+i) && validPoint(x,y-i))){
			return max_size;
		} else if( mat[x+i][y] != '*' || mat[x-i][y] != '*' ||
				mat[x][y-i]!='*' || mat[x][y+i] != '*') {
			return max_size;
		} else { 
//			cout<<"x " <<x<<" y "<<y<<endl; 
//			cout<< mat[x+i][y]<<" " <<mat[x-i][y] <<" "<<  mat[x][y-i] <<" " << mat[x][y+i];
			max_size = i;
		}
	}
	return max_size;

}


void markPoints(int x,int y,int size){
	temp[x][y] = 1;
	for(int i=1;i<=size;i++){
		temp[x+i][y] = 1;
		temp[x-i][y] = 1;
		temp[x][y+i] = 1;
		temp[x][y-i] = 1;
	}

}
int main(){
	cin>>n>>m;
	memset(temp,0,sizeof(temp));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>mat[i][j];
		}
	
	}
	vector<int> x,y,s;
	for(int i=1;i<n-1;i++){
		for(int j=1;j<m-1;j++){
			int size = checkCentre(i,j);
			if(size != -1){
				markPoints(i,j,size);
				x.push_back(i);
				y.push_back(j);
				s.push_back(size);
			}
		}
	}
/*
	for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                        cout<<temp[i][j]<<" ";
                }cout<<endl;

        }

*/		
	for(int i =0;i<n;i++){
		for(int j=0;j<m;j++){
			if ( mat[i][j] == '*' && temp[i][j] != 1){
				cout<<"-1";
				return 0;
			}
		}
	}
	cout<<x.size()<<endl;

	for(int i=0;i<x.size();i++){
		cout<<x[i]+1<<" "<<y[i]+1<<" "<<s[i]<<endl;
	}


}
