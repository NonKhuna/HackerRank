#include<bits/stdc++.h>
using namespace std;

void next_move(int posr, int posc, int dimh, int dimw, vector <string> board) {
    float MinDist = 1e9;
    int row,col;
    for(int i=0;i<dimh;i++){
        for(int j=0;j<dimw;j++){
            if(board[i][j]=='d'){
                if(MinDist>abs(posr-i)+abs(posc-j)){
                    MinDist = abs(posr-i)+abs(posc-j);
                    row = i;
                    col = j;
                }
            }
        }
    }
    if(posr>row){
        printf("UP");
    }
    else if(posr<row){
        printf("DOWN");
    }
    else if(posc>col){
        printf("LEFT");
    }
    else if(posc<col){
        printf("RIGHT");
    }
    else {
        printf("CLEAN");
    }
}

int main(void) {
    int pos[2];
    int dim[2];
    vector <string> board;
    cin>>pos[0]>>pos[1];
    cin>>dim[0]>>dim[1];
    for(int i=0;i<dim[0];i++) {
        string s;cin >> s;
        board.push_back(s);
    }
    next_move(pos[0], pos[1], dim[0], dim[1], board);
    return 0;
}