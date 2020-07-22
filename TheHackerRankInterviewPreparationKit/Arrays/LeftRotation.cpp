#include<bits/stdc++.h>
using namespace std;
int arr[100001];

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    m=m%n;
    for(int i=0;i<n;i++){
        printf("%d ",arr[(i+m)%n]);
    }
}