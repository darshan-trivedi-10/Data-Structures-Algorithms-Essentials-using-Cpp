/*
Sort String
Given a list of 'n' strings s0,s1,s2,............,sn-1, each consisting of digits and space, the number of spaces is the same for each entry, The goal is to implement a variation of a sort command. none of the string contains consecutive space. Also, no string starts with a space nor ends with it. Spaces are used to divide string into columns, which can be used as keys in comparisons.

The program has to support the required parameter : 
key : integer denoting the column used as a key in comparisons. the left-most column is denoted by 1.

Reversed : boolean variable indicating whether to reverse the result
of comparisons.

comparison-type : either lexicographic or numeric. lexicographic means that we use lexicographical order where for example (122<13).

Numeric means that we compare the string b their numerical values, so (13<122). if the comparison type is 'numeric' and numeric values of keys of Si and Sj are equal for i<j, then Si is considered strictly smaller than Sj because it comes first.

Sample Input
------------
3
92 022
82 12
77 13
2 false numeric
Sample Output
-------------
82 12
77 13
92 022


*/