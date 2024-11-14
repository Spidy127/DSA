#include <iostream>
using namespace std;

int printAlternet(int arr[] , int n){
    for(int i = 0; i < n; i+=2){
      cout<<arr[i]<<" ";
    }
}
void display(int arr[] , int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++){
	    cin>>arr[i];
	}
	display(arr , n);
	printAlternet(arr, n);
	return 0;
}
