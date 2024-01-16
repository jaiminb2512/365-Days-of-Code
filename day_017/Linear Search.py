def linearSearch(n: int, num: int, arr: [int]) -> int:
    ans = -1
    for i in range(n):
        if arr[i] == num:
            ans = i
            break
    return ans
