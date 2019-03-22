# Given an array of integers, return a new array such that each element at index i of the new array
# is the product of all the numbers in the original array except the one at i.
#
# For example, if our input was [1, 2, 3, 4, 5], 
# the expected output would be: [120, 60, 40, 30, 24]
#
# If the input was [3,2,1]
# The output would be [2, 3, 6]

def products(data):
    """My solution to this problem."""
    result = [0] * len(data)

    index_ = 0
    for i in range(len(data)):
        temp = [x for k,x in enumerate(data) if k!=index_]

        num_op = str(tuple(temp)).replace(",", "*")

        result[index_] = eval(num_op)

        index_ = index_ +1

    return result


def products_book(nums):
    """Book solution to this problem."""
    # Generate prefix products.

    prefix_products = []
    for num in nums:
        if prefix_products:
            prefix_products.append(prefix_products[-1] * num)
        else:
            prefix_products.append(num)

    # Generate suffix products.
    suffix_products = []
    for num in reversed(nums):
        if suffix_products:
            suffix_products.append(suffix_products[-1] * num)
        else:
            suffix_products.append(num)
    
    suffix_products = list(reversed(suffix_products))

    # Generate results from the product of prefixes and suffixes.
    result = []
    for i in range(len(nums)):
        if i == 0:
            result.append(suffix_products[i +1])
        elif i == len(nums) -1:
            result.append(prefix_products[i - 1])
        else:
            result.append(prefix_products[i - 1] * suffix_products[i + 1])

    return result

products([1, 2, 3, 4, 5])
products([3,2,1])

products_book([1, 2, 3, 4, 5])
products_book([3,2,1])
