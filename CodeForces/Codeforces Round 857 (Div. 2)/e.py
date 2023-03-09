def max_impression(t, test_cases):
    for i in range(t):
        n = test_cases[i][0]
        albums = test_cases[i][1:]
        
        # Create a list of tuples with album index and maximum coolness
        album_max_coolness = []
        for j in range(n):
            max_coolness = max(albums[j])
            album_max_coolness.append((j, max_coolness))
        
        # Sort the list in descending order of maximum coolness
        album_max_coolness.sort(key=lambda x: x[1], reverse=True)
        
        # Calculate the maximum impression
        max_impression = 0
        prev_max_coolness = 0
        for j in range(n):
            album_index = album_max_coolness[j][0]
            max_coolness = album_max_coolness[j][1]
            if max_coolness > prev_max_coolness:
                max_impression += 1
                prev_max_coolness = max_coolness
        
        print(max_impression)
