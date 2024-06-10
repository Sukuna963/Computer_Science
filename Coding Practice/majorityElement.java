/*
    Algorithm: https://en.wikipedia.org/wiki/Boyer%E2%80%93Moore_majority_vote_algorithm

    Given an array of size N, find the majority element. The majority element is the element that appears more than floor(N/2) times.
    You may assume that the array is non-empty and the majority element always exist in the array.



    Problem Constraints
    1 <= |A| <= 106
    1 <= Ai <= 109


    Input Format
    The first argument is an integer array A.


    Output Format
    Return the majority element.


    Example Input
    A = [2, 1, 2]


    Example Output
    2


    Example Explanation
    2 occurs 2 times which is greater than 3/2.
*/

public class Solution {
    public int majorityElement(final int[] A) {
        int counter = 1;
        int candidate = A[0];
        
        for(int i=1; i < A.length; i++) {
            if(counter == 0) {
                candidate = A[i];
            }
            
            if(A[i] == candidate) {
                counter++;
            } else {
                counter--;
            }
        }
        
        return candidate;
    }
}