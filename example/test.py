'''
Function to get the max and min values of a list
'''
def get_max_min(list):
    max = list[0]
    min = list[0]
    for i in list:
        if i > max:
            max = i
        if i < min:
            min = i
    return max, min

'''
Function which solves fibonacci sequence iteratively
'''


def fib_iterative(n):
    a, b = 0, 1
    for i in range(n):
        a, b = b, a + b
    return a
