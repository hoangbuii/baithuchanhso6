#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream file("1.txt");
    int arr[1000];
    int count = 0, sum = 0;
    while ((file) && !(file.eof())) {
        file >> arr[count];
        sum += arr[count];
        
       // cout << arr[count] <<' ' << count << endl;
        count ++;
    }
    file.close();
   count --;
    int min = arr[0], max = arr[0];
    for (int i = 1; i < count; i++){
        if (max < arr[max]) max = arr[i];
        if (min > arr[i]) min = arr[i];
    }
    cout << count << ' ' << min << ' ' << max << ' ' << sum;
    return 0;
}
