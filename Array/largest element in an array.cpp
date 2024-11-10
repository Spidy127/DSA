#include <iostream>
using namespace std;

int largest(int arr[] , int n){
    
    int max = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

void display(int arr[] ,  int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i] << " ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
   int maxElement = largest(arr, n);
   
    display(arr, n);
    
    cout<< maxElement <<endl;
	
	return 0;
}
