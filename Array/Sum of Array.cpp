#include <iostream>
using namespace std;

int sumOfArray(int arr[] , int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
      sum +=arr[i];
    }
    return sum;
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
	int sum = sumOfArray(arr,n);
	display(arr , n);
	cout<<sum<<endl;
	
	return 0;
}
