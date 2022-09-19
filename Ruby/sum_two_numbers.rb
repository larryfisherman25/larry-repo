def sum_eq_n?(arr, n)
    return true if arr.empty? && n == 0

    arr.product(arr).reject{|a,b| a == b }.any? { |a,b| a + b == n}
end

sum_eq_n?([2,4,6,10], 7)
