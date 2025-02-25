# sort-array-with-two-elements

1. Sort Binary Array

An unsorted array consisting binary digits is given. The program sorts all 0s to the left of the array and all 1s to the right side.

Step one: The algorithm counts the number of 0 digits.
Step two: All 0s are moved to the left side.
Step three: The rest (1 digits) are sorted to the right.

2. Segregate even and odd numbers

Step one:
lo is initialized to 0. hi is initialized to array size - 1.

Step two:
go thru the array. While array[lo] is even, increment lo by 1.

go thru array. While array[hi] is odd,
decrement hi by 1.

if found lo find odd number OR hi find even number, swap array[lo] and array[hi], then increment lo by 1 and decrement hi by 1 simultaneously.

step three:
repeat step two while lo < hi.