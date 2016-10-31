I made two char arrays for the strings name and names
Name is set to 48 which is plenty for a name.
And names 2048 which is more than enough for these examples.

I created an int for count of names and a file pointer.
fopen is used to open the file for reading by arg.
Program exits if file reading failed.

To read each line and put them into array of names,
I used the fgets adding names with strcopy and count them.

Bubble sort was used to sort the names alphabetically.
This is implemented pretty standard as two for loops,
using a temp variable and swapping values until sorted.
I used strcmp to compare the names.

Finally I print all the names using a for loop.