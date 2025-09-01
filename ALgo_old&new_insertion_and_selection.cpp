#include <iostream>
using namespace std;

int main(){
	
	int n;
	int count = 0;
	cout<<"Enter the number of elemets: ";
	cin >> n;
	
	//Declare the array size
	int* A = new int[n];
	
	cout<<"Enter "<< n <<" numbers:\n";
	for(int i = 0; i < n;i++){
		cin >> A[i];
	}
	
	//Insertion sort algorithm into array
	/*for(int x = 1;x <= n-1;x++){
		
		int key = A[x];
		int y = x-1;
		
		while (y >= 0 && A[y] > key){
			count++;
			A[y+1] = A[y];
			y = y-1;
		}
		
		A[y+1] = key;
	}
	*/
	
	//New insertion sort algorithm into array
	
	for(int x = 1; x <= n-1;x++){
		int y = 0;
		while(y < x && A[x] > A[y]){ //Find position
			count++;
			y++;
		}
		
		int key = A[x];
		
		for(int k = 0; k <= (x-y-1);k++){ //shift elemet
			A[x-k] = A[x-k-1];
		}
		A[y] = key;
	}
	
	//Display the sorted array elemts
	cout<<"\nThe number in the array are:\n";
	for(int j = 0;j < n;j++){
		cout<<A[j] << " ";
	}
	
	cout<<"\nNumber of times while was called in insertion sort: " << count;
	cout<<endl;
	
	return 0;
}
