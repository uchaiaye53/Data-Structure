#include<bits/stdc++.h>
using namespace std;

int insrt(int a[],int n)
{
  int i,j,value;
  for(i=1;i<n;i++){
    value=a[i];
    j=i;
    while(j>0 && a[j-1]>value){
        a[j]=a[j-1];
        j--;
    }
    a[j]=value;
  }
  return a[0];
}
int main()
{
    int n,a[300],x;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    x=insrt(a,n);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    cout << endl << x << endl;
    return 0;
}
