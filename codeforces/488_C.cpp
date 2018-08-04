#include<bits/stdc++.h>


using namespace std;

struct Point {

	double x;
	double y;
};
 
bool isPointInside(Point s1[] , Point p){
	int min_x = INT_MAX , max_x = INT_MIN, min_y = INT_MAX, max_y = INT_MIN;
	for(int i=0;i<4;i++){
		if(min_x > s1[i].x) min_x = s1[i].x;
		if(min_y > s1[i].y) min_y = s1[i].y;
		if(max_x < s1[i].x) max_x = s1[i].x;
                if(max_y < s1[i].y) max_y = s1[i].y;
	}

	return min_x <= p.x && max_x >= p.x && min_y <= p.y && max_y >= p.y;

}
int main(){
	Point s1[4],s2[4];
	for(int i=0;i<4;i++){
		cin>>s1[i].x>>s1[i].y;
	}
	for(int i=0;i<4;i++){
                cin>>s2[i].x>>s2[i].y;
        }

	for(int i=0;i<4;i++){
		if(isPointInside( s1 , s2[i])){
			cout<<"Yes";
			return 0;
		}
	}
	
	for(int i=1;i<4;i++){
		s1[i].x = ((s1[i].x - s1[0].x)*0.707106781 - (s1[i].y-s1[0].y)*0.707106781) + s1[i].x;
		s1[i].y = ((s1[i].x - s1[0].x)*0.707106781 + (s1[i].y-s1[0].y)*0.707106781) + s1[i].y;
	}
	for(int i=0;i<4;i++){
                s2[i].x = ((s2[i].x - s1[0].x)*0.707106781 - (s2[i].y-s1[0].y)*0.707106781) + s1[i].x;
                s2[i].y = ((s2[i].x - s1[0].x)*0.707106781 + (s2[i].y-s1[0].y)*0.707106781) + s1[i].y;
        }
	for(int i=0;i<4;i++){
                if(isPointInside( s2 , s1[i])){
                        cout<<"Yes";
                        return 0;
		}
        }

	cout<<"No";


	
	return 0;

}
