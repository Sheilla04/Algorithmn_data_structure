def rotate(nums, k):
    n = len(nums)
    k = k % n  # In case k is greater than the length of the array

    # Reverse the entire array
    nums.reverse()

    # Reverse the first k elements
    nums[:k] = reversed(nums[:k])

    # Reverse the rest of the elements
    nums[k:] = reversed(nums[k:])

# Example usage:
nums = [1, 2, 3, 4, 5, 6, 7]
k = 3
rotate(nums, k)
print("Rotated Array:", nums)