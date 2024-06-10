/*
Given A, generate all structurally unique BST's (binary search trees) that store values 1...A.


Problem Constraints
1 <= A <= 15


Input Format
The first argument is an integer A.


Output Format
Return an array of TreeNode


Example Input
A = 3


Example Output
   1         3     3      2      1
    \       /     /      / \      \
     3     2     1      1   3      2
    /     /       \                 \
   2     1         2                 3

*/

//Definition for binary tree
 class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;
    TreeNode(int x) { val = x; }
 }

public class Solution {
	public ArrayList<TreeNode> generateTrees(int a) {
        return trees(1, a);
    }
    
    private ArrayList<TreeNode> trees(int start, int end) {
        ArrayList<TreeNode> nodes = new ArrayList<>();
        
        if(start > end) {
            nodes.add(null);
            return nodes;
        }
        
        for(int i=start; i <= end; i++) {
            ArrayList<TreeNode> left = trees(start, i-1);
            ArrayList<TreeNode> right = trees(i+1, end);
            
            for(TreeNode l : left) {
                for(TreeNode r : right) {
                    TreeNode root = new TreeNode(i);
                    root.left = l;
                    root.right = r;
                    nodes.add(root);
                }
            }
        }
        
        return nodes;
    }       
}