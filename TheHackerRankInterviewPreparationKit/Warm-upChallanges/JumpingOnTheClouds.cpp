#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    int arr[101],db[101]={};

    for(int i=0;i<n;i++){
        db[i]=1e9;
    }
    db[0]=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if (arr[i]==1) continue;
        if(i>=1 and db[i-1]!=1e9){
            db[i]=db[i-1]+1;
        }
        if(i>=2) {
            db[i]=min(db[i],db[i-2]+1);
        }
    }
    printf("%d",db[n-1]);
        
}
    
