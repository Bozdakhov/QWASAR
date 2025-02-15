# Welcome to Ruby Quest06
***

## Task

This function takes two arguments: csv_string which is the CSV formatted string, and separator which is the character that separates the columns in the CSV.
The function first splits the CSV string into lines using the newline character "\n". It then initializes an empty result array.
The function then loops over each line and splits it into columns using the provided separator. The columns are added to the result array.
Finally, the function returns the result array.

## Description

This solution uses the DateTime class to parse the date and time in the "Order At" column, and then applies a series of rules to transform the email provider, age, 
and order time into the desired format. The result is returned as an array of strings in CSV format.
The code defines a function my_data_process which takes a single parameter param_1, which is expected to be an array of strings.
The function first initializes an empty hash result. This hash will store the data in the desired format.
The code then loops through each string in the input array, skipping the first string as it contains the headers.
For each subsequent string, the code splits the string by commas and stores the resulting array in the variable line.

## Installation

The function first gets the headers from the first element of the input array, and removes the columns we don't need. 
It then initializes an empty hash called data to hold the transformed data.
The function then loops through each row of the data (excluding the headers) and for each column in the row, 
it increments the count for the value of that column in the corresponding hash in data. If the hash doesn't exist yet for that column, it is created.
Finally, the function converts the data hash to a JSON string using the JSON.generate method and returns it.

## Usage

The code then loops through the headers, which are stored in the headers array. For each header, the code checks if the header is one of the columns to discard, and skips the header if it is.
If the header is not in the list of columns to discard, the code gets the index of the header in the headers array, and uses that index to retrieve the corresponding value from the line array. 
The code then updates the result hash with this value, using the header as the first key and the value as the second key. If the key already exists in the hash, the code increments the value by 1.
Finally, the code returns the result hash in JSON format, using the to_json method.
I hope this helps you understand the code! Let me know if you have any further questions.



### The Core Team


<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px'></span>
