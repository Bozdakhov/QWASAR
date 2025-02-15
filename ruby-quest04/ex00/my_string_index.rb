def my_string_index(param_1, param_2)
    # Loop through each character in the param_1 string
    param_1.each_char.with_index do |char, index|
      # Check if the character matches the param_2 character
      if char == param_2
        # Return the index of the character in the param_1 string
        return index
      end
    end
    # If the param_2 character is not found, return -1
    return -1
  end
  