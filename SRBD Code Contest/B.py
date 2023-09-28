# Function to calculate the maximum number of colors that can be formed
def max_colors(S):
    # Initialize dictionaries to store character frequencies
    char_freq = {}
    color_freq = {}

    # Initialize the count of colors that can be formed
    max_count = 0

    # Count character frequencies in the string S
    for char in S:
        char_freq[char] = char_freq.get(char, 0) + 1

    # Color definitions
    colors = {
        "blue": "blue",
        "green": "green",
        "yellow": "yellow",
        "red": "red",
        "purple": "purple",
        "orange": "orange",
        "pink": "pink",
        "grey": "grey",
        "cyan": "cyan",
        "brown": "brown",
        "ash": "ash",
        "silver": "silver",
        "gold": "gold",
        "white": "white",
        "black": "black"
    }

    # Check each color in the set C
    for color in colors:
        color_str = colors[color]
        color_freq.clear()

        # Count character frequencies in the color string
        for char in color_str:
            color_freq[char] = color_freq.get(char, 0) + 1

        can_form_color = True

        # Check if there are enough characters to form the color
        for char in color_freq:
            if char not in char_freq or char_freq[char] < color_freq[char]:
                can_form_color = False
                break

        # If the color can be formed, update the character frequencies and count
        if can_form_color:
            for char in color_freq:
                char_freq[char] -= color_freq[char]
            max_count += 1

    return max_count

# Main function
if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        S = input().strip()
        result = max_colors(S)
        print(result)
