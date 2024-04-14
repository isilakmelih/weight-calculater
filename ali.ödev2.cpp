#include<iostream>
#include<math.h>
using namespace std;
int main(){
	
	double g;
	int i,f,a,go,e;
	
	
	for(i=0;i<10;i++){
		cout<<"enter the great";cin>>g;
		if(g<50){
			cout<<"fail"<<endl;
			f++;
		}
		else if(50<=g && g<65){
			cout<<"average"<<endl;
			a++;
		}
		else if(65<=g && g<85){
			cout<<"good"<<endl;
			go++;
		}
		else if(85<=g){
			cout<<"excellent"<<endl;
			e++;
		}
	}
	cout<<"number of fails="<<f<<endl;
	cout<<"number of average="<<a<<endl;
	cout<<"number of good="<<go<<endl;
	cout<<"number of excellent="<<e<<endl;
	return 0;}
