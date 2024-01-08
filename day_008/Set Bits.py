def count_ones_in_binary(n):
    binary_representation = bin(n)[2:] 
    count_ones = binary_representation.count('1')
    return count_ones


integer_input = int(input())
result = count_ones_in_binary(integer_input)
print(result)
