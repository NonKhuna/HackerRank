#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    int height = 0;
    char bf = '-';
    bool isDown = 0;
    int sum =0;
    // O(n)
    for(int i=0;i<n;i++){
        char ch;
        scanf(" %c",&ch);
        if (ch =='U'){
            height+=1;
            if (height==0 and isDown){
                isDown=0;
                sum++;
            }
        }
        else if(ch == 'D'){
            height-=1;
            if (height<0){
                isDown=1;
            }
        }
    }
    printf("%d",sum);
        
}
    
