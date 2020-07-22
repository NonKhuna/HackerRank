#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10][10]={};
    int db[10][10]={};
    int sum=INT_MIN;
    for(int i=1;i<=6;i++){
        for(int j=1;j<=6;j++){
            scanf("%d",&arr[i][j]);
            db[i][j]=db[i-1][j]+db[i][j-1]-db[i-1][j-1]+arr[i][j];
            if (i>=3 and j>=3){
                sum=max(sum,db[i][j]-db[i-3][j]-db[i][j-3]+db[i-3][j-3]-arr[i-1][j]-arr[i-1][j-2]);
            }
        }
    }
    printf("%d",sum);
}