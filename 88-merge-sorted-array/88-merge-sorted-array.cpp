class Solution {
public:
    void merge(vector<int>& arr1, int n1, vector<int>& arr2, int n2) {
        
        int i=0, j=0, k=0;
        
        vector<int> arr3 = arr1;
    
        while(i<n1 && j<n2){

            if(arr1[i]<arr2[j]){
                arr3[k] = arr1[i];
                k++;
                i++;
            }
            else{
                arr3[k] = arr2[j];
                k++;
                j++;
            }
        }

        while(i<n1){
            arr3[k++] = arr1[i++];
        }

        while(j<n2){
            arr3[k++] = arr2[j++];
        }
        
        arr1 = arr3;
    }
};