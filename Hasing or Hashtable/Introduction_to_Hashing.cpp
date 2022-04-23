
Operation on Hashtable :
1) Search 
2) insert
3) remove

--> All above operastion time complexity is O(1) on an average.
--> Data structure is not useful if you want to maintain some kind of an order of the element.
--> Hashtable is Unordered Data Structure.

Hash Function [ Object ] ===> Interger Value
(Key need to be converted into an integer value)

Key Components
--> Hash Function
--> Hash Table
--> Collision Handling Scheme

HashTable :
--> A hashtable is an array of fixed size. (it can grow based upon need).
--> Array elements are indexed by a key, which is mapped to an array index (0 to table size -1).
--> Mapping (Hash Function)
     1) h from key to index
     2) h("john") = 12

HaseTable Operations :
1) Insert
      T[h(key)] = value.
2) Search
      return T[h(key)]
3) Delete 
     return T[h(key)] = NULL

Collisions ?
what happens if h ("pizza") === h("pepsi").

Collision can't be avoided but their chances can be reduces using a 1) a good hash function. if also happen we can use collision Handling stratergy'. 

1) Good Hash Function :
   --> Reduce the chance of collision - Distribute Keys uniformly over table
   --> Should be fast to compute.

2) Simple Hash Function

Assuming Integer Keys :
  --> h(key) = key % Table size.
 --> For random keys, h() distributes keys evenly over table multiples of 10.
 --> Better if tablesize is a prime number.

3) Hash Function for string :
    --> Add a chatacter ASCII values (0-255) to produce integer keys.

    Example - "abcd" = 97 + 98 +99 + 100 = 394
                    h("abcd") = 394%Table size
Potential Problem :
   --> Anagrams will map to same index.
   --> h('tab') == h('bat')
   --> Small strings may not use entire table.

Another Attempt !.

Hash Function for "strings".
--> Take "weighted sum"
--> Use all N characters of string as N-digit base K Numbers.
--> Recommended
    --> Chose k to be a prime number larger than number of diffrent digits (chatacter)
    --> k = 29,31,37
    h(s) = [ Σ(i=0->i=L-1) s[L-i-1]* 37^i ] % table_size. 
 
How to handle collision !.
 --> Open Hashing - Separae Chaining Technique - Use in Built in unordered_map.

 Other Techniques :
 Closed Hashing (linear Probing & Quadratic Probling) 

 Double Hashing.


Open Hashing :

 Separate Chaining :
 --> Implemented using Linked __builtin_va_list
 --> Key K is stored in a list a T[h(k)]
 --> Eg. TableSize = 10 
           --> h(k) = k mode 10
           --> insert first 10 perfect sqare

#include <iostream>
using namespace std;

int main()
{
    string s = "I love Coding";
    cout << s;

    return 0;
}


