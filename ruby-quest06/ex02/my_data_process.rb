require 'json'

def my_data_process(param_1)
  # extract column headers from first line
  columns = param_1[0].split(',')
  # initialize hash of hash
  data = Hash.new { |h, k| h[k] = Hash.new(0) }
  
  # iterate over remaining lines
  param_1[1..-1].each do |line|
    # split line into fields
    fields = line.split(',')
    # iterate over fields and populate hash of hash
    columns.each_with_index do |col, i|
      unless ['FirstName', 'LastName', 'UserName', 'Coffee Quantity'].include?(col)
        data[col][fields[i]] += 1
      end
    end
  end
  
  # convert hash of hash to JSON string
  JSON.generate(data)
end
