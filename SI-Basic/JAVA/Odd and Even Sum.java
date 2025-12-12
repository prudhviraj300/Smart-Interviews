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

import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Main. */
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int eve = 0, odd = 0;

        for(int i = 0; i < n; i++){
            int ele = sc.nextInt();
            if(((ele&1)) == 0){
                eve += ele;
            }else{
                odd += ele;
            }
        }
        System.out.println(odd + " " + eve);
    }
}
