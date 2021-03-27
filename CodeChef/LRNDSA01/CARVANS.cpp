#include<iostream>
using namespace std;

int main(){

    int t;
    scanf("%d",&t);
    while(t--){
        long int n,count=1;
        cout << "Enter n : ";
        scanf("%ld",&n);
        long int a[n];
        cout << "Enter array: ";
        for(long int i=0; i<n; i++) scanf("%ld",&a[i]);
        for(long int i=0; i<n; i++) cout << a[i] << "  ";
        cout << endl;
        for(long int i=n-2; i>=0; i--){
            if(a[i] <= a[i+1]) count++;
            else a[i] = a[i+1];
        }
        cout << count << endl;
        cout << "end\n";
    }


    return 0;
}