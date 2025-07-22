def selection_prac(arr):
    for i in range(len(arr)):
        min_index = i
        for j in range(len(arr)):
            if arr[j] < arr[min_index]:
                min_index = j
                