#include<bits/stdc++.h>
using namespace std;

int blle(int a[],int n)
{
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
    return a[n-1];
}

int main()
{
    int a[300],n,i,j,z;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    z=blle( a, n);

    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
     cout <<endl << z << endl;

    return 0;
}
