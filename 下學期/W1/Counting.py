n, q = map(int, input().split())

nums = list(map(int, input().split()))

def binary_search(arr, left, right, hkey):
    while left <= right:
        mid = left + (right - left) // 2
        if arr[mid] == hkey:
            return mid
        elif arr[mid] < hkey:
            left = mid + 1
        elif arr[mid] > hkey:
            right = mid - 1
    return -1

for i in range(q):
    k = int(input())
    if binary_search(nums, 0, n-1, k) != -1:
        print("Yes")
    else:
        print("No")
