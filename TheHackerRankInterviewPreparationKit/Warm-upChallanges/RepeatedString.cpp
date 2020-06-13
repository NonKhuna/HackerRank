#include<bits/stdc++.h>
using namespace std;

int main(){
    char str[101];
    long long int n;
    scanf(" %s",str);
    scanf("%lld",&n);
    int len= strlen(str);
    int db[101]={};
    int countA = 0;
    for(int i=1;i<=len;i++){
        if(str[i-1]=='a'){
            countA++;
        }
        db[i]=countA;
    }
    long long int sum  = (long long int)((n/len)*db[len])+db[n%len];
    printf("%lld",sum);

}