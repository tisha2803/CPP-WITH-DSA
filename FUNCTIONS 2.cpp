#include<iostream>
using namespace std;

//1-> even
//0-> odd
bool isEven(int a){
	if(a&1){
	return 0;
	}
	else{//even
	    return 1;
	
	}
	
}

int main(){
	int num;
	cin>>num;
	if(isEven(num)){
		cout<<"Number is Even"<<endl;
	}
	else{
		cout<<"Number is Odd"<<endl;
	}
	
}
