#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100],n,x,i,c=-1;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    cin >> x;
    for(i=0;i<n;i++){
        if(a[i]==x){
            c=i;
            printf("the element is in index no %d",i);
            break;
        }
    }
    if(c==-1){
        printf("the element is not in the array");
    }
    return 0;
}
