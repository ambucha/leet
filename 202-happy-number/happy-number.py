class Solution(object):
    def isHappy(self, n):
        seen = []
        sum = n
        while(sum != 1):
            n = sum
            sum = 0
            while(n > 0):
                digit = n % 10
                sum = sum + (digit*digit)
                n = n / 10
            if(sum in seen):
                return False
            seen.append(sum)
        return True