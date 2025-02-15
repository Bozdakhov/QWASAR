def my_is_sort(arr)
    if arr.length <= 1
        return true
    end
    
    if arr[0] < arr[-1]
        # array is sorted in ascending order
        for i in 1..arr.length-1
            if arr[i] < arr[i-1]
                return false
            end
        end
        return true
    else
        # array is sorted in descending order
        for i in 1..arr.length-1
            if arr[i] > arr[i-1]
                return false
            end
        end
        return true
    end
end
