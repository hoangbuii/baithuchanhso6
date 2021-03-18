#include <iostream>

using namespace std;

int ucln(int a, int b){
    if (b ==0 ) return a;
    else return ucln(b, a % b);
}

int bcnn (int a, int b){
    return (a*b) / ucln(a,b);
}

int main(){
    int m, n;
    int a[1000], b[1000];
    cin >> m >> n;
    for (int i = 0; i < m; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    int bcnn_a = a[0];
    for (int i = 0; i < m - 1; i++)
        bcnn_a = bcnn(bcnn_a, a[i+1]);
        
    //cout << bcnn_a << endl;

    int ucln_b = b[0];
    for (int i = 0; i < n - 1; i++)
        ucln_b = ucln(ucln_b, b[i+1]);
    
    //cout << ucln_b;
    int count = 0;
    for (int i = 1; i * bcnn_a <= ucln_b; i++){
        if (ucln_b % (bcnn_a * i)) continue;
        else count ++; //cout << bcnn_a * i << ' ';
    }
    cout << count;
    return 0;
}