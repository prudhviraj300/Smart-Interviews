// Given an array of size N. Print the sum of odd and even numbers separated by a space.


// Input Format
// The first line of input contains N - the size of the array and the second line contains elements of the array.

// Output Format
// Print the sum of odd elements followed by sum of even elements.

// Constraints
// 1 <= N <= 103
// 1 <= ar[i] <= 106

// Example
// Input
// 5
// 4 6 9 2 5

// Output
// 14 12


#include <bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin >> n;
    int eve  = 0, odd = 0;

    for(int i = 0; i < n; i++){
        int ele;
        cin >> ele;
        if(!(ele&1)){
            eve += ele;
        }else{
            odd += ele;
        }
    }

    cout << odd << " " << eve << endl;
    return 0;
}
