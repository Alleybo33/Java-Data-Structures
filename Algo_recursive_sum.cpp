#include<iostream>
using namespace std;

int sum(int n){
	
	if(n == 0){
		return 0;
	}
	else{
		
		return n + sum(n-1);
	}
}

int main(){
	
	int n;
	
	cout<<"Enter a non-negative integer to find the sum from 1 to n: ";
	cin>> n;
	
	if(n < 0){
		cout<<"The input must be a non-negative integer."<< endl;
		
	}
	else{
		int totalSum = sum(n);
		cout<<"The sum of all numbers from 1 to "<< n <<" is: " << totalSum << endl;
	}
	
	return 0;
}