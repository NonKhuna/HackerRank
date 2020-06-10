#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    int Max=INT_MIN,Min=INT_MAX;
    for(int i=0;i<n;i++){
        char ch;
        scanf(" %c",&ch);
        printf("%d",(ch=='U')? 1:0);
    }
}
