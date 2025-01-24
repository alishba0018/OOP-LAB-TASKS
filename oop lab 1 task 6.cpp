#include <iostream>
#include <string>
using namespace std;

int main(){
	int start;
	int end;
	int count=0;
	cout<<"Enter a starting range number: "<<endl;
	cin>>start;
	cout<<"Enter an ending range number: "<<endl;
	cin>>end;
	for(int i=0;i<end;i++){
		cout<<i++;
		count++;
		if(count%5==0){
		  cout<<i;	
		}
	}
}
