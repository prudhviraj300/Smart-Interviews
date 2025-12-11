// Find the maximum element from the given array of integers.

// Input Format
// ﻿The first line of input contains N - the size of the array and the second line contains the elements of the array.

// Output Format
// Print the maximum element of the given array.

// Constraints
// 1 <= N <= 103
// -109 <= ar[i] <= 109

// Example
// Input
// 5
// -2 -19 8 15 4

// Output
// 15


import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Main. */
        Scanner sc = new Scanner(System.in);
        int n;
        n = sc.nextInt();
        int ans = Integer.MIN_VALUE;

        for(int i = 0; i < n; i++){
            int ele;
            ele = sc.nextInt();
            ans = Math.max(ele, ans);

        }

        System.out.println(ans);

    }
}
