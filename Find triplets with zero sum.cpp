class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        //Your code here
        bool found = false;
        sort(arr,arr+n);
        for(int i=0;i<n-1;i++){
            int l = i+1;
            int r = n-1;
            int k = arr[i];
            while( l < r){
                if(arr[l] + arr[r] + k == 0){
                    l++;
                    r--;
                    found = true;
                    break;
                    
                }
                else if(arr[l] + arr[r] + k < 0 ){
                    l++;
                }
                else{
                    r--;
                }
            }
        }
        return found;
    }
};