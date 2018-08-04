#include<bits/stdc++.h>


using namespace std;


int main(){
	int n;
	set<long long> st;

	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		st.insert(x);
	}
	for( int i =0;i<30;i++){
		long long pw = 1<<i;
		for(set<long long> :: iterator it = st.begin();
				it != st.end(); it++){
			long long x = *it;
		//	cout<<x;
			if( st.find( x - pw ) != st.end() && 
					st.find( x +pw) !=st.end()){
				cout<<"3"<<endl;
				cout<<*it<<" "<<(*it) - pw<<" "<<(*it) + pw;
				return 0;
			}
		}

	}

	for(int i =0;i<31;i++){
                long long pw = 1<<i;
//		cout<<"pw = " <<pw<<endl;
                for(set<long long> :: iterator it = st.begin();
                                it != st.end(); it++){
			long long x = *it;
//			cout<< " x + pw= "<<  x + pw ;
//			cout<<" x - pw = "<< x - pw;
                        if( st.find( x + pw ) != st.end()){
                                cout<<"2"<<endl;
                                cout<<*it<<" "<<(*it) + pw;
                                return 0;
			} else if ( st.find(x-pw) != st.end()){
				cout<<"2"<<endl;
                                cout<<*it<<" "<<(*it) - pw;
                                return 0;

			}
                }

        }
	
	cout<<"1"<<endl;
	cout<<(*(st.begin()));
	return 0;
	
}
