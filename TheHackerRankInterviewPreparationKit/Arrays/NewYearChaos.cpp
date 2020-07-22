#include<bits/stdc++.h>
using namespace std;
const int lim = 1e5+1;
int arr[lim];

int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int n;
        scanf("%d",&n);
        int cnt=0;
        int sum=0;
        for(int j=1;j<=n;j++){
            scanf("%d",&arr[j]);
        }
        for(int j=1;j<=n;j++){
            printf("%d ",j-arr[j]);
            if(j>arr[j]){
                sum+=j-arr[j];
            }
            cnt+=j-arr[j];
            if (abs(j-arr[j])>2){
                cnt=1e9;
                break;
            }
        }
        cout << endl;
        if (cnt!=0){
            printf("Too chaotic\n");
        }
        else {
            printf("%d\n",sum);
        }
    }
}