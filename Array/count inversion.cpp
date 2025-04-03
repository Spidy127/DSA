class Solution {
  public:
    // Function to count inversions in the array.
    int merge(vector<int> &arr, vector<int>& temp, int low , int mid , int high){
       
        int left = low;
        int right = mid + 1;
        int index = low;
        int cnt = 0;
        
        while(left<= mid && right <= high){
            if(arr[left] <= arr[right]){
                temp[index++] = arr[left++];
            }
            else{
                temp[index++] = arr[right++];
                cnt += (mid - left + 1);
            }
        }
            while(left <= mid){
              temp[index++] = arr[left++];
            }
            
            while(right <= high){
               temp[index++] = arr[right++];
            
            }
            for(int i = low; i <= high; i++){
                arr[i] = temp[i];
            }
            
        return cnt;
        
    }
    
    int mergesort(vector<int> &arr, vector<int>& temp , int low , int high){
        int cnt = 0;
        if(low >= high) return cnt;
        int mid = (low + high) / 2;
        cnt += mergesort(arr , temp, low, mid);
        cnt += mergesort(arr,temp, mid + 1, high);
        cnt += merge(arr, temp , low, mid, high);
        return cnt;
    }
    
    int inversionCount(vector<int> &arr) {
        // Your Code Her
        int n = arr.size();
        vector<int> temp(n);
        return mergesort(arr, temp , 0, n - 1);
    }
};
