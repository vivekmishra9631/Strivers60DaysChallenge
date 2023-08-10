#include<bits/stdc++.h>
using namespace std;
int countSmaller(int* row,int n12,int mid){
    int l = 0, h=n12;
  while (l <= h)
  {
    int md = (l + h) >> 1;
    if (row[md] <= mid)
    {
      l = md + 1;
    }
    else
    {
      h = md - 1;
    }
  }
  return l;
}
int findMedian(int** A, int n11, int n12) {
    
    long long int low=1;
    long long int high=1e7;
    
    while(low<=high){
        long long int mid=(low+high)>>1;
        long long int cnt=0;
        int i;
        for(i=0;i<n12;i++){
            cnt+=countSmaller(A[i],n12,mid);
        }
        
        if(cnt<=(n11*n12)/2) low=mid+1;
        else high=mid-1;
    }
    return low;
    
}

int main(){
    
return 0;
}
