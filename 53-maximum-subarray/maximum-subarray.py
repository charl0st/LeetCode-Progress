class Solution(object):
    def maxSubArray(self, nums):
        if(nums.__len__() == 1):
            return nums[0]
        currentSum = nums[0]
        maxSum = nums[0]
        for x in nums[1:]:
            currentSum = max(x, currentSum + x)
            maxSum = max(maxSum, currentSum)
                      
        return maxSum   
"""
        :type nums: List[int]
        :rtype: int
        “en yüksek toplama sahip ardışık parça ne?
        """

    



        

    
        

        