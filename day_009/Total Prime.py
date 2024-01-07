def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True

def count_primes_in_range(start, end):
    count = 0
    for num in range(start, end + 1):
        if is_prime(num):
            count += 1
    return count


start_range,end_range = map(int,input().split(' ')) 
prime_count = count_primes_in_range(start_range, end_range)
print(prime_count)
