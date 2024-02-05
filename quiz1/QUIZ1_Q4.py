def singleNumber(nums):
    result = 0

    for num in nums:
        result ^= num

    return result

# Example usage:
nums = [4, 2, 1, 2, 1]
result = singleNumber(nums)
print(result)  # This will print 4, as 4 is the only element that appears once