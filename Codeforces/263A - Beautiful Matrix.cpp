#include<iostream>
#include<cstdlib>
using namespace std;

int main(){

    int a[5][5],tempi,tempj;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin >> a[i][j];
        }
    }
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(a[i][j]){
                tempi = i;
                tempj = j;
                break;
            }
        }
    }
    cout << abs(tempi - 2) + abs(tempj - 2) << endl;
    return 0;
}