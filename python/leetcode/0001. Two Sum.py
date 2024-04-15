class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        s: set = set(nums)
        for i in s:
            if target - i in s and target - i != i:
                return [nums.index(i), nums.index(target - i)]