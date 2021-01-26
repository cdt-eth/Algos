# scan array - for loop
# look at i & j - arr[0] & arr[1]
    # compare
# if i>j, swap
    # how?
# go through all array
# at end of pass, the end is the largest
    # so we ignore it next pass?
    # len of arr -1?
# continue until one full non-swap pass

#      tmp
#      i  j
arr = [7, 3, 1, 4, 6, 2, 3]
print(arr)

def bubble(arr):
    for i in range(len(arr)):
        for j in range(len(arr) - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]

bubble(arr)
print(arr)


arr = [7, 3, 1, 4, 6, 2, 3]

def bubbleFast(arr):
    has_swapped = True

    while has_swapped:
        has_swapped = False
        for i in range(len(arr) - 1):
            if arr[i] > arr[i + 1]:
                arr[i], arr[i + 1] = arr[i + 1], arr[i]
                has_swapped = True

bubbleFast(arr)
print(arr)

arr = [7, 3, 1, 4, 6, 2, 3]
def bubbleFastest(arr):
    has_swapped = True
    num_of_itr = 0

    while has_swapped:
        has_swapped = False
        for i in range(len(arr) - num_of_itr - 1):
            if arr[i] > arr[i + 1]:
                arr[i], arr[i + 1] = arr[i + 1], arr[i]
                has_swapped = True
        num_of_itr += 1

bubbleFastest(arr)
print(arr)

# ___Big O___
# passes:
    # best  = O(1) // independent of num of items (checking what arr[i] is or i>j)
    # worst = O(n) // in proportion to num of items (we'll go through n num of times if literally every single item is non-ideally ordered)
# comparisons:
    # best  = we'll look at every pair the move on
    # worst = we'll make every possible switch
