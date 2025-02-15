def my_count_on_it(param_1)
    return param_1.map { |string| string.length }
  end
  

=begin
  input = ["This", "is", "the", "way"]
  puts my_count_on_it(input).inspect
  # Output: [4, 2, 3, 3]
  
  input = ["aBc", "AbcE Fgef1"]
  puts my_count_on_it(input).inspect
  # Output: [3, 10]
  
  input = ["aBc"]
  puts my_count_on_it(input).inspect
  # Output: [3]
=end 