def my_csv_parser(csv_string, separator)
    # Split the string into lines
    lines = csv_string.split("\n")
  
    # Initialize an empty result array
    result = []
  
    # Loop over each line and split it into columns using the separator
    lines.each do |line|
      columns = line.split(separator)
      result << columns
    end
  
    return result
  end
  