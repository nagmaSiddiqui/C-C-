#include<iostream>
using namespace std;
class point{
	int a,b;
	public:
		point(int x,int y){
			a=x;
			b=y;
		}
		void printdata(){
			cout<<"the point on cartesion plane is ("<<a<<","<<b<<")"<<endl;
		}
		
};
int main(){
	int a,b;
	cout<<"enter the coordinate:";
	cin>>a>>b;
	point p1(4,5);
	p1.printdata();
}

