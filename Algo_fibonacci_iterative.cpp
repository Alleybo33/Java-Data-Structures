#include<iostream>
using namespace std;

int f_iterative(int n){
	if(n < 0){
		cout<<"Please enter a non-negative integer."<<endl;
		return -1;
	}
	
	if(n <= 1){
		return n;
	}
	
	int f0 = 0;
	int f1 = 1;
	int current_f = 0;
	
	for(int i = 1;i < n;i++){
		current_f = f0 + f1;
		f0 = f1;
		f1 = current_f;
	}
	
	return current_f;
}
int main(){
	
	int n;
	
	cout<<"Enter the fibonacci number place: ";
	cin>>n;
	

	int value = f_iterative(n);
	
	if(value != -1){
		cout<<"The value of the Fibonacci number at place " <<n<<" is: "<<value<<endl;	
	}
	
	return 0;
}