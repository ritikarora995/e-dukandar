#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,e,f,g,h;
		int m[50];

	cout<<"Enter the memory size"<<endl;
	cin>>a;
	cout<<"Enter the page size"<<endl;
	cin>>b;
	cout<<"The no. of pages available in memory are"<<endl;
	cin>>h;
	cout<<"Enter number of processes"<<endl;
	cin>>c;
		int res=0;
	for(int i=1;i<=c;i++){
		cout<<"Enter no. of pages required for p"<<i<<endl;
		cin>>g;
		res=res+g;
	if(res>h){
		cout<<"Memory is full"<<endl;
		break;
	}
	cout<<"	Enter pagetable for p"<<i<<endl;
	

	for(int j=0;j<g;j++){
		cin>>m[i];
	}


	}
	cout<<"Enter Logical Address to find Physical Address Enter process no. and pagenumber and offset"<<end;
	cin>>
}

