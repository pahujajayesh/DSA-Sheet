//TLE
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        vector<int>ans;
        int n=arr.size();
        int i=0;
        int max=INT_MIN,maxIndex;
        while(i<k){
            if(arr[i]>max){
                max=arr[i];
                maxIndex=i;
            }
            i++;
        }
        ans.push_back(max);
        while(i<n){
            
            if(max>arr[i] && maxIndex>=i-k+1){
                ans.push_back(max);
            }
            if(arr[i]>=max && (maxIndex>=i-k+1) ){
                max=arr[i];
                ans.push_back(max);
            }
            if(maxIndex<i-k+1){
                maxIndex=i-k+1;
                max=arr[maxIndex];
                int j=maxIndex;
                while(j<=i){
                    if(arr[j]>max){
                        max=arr[j];
                        maxIndex=j;
                    }
                    j++;
                }
                ans.push_back(max);
            }
            
            i++;
        }
        return ans;
    }
};