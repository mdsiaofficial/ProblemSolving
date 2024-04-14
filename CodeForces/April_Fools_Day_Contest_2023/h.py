import sys

n = int(input())

# Initialize the minimum value as infinity
min_val = sys.maxsize

# Keep track of the indices that have been queried
queried_indices = set()

# Function to query for the maximum value in a range
def query(l, r):
    # Check if the range has already been queried
    if (l, r) in queried_indices:
        return None
    
    # Query for the maximum value in the range
    print(f"? {l} {r}")
    sys.stdout.flush()
    max_val = int(input())
    
    # Update the queried indices set
    queried_indices.add((l, r))
    
    return max_val

# Function to recursively find the minimum value
def find_min(l, r):
    # Base case: range has only one element
    if l == r:
        return query(l, r)
    
    # Divide the range in two halves
    mid = (l + r) // 2
    
    # Query for the maximum value in each half
    max_left = query(l, mid)
    max_right = query(mid+1, r)
    
    # Check if any of the ranges has already been queried
    if max_left is None or max_right is None:
        return None
    
    # If both ranges have only one element, return the minimum value
    if l == mid and mid+1 == r:
        return min(max_left, max_right)
    
    # Otherwise, recursively find the minimum value in each half
    if max_left < max_right:
        return find_min(l, mid)
    else:
        return find_min(mid+1, r)
    
# Find the minimum value using binary search
min_val = find_min(1, n)

# Print the minimum value
print(f"! {min_val}")
sys.stdout.flush()
