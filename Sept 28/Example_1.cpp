/*
  base class A <-------------- derived class B <---------------- derived class C (from B) 
     ^                                                                  |
     |                                                                  |
     | --------------------------------                                 |
                                      |                                 |
                                      |                                 |
  derived class D <-------------- derived class E <------------------------------------- derived class F

 

There can be many levels of inheritance i.e. derived classes can themselves become the base class for further derived classes

 

One class can be derived from one or MORE classes

 

One or more classes can be derived from a single or more classes

 


The class hierarchies basically form a directed graph. 

 

The classes that are only base classes have outdegree zero.

 

The classes that are only derived classes have indegree zero.

 

*/

 

// layered and multiple inheritance

 

 

#include <iostream>

 

using namespace std;

 

////////////////////////////////////////////////////

 

class SampleA    // base class
{

 

//private:     // it can be accessed only by the member functions of THIS class itself

 


protected:    // these members can be accessed by member functions of this class as well as elements of a derived class

 

int num; 

 

public:
SampleA(): num(0)         // constructor
{
cout << "This is a zero-argument constructor" << endl;
}

 

SampleA(int x) : num(x)     // one-argument constructor
{
cout << "This is a one-argument constructor" << endl;
}

 


void operator ++ ()           // increment function (prefix)
{
++num;
} 

 


void operator ++ (int)           // increment function (postfix)
{
num++;
} 

 


void modify ()
{

 

num = 10*num;

 

}

 

 

 

 


void show_num ()         // display function
{
cout << num << endl;
}

 


};
////////////////////////////////////////////////////
////////////////////////////////////////////////////
////////////////////////////////////////////////////
////////////////////////////////////////////////////

 

class SampleB : public SampleA  // class is derived from the base class Sample

 

{

 


//////////////////////////////////////

 

public:

 

SampleB(): SampleA(0)         // this constructor simply invokes the zero-argument constructor from the base class 

 

{
//cout << "This is a zero-argument constructor" << endl;
}

 

SampleB(int x) : SampleA(x)     // // this constructor simply invokes the one-argument constructor from the base class 
{
//cout << "This is a one-argument constructor" << endl;
}

 

 

void modify ()
{
if (num>10)
    {
    num = 100*num;
    }
else
    {
    SampleA::modify(); // inside the derived class also, the priority order can be undermined through the :: operator
    }

 

}

 

 

 

////////////////////////////////

 


SampleA operator -- ()
{
return SampleA(--num);  // derived class accesses constructor of base class
}

 


};

 

////////////////////////////////////////////////////
////////////////////////////////////////////////////
////////////////////////////////////////////////////
////////////////////////////////////////////////////

 


class SampleC : public SampleB  // class is derived from the base class SampleB

 

{

 


//////////////////////////////////////

 

public:

 

SampleC(): SampleB(0)         // this constructor simply invokes the zero-argument constructor from the base class 

 

{
//cout << "This is a zero-argument constructor" << endl;
}

 

SampleC(int x) : SampleB(x)     // // this constructor simply invokes the one-argument constructor from the base class 
{
//cout << "This is a one-argument constructor" << endl;
}

 

 

void modify ()
{
if (num>10)
    {
    num = 100*num;
    }
else
    {
    SampleB::modify(); // inside the derived class also, the priority order can be undermined through the :: operator
    }

 

}

 

 

 

////////////////////////////////

 


SampleB operator -- ()
{
return SampleB(--num);  // derived class accesses constructor of base class
}

 


};

 

 

 

 

 


////////////////////////////////////////////////////
////////////////////////////////////////////////////
////////////////////////////////////////////////////
////////////////////////////////////////////////////

 


int main ()
{

 

SampleA s1;

 

SampleB s2;   // object of the derived class

 


//s1.aug_num();

 

 

/*
s2.aug_num();
s2.aug_num();

 

*/

 

++s1;
++s2;
++s2;

 

s2++;

 

cout << "First number = " ;
s1.show_num();

 

--s2;
--s2;
cout << "Second number = " ;
s2.show_num();    // object of derived class accesses public member funcion of base class

 

SampleB s3; // automatically invokes the zero argument constructor

 

cout << "Third number = " ;
s3.show_num();

 

SampleB s4(10); // cannot access constructor if any arugment is to be passed to it

 

cout << "Fourth number = " ;

 

//s4.Sample::modify();   // accessing the modify function of the base class through an object of the derived class
                         // we are using the :: or double colon or scope resolution op.

 


//s4.modify();   // by order of priority, this invokes the modify function of the derived class rather than that of the base class

 


s4.modify();

 

s4.show_num();

 

SampleC s5(11);
cout << "Fifth number = " ;

 

s5.modify();

 

s5.show_num();

 

 


return 0;
}