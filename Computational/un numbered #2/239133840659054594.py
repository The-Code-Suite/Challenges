# Submission by jukku#0129
#   Date: 2021-10-06

def factors(n):
    f = [1]
    for i in range(2, n):
        if n % i == 0:
            f.append(i)
    f.append(n)
    return f

def gcd(m, n):
    gcd = 1
    for i in range(len(factors(m))):
        for j in range(len(factors(n))):
            if factors(m)[i] == factors(n)[j]:
                gcd = factors(m)[i]
    return gcd

m = int(input("enter number 1: "))
n = int(input("enter number 2: "))
print("The GCD between {} and {} is {}".format(m, n, gcd(m, n)))
