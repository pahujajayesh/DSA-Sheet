#include<iostream>
using namespace std;
void sort012(int arr[],int n){
    int count1=0,count0=0,count2=0;
      for(int i=0;i<n;i++){
          if(arr[i]==0){
              count0++;
          }
          else if(arr[i]==1){
              count1++;
          }
          else{
              count2++;
          }
      }
      int j=0;
      while(count0){
        arr[j]=0;
        j++;
        count0--;
      }
      cout<<j<<"\n";
      while(count1){
          arr[j]=1;
          count1--;
          j++;
      }
      cout<<j<<"\n";
      while(count2){
          arr[j]=2;
          count2--;
          j++;
      }
     
    
    for(int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort012(arr,n);
return 0;
}