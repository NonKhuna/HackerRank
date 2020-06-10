#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    int sum = 0;
    //Big(o) = n 
    for(int i=0;i<n;i++){
        int num;
        scanf("%d",&num);
        sum+=num;
    }
    printf("%d",sum);
}
