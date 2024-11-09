#include <iostream>
using namespace std;

int roateArray(int arr[] , int d, int n){
    d = d%n;
    int temp[n];
    int k = 0;
    
    for(int i = d; i < n; i++){
        temp[k] = arr[i];
        k++;
    }
    for(int i = 0; i <= d; i++){
        temp[k] = arr[i];
        k++;
    }
    for(int i = 0; i < n; i++){
        arr[i] = temp[i];
    }
}
void displayAr(int arr[] , int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main() {
	int n , d;
	cin >> n;
	
	int arr[n];

	for(int i=0; i < n; i++){
	    cin>>arr[i];
	}
	
	cin>>d;
	
	roateArray(arr , d , n);
	
	displayAr(arr , n);

	
	return 0;
}
