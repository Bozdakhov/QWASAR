# Welcome to Quest05
***

## Task

To find and delete all files in the current directory and its subdirectories that have a name ending with a tilde (~) or a name starting and ending with a hash (#), 
you can use the find command with the -name option and the rm command with the -f option. The -f option will force the removal of the files without asking for confirmation.
Here's the command you can use to achieve this:Based on the information in Test Case 1, the expected output for my_clean should be a list of files that match the search criteria 
(files with names ending in a tilde or starting and ending with a hash) and were successfully deleted by the command.
For example, if the current directory contains the files file1~, file2.txt, #file3#, and file4.txt, the expected output of my_clean should be:
This is assuming that the command successfully finds and removes the files file1~ and #file3#. The actual format of the output 
(i.e., a list of filenames in quotes separated by commas) may depend on the specific implementation of the command.

## Description

Let's break down this command:
find: starts the find command
.: specifies the starting directory for the search (in this case, the current directory)
-type f: filters the search to only include regular files (not directories, symbolic links, etc.)
\( -name '*~' -o -name '#*#' \): specifies the criteria for the file names to be searched. The parentheses group the two criteria together, and the -o option means "or". 
The first criterion is -name '*~', which matches files with a name ending in a tilde (~). The second criterion is -name '#*#', which matches files with a name starting and ending with a hash (#).

## Installation

-exec: specifies that the following command should be executed on each file found
rm -f {} +: removes the files found. The -f option means "force" (i.e., don't ask for confirmation), 
and the {} and + are placeholders that get replaced with the file names found by find.
Note that this command will not remove any directories, symbolic links, or other non-regular files that match the search criteria. 
If you want to include those in the search and removal, remove the -type f option.
Based on the information in the test cases, it seems like there may be an issue with the implementation of my_clean command.
For Test Case 0, it appears that the command is checking if a file exists, which is not mentioned in the problem statement. 
This test case should be updated to check if the command executes successfully and removes the specified files.
For Test Case 1, the expected output is a list of files that should be removed by the my_clean command, but the actual output is an empty list. 
This suggests that the command did not find any files that match the search criteria. It's possible that the search criteria are too narrow, 
or that there simply aren't any files in the current directory or its subdirectories that match the criteria.

## Usage

For Test Case 2, there is no input provided, and the expected output and return value are both empty. 
It's unclear what this test case is checking for, but it should be updated to provide a specific scenario to test.
Without seeing the actual implementation of the my_clean command, it's difficult to provide a more specific solution to the issues. 
However, some possible reasons for the failures could be:
Incorrect syntax or options used in the find and rm commands
Incorrect interpretation of the search criteria specified in the problem statement
Issues with file permissions or ownership that prevent the command from removing certain files
I recommend reviewing the implementation of the command and testing it with different scenarios to identify and resolve any issues.

Based on the information in Test Case 1, the expected output for my_clean should be a list of files that match the search criteria 
(files with names ending in a tilde or starting and ending with a hash) and were successfully deleted by the command.
For example, if the current directory contains the files file1~, file2.txt, #file3#, and file4.txt, the expected output of my_clean should be:
["./file1~", "./#file3#"] This is assuming that the command successfully finds and removes the files file1~ and #file3#. 
The actual format of the output (i.e., a list of filenames in quotes separated by commas) may depend on the specific implementation of the command.


### The Core Team


<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px'></span>
