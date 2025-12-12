# Print the count of the occurrences of positive integers, negative integers, and zeroes in the given array.

# Input Format
# The first line of the input contains an integer N - size of the array, second line of input contains an array elements of the array.

# Output Format
# Print the frequencies of zeroes, positives elements and negative elements.

# Constraints
# 1 <= N <= 104
# -103 <= arr[i] <= 103

# Example
# Input
# 10
# 120 0 -9 89 68 -982 91 -54 -12 -139

# Output
# 1 4 5


# Enter your code here. Read input from STDIN. Print output to STDOUT
n = int(input())

arr = list(map(int, input().split()))

pos, neg = 0,0

for i in arr:
    if i < 0:
        neg = neg + 1
    elif i > 0:
        pos = pos + 1

print( (n - (pos + neg)), pos, neg, sep = " " )
