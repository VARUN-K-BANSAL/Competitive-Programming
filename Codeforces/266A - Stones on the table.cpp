#include <iostream>
using namespace std;

int main(){

    int n,count = 0, k = 1;
    cin >> n;
    char a[n];
    for(int i=0; i<n; i++)
        cin >> a[i];
    for(int i=0; i<n; ){
        if(a[i] == a[i+k]){
            count++;
            k++;
            continue;
        }
        else{
            i++;
        }
    }
    cout << count << endl;

    return 0;
}