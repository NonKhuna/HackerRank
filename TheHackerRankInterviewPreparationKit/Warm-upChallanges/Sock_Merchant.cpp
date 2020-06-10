#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    bool arr[101]={};
    scanf("%d",&n);
    int sum=0;
    
    // bigO = n;
    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        if(arr[x]==1) {
            arr[x]=0;
            sum++;
        }
        else {
            arr[x]++;
        }
    }
    printf("%d",sum);
}
