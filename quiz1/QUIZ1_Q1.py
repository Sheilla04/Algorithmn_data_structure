def remove_duplicates(nums):
    if not nums:
        return 0

    # Initialize pointers
    i = 0

    # Iterate through the array
    for j in range(1, len(nums)):
        # If the current element is not equal to the previous element
        if nums[j] != nums[i]:
            # Move the pointer and update the array in-place
            i += 1
            nums[i] = nums[j]

    # The new length is the position of the last unique element + 1
    return i + 1
nums = [1, 1, 2, 2, 2, 3, 4, 5, 5, 6]
new_length = remove_duplicates(nums)

print("New Length:", new_length)
print("Modified Array:", nums[:new_length])