class Solution {
public:
    int search(vector<int>&A, int target) {
        
        int n=A.size();
        int start=0,end=n-1;
        
        // Finding the pivot
        
        while(start<end){
            
            int mid=(start+end)/2;
            
            if(A[mid]>A[end]){
                start=mid+1;
            }
            
            else{ 
                end=mid;
            }
        }
        
        int pivot=start;
        start=0;end=n-1;
        
        // The usual binary search
        
        while(start<=end){
            
            int mid=(start+end)/2;
            int realmid=(mid+pivot)%n;
            
            if(A[realmid]==target){
                return realmid;
            }
            
            else if(A[realmid]<target){
                start=mid+1;
            }
            
            else{
                end=mid-1;
            }
        }
        return -1;
    }
};