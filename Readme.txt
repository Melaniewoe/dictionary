*******************************************************
*  Description of the program
*******************************************************

The program “dictionary” reads in a list of unsorted words into a 
<list> STL (the implementation of doubly linked list) from a file 
called dictionary.txt. Next, the data will be sorted and then a list 
of words from a file called findwords.txt. For each words from the 
file, each list will be searched from the beginning of the list and if 
found, it will print out how many searches had to make. If not found, 
the word will be inserted to the back of the list. The result will be
printed out in a file called revsorted.txt. 


*******************************************************
*  Source files
*******************************************************

Name:  main.cpp
   Main program.  This is the driver program read data from an input 
   file, the data will be searched by searchforward and searchbackward.
   Then the result will be printed out to the screen and also send 
   the result to an output file.
   
Name:  dictionary.h
   Contains the definition for the class dictionary.  

Name: dictionary.cpp
   Defines and implements the matrix class for implementing a dictionary.  
   This class contains the codes for searchForward, searchBackward,
   and revPrintList.

*******************************************************
*  Circumstances of programs
*******************************************************

   The program runs successfully.  
   
   The program was developed and tested on xCode version 7.2
   (7C68)


*******************************************************
*  How to build and run the program
*******************************************************

1. Uncompress the homework.  The homework file is compressed.  
   To uncompress it use the following commands 
       % unzip [WoeHW5]

   Now you should see a directory named homework with the files:
        main.cpp
        dictionary.h
        dictionary.cpp
        makefile
        Readme.txt

2. Build the program.

    Change to the directory that contains the file by:
    % cd [WoeHW5] 

    Compile the program by:
    % make

3. Run the program by:
   % ./[dictionary]

4. Delete the obj files, executables, and core dump by
   %./make clean
