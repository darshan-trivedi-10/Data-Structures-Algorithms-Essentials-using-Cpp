/*

Object = Entities in Real Worls

Ex.1 pen Object ==> Color : green, thickness : 5px --> properties/attributes
               ==> setcolor("red") --> Methods
     
    ~~~> pen have string color, int thickness, setcolor(


Ex.2 Shopping Cart have
       ==> list<items>
       ==> get total()
       ==> apply discount()

Q1. Why need Object ?
   ==> we can write code that is related insite a single class. this will make a work of a programmer easy, maintable, encanpsalation , modularity of the code.

***********************************************************************************************************

Class == Blueprint
   ==> Blueprint that tells the complierhow to make an actual object. 

Default Methods/Function
 --> constructor
 --> Copy Constructor
 --> Copy Assignment Operator
 --> Destructor


Copy Constructor :
 --> Creates a copy of given object
 --> Initialise an object using another object of the same class.
 // Syntax
 class_name(const class_name &object_name.)

==> We Need to define our own copy constructor only if an object has pointsers to dynamically allocated objects, is a 
      deep copy of object is needed. In Dhallow copy you copy only address. but in Deep copy we not copy address.
   
==> Deep copy is possible only with user defined copy constructor.


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Copy Assignment Operator =

==> Assignment operator is called when an already initalized object is assignrd a new value from another 
     existing object.


-------------------------------------------------------------------------------------------------------------

Destructor

class car{
   public :
                // Destructor
                ~car();
};

--> Function that is called automatically when an object is destroyed is object gose out of scope or 
     destroyed explicitly by call to delete.

--> compiler provides a default destructor.

--> User defined destructor is needed when class contains pointers to dynamically allocated.

*/
