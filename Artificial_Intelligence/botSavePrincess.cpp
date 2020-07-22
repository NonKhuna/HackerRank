#include <iostream>
#include <vector>
using namespace std;

void nextMove(int n, int r, int c, vector <string> grid){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]=='p'){
                if(i>r){
                    cout << "DOWN";
                }
                else if(i<r){
                    cout << "UP";
                }
                else {
                    if(j>c){
                        cout << "RIGHT";
                    }
                    else {
                        cout << "LEFT";
                    }
                }
                return;
            }
        }
    }
}

int main(void) {

    int n, r, c;
    vector <string> grid;

    cin >> n;
    cin >> r;
    cin >> c;

    for(int i=0; i<n; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }

    nextMove(n, r, c, grid);
    return 0;
}