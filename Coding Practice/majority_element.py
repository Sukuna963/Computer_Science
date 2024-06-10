'''
    Algorithm: https://en.wikipedia.org/wiki/Boyer%E2%80%93Moore_majority_vote_algorithm

    Given an array nums of size n, return the majority element.

    The majority element is the element that appears more than ⌊n / 2⌋ times.
    You may assume that the majority element always exists in the array.

    Example 1:

    Input: nums = [3,2,3]
    Output: 3
    Example 2:

    Input: nums = [2,2,1,1,1,2,2]
    Output: 2

    Constraints:

    n == nums.length
    1 <= n <= 5 * 104
    -109 <= nums[i] <= 109

'''


class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        counter = 0
        candidate = nums[0]

        for num in nums:
            if counter == 0:
                candidate = num

            if num == candidate:
                counter += 1
            else:
                counter -= 1

        return candidate