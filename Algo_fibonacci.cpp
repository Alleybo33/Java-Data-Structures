#include<iostream>
using namespace std;

int f(int n){
	if(n == 0){
		return 0;
	}
	else if(n == 1){
		return 1;
	}
	return f(n-1) + f(n-2);
}
int main(){
	
	int n;
	
	cout<<"Enter the fibonacci number place: ";
	cin>>n;
	
	if(n < 0){
		cout<<"Please enter a non-negative integer."<<endl;
	}
	int value = f(n);
	
	cout<<"The value of the Fibonacci number at place " <<n<<" is: "<<value<<endl;
	
	return 0;
}