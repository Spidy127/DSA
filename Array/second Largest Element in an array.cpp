#include <iostream>
using namespace std;

int secondLargest(int arr[] , int n){
    int max = arr[0];
    int secondMax = -1;
    
    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            secondMax = max;
            max = arr[i];
        }
        else if(arr[i] > secondMax && max != arr[i]){
            secondMax = arr[i];
        }
    }
    if(secondMax == max ){
        secondMax = -1;
    }
    return secondMax;
}

void display(int arr[] , int n){
    for(int i = 0; i < n; i++){
        cout <<arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int secMax = secondLargest(arr, n);
    display(arr,n);
    
    cout<<secMax<<endl;
	return 0;
}
