// Print the count of the occurrences of positive integers, negative integers, and zeroes in the given array.

// Input Format
// The first line of the input contains an integer N - size of the array, second line of input contains an array elements of the array.

// Output Format
// Print the frequencies of zeroes, positives elements and negative elements.

// Constraints
// 1 <= N <= 104
// -103 <= arr[i] <= 103

// Example
// Input
// 10
// 120 0 -9 89 68 -982 91 -54 -12 -139

// Output
// 1 4 5

#include <bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >> n;

    int neg = 0, pos = 0;

    for(int i = 0; i < n; i++){
        int ele;
        cin >> ele;
        if(ele > 0){
            pos++;
        }else if(ele < 0){
            neg++;
        }
    }

    cout << n - (pos + neg) << " " << pos << " " << neg << endl;
      
    return 0;
}
