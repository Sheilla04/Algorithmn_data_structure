def containsDuplicate(nums):
    seen = set()

    for num in nums:
        if num in seen:
            return True
        seen.add(num)

    return False

# Example usage:
nums = [1, 2, 3, 4, 5, 6, 1]
result = containsDuplicate(nums)
print(result)  # This will print True, as 1 appears more than once in the array
