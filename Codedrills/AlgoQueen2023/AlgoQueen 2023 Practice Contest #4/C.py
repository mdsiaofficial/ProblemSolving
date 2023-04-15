n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

# Sort the prices in increasing order
prices = sorted(zip(a, b))

# Try each price as the minimum price and calculate earnings
max_earnings = 0
best_price = prices[0][0]
sold_so_far = 0
total_sold = sum(b)

for price, num_sold in prices:
    sold_so_far += num_sold
    earnings = sold_so_far * price + (total_sold - sold_so_far) * best_price
    if earnings > max_earnings:
        max_earnings = earnings
        best_price = price

print(best_price)
