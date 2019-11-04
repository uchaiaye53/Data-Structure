#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100],x,mid,low,high,i,c=-1;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    cin >> x;
    low=0;
    high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]==x){
            printf("%d is in index %d",x,mid);
            c=1;
            break;
        }
       else if(a[mid]<x){
        low=mid+1;
       }
       else{
        high=mid-1;
       }
    }
    if(c==-1){
        printf("%d is not in the array",x);
    }
    return 0;
}
