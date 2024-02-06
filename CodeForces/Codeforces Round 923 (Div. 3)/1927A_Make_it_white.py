# Function to find the minimum length of segment needed to paint to cover all black cells
def min_paint_segment(n, s):
    left_black = s.find('B')  # Find the first black cell from the left
    right_black = s.rfind('B')  # Find the first black cell from the right
    
    # Calculate the length of the segment between the first and last black cell
    min_segment_length = right_black - left_black + 1
    
    return min_segment_length

# Read the number of test cases
t = int(input())

# Iterate through each test case
for _ in range(t):
    # Read the length of the strip and the strip itself
    n = int(input())
    s = input().strip()
    
    # Find and output the minimum length of segment needed to paint
    print(min_paint_segment(n, s))




""" 
8
6
WBBWBW
1
B
2
WB
3
BBW
4
BWWB
6
BWBWWB
6
WWBBWB
9
WBWBWWWBW


 """