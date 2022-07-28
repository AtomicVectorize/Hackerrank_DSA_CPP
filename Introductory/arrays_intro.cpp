#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size;
    cin >> size;
    int arr[size];

    // Get input array
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }

    // Reverse the array
    int temp;
    for(int i = 0; i < size/2; i++){
        temp = arr[i];
        arr[i] = arr[size-1-i];
        arr[size-1-i] = temp;
    }
    
    // Output the array
    for (int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    // cout << endl;
    return 0;
}
