COMMANDS TO INSTALL THE PROJECT AND PACKAGES ON DEBIAN BASED OPERATING SYSTEM

- sudo apt update

- sudo apt upgrade 

- sudo apt install git

- git clone https://github.com/semaj-github/CSCI-115-Project.git

- sudo apt install make

- sudo apt install g++
================
================
project is installed with the necessary packages. now onto command for running the program. make sure you are in the project folder.

- make clean

- make 

- ./a.out
================
================
to make adjustments of the data sizes and sorting algorithm go into main.cpp with your IDE. 

in the first line of code is a vector that can take in a list of integers to manipulate the sizes of vectors for the sorting algorithms to perform on.

second line of code is to change the range of the elements if the elements in the vectors are randomized

third line is to pick if the data is "randomized", "sorted", "half sorted", or "reversed sorted". replace the string with your desired choice. 

tip: everytime you make adjustments to the code be sure to type in the following commands to update the code
- make clean
- make
- ./a.out (to run the code)



Part 2 of project commands
=========================

follow the instructions for installing the project on a debain based system if you haven't already. one instruction will be needed listed to run the code

- g++ part_2.cpp
- ./a.out

the algorithm with a time complexity of O(nlogn) will run asking for your target int and run automatically. within the file there is two algorithms that run in O(n^2) and O(n). 
for the O(n) algorithm leave the code as is or change the function with the second comment to "efficient_TwoSum(test,15)"
for the O(n^2) algorithm change the function with the second comment to "inefficient_TwoSum(test,15)"
the list of integers can be changed if wanted. 

Once desired changes are made simply run with the command mention to run the code. 


