#include <iostream>
using namespace std;

int main(){
	
	int n;
	cout <<"Enter the number of elements: ";
	cin >> n;
	
	int* A = new int[n];
	
	cout << "Enter " << n <<" numbers:\n";
	for(int i = 0;i < n;i++){
		cout <<"Enter " << i +1 <<": ";
		cin >> A[i];
	}
	
	for(int j = 0;j <= n-1;j++){
		int smallest = j;
		for(int k = j + 1;k < n;k++){
			if(A[k] < A[smallest]){
				smallest = k;
			}
		}
		
		int temp = A[j];
		A[j] = A[smallest];
		A[smallest] = temp;
	}
	
	cout<<"\nSorted array using selection sort:\n";
	for(int i = 0;i < n;i++){
		cout <<A[i]<<" ";
	}
	
	cout<<endl;
	
	delete[] A;
	
	return 0;
}