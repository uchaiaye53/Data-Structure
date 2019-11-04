#include<bits/stdc++.h>
using namespace std;

int select(int a[],int n)
{
    int i,j,in_min;
    for(i=0;i<n-1;i++){
        in_min=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[in_min]){
                in_min=j;
            }
        }
        if(in_min != i){
            swap(a[i],a[in_min]);
        }
    }
    return a[1];
}
int main()
{
    int a[300],i,n,z;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    z=select(a,n);
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    cout << endl << z << endl;
    return 0;
}

