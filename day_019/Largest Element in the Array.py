
def largestElement(arr: [], n: int) -> int:

    maxElement = 0

    for i in arr:
        maxElement = max(maxElement, i)

    return maxElement
