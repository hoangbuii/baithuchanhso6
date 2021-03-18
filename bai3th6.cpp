#include <iostream>

using namespace std;

void swap(int &a, int &b){
    a = a + b;
    b = a - b;
    a = a - b;
}



int main(){
    int n;
    int a[10000];
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if (a[i] > a[j]) swap(a[i], a[j]);
        }
    }
    a[n] = a[n-1];
    for(int i = 1; i <= n; i++){
        a[i] += a[i-1];
    }

    //for(int i = 0; i < n; i++) cout << a[i] << '\t';
    cout << a[n];
}