// hw10.cpp
// to illustrate copy & move constructors, assignment operators

/*************************************************************************
 * AUTHOR     : Professor John Kath
 * EDITOR     : Amanda Shohdy
 * Lab #6     : copy & move constructors, assignment operators
 * CLASS      : CS 1C
 * SECTION    : TTH 1:30 - 3:50p
*************************************************************************/

#include <iostream>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::istream;
using std::ostream;

// file hw10.h

namespace hw10 {

//--Q#1,2,3,4-------------------------------------------------------------------

// a basic implementation of our stl like vector class
// basic vector is a fixed size array of doubles

class vector {
    int vsize;
    double* elem;
    void copy(const vector& source);              // copy elements from source into *elem
public:
    vector(int s) : vsize{s}, elem{new double[s]} { } // constructor
    vector(const vector&);                        // copy constructor: defines the copy operation
    vector(vector&&) noexcept ;                             // move constructor: defines the move operation
    ~vector() { delete[] elem; }                  // destructor

    int size() const { return vsize; }            // the current size

    double get(int n) { return elem[n]; }         // access: read
    void set(int n, double v) { elem[n]=v; }      // access: write

    vector& operator=(const vector&);             // copy assignment
    vector& operator=(vector&&) noexcept ;                  // move assignment
};

//------------------------------------------------------------------------------

} // hw10

//------------------------------------------------------------------------------

// class member function, function definitions go into hw10.cpp:

// hw10.cpp

namespace hw10 {

// member function definitions:

//------------------------------------------------------------------------------

void vector::copy(const vector& source)
    // copy elements 0 to original.vsize-1
{
    for (int i=0; i<source.vsize; ++i) elem[i] = source.elem[i];
}

//--Q#1-------------------------------------------------------------------------

vector::vector(const vector& source) // copy constructor
    // allocate elements, then initialize them via copy operation
: vsize{source.vsize}, elem{new double[source.vsize]}
{
    // ... // use class defined copy operation
    copy(source) ;
}

//--Q#3-------------------------------------------------------------------------

vector::vector(vector&& source) noexcept // move constructor
	// copy source elem and vsize only, no need for copy operation
: vsize{std::move(source.vsize)}, elem{std::move(source.elem)} 
{
    source.vsize = 0 ;
    source.elem = nullptr ;
}

//--Q#2-------------------------------------------------------------------------

vector& vector::operator=(const vector& rhs) // copy assignment
    // make this vector a copy of the rhs (i.e. source)
{
    //double* pD = // ...               // allocate new space for double[]
    double* pD = new double[rhs.vsize] ;
    //std::copy(rhs.elem, rhs.elem + rhs.vsize, pD); // use std::copy algorithm to copy rhs elements into pD double[]
    std::copy(rhs.elem, rhs.elem + rhs.vsize, pD) ;
    // ...                              // deallocate old space
    delete [] elem ;
    // ...                              // now that we've copied new, deallocated old elems, reset elem pointer
    elem = pD ;
    // ...                              // reset vector size
    vsize = rhs.vsize ;
    return *this;                       // return a self-reference
}

//--Q#4-------------------------------------------------------------------------

vector& vector::operator=(vector&& rhs) noexcept // move assignment
	// move rhs (i.e. source) to this vector
{
	// ...                // deallocate old space
    delete [] elem ;
	// ...                // copy rhs’s elements and size, move implies copying element pointer only
	vsize = rhs.vsize ;
    elem = rhs.elem ;
    // ...                // empty the rhs vector
	rhs.elem = nullptr ;
    rhs.vsize = 0 ;
	return *this;         // return a self-reference
}

//------------------------------------------------------------------------------

// function definitions:

//--Q#5-------------------------------------------------------------------------

vector fill_doubles(istream& is, int size)
{
	vector temp{size};          // instantiate temp vector
	for (int i=0; i<size; i++)
    {
        double x;
        is >> x;                // store double from input stream in vector
        temp.set(i,x);
    }
	return temp;                // return temp by value, move constructor invoked
}

//------------------------------------------------------------------------------

ostream& print(ostream& os, vector& v)
    // print vector element values to the output stream
{
    for (int i=0; i<v.size(); ++i) os << v.get(i) << " ";
	return os;
}

//------------------------------------------------------------------------------

} // hw10

//------------------------------------------------------------------------------

using namespace hw10;

int main()
{
    // console header
	cout << endl;
	cout << "*************************************** " << endl;
	cout << "*            Running HW10             * " << endl;
	cout << "*     Programmed by Amanda Shohdy     * " << endl;
	cout << "*          CS1C 1:30 - 3:50p          * " << endl;
	cout << "*************************************** " << endl;
	cout << endl;

	// Q#1,2 - vector copy constructor and assignment operatior

    vector v{3};        // define a vector
    v.set(1,100.5);     // set v[1] to 100.5

    /* added code to fix valgrind errors */
    v.set(0, 0) ;
    v.set(2, 0) ;

    vector v2 = v;      // [1.1] copy v to v2: what happens here?
    v2.set(0,25);       // set v2[0] to 25
    
    cout << "v  double values: ";
    print(cout,v);
    cout << endl;
    cout << "v2 double values (after copy, set): ";
    print(cout,v2);
    cout << endl << endl;

    vector v3{3};
    vector v4{4};
    v3.set(2,3.3);
    v4.set(2,4.4);

    /* added code to fix valgrind errors */
    v3.set(0, 0) ;
    v3.set(1, 0) ;
    v4.set(0, 0) ;
    v4.set(1, 0) ;
    v4.set(3, 0) ;

    cout << "v3 double values: ";
    print(cout,v3);
    cout << endl;
    cout << "v4 double values: ";
    print(cout,v4);
    cout << endl;

    v3 = v4;            // [2.1] assign v4 to v3: what happens here?
    
    cout << "v3 double values (after assignment): ";
    print(cout,v3);
    cout << endl << endl;

    vector v5{10};
    v5 = v5;            // [2.2] self assignment: what happens here, any problems?


	// Q#5 - move assignment

    cout << "fill up v6 with five doubles" << endl;
    vector v6 = fill_doubles(cin,5); // temp vector in function scope moved to v6
    cout << "v6 double values: ";
    print(cout,v6);
    cout << endl;


    return 0;
}

//------------------------------------------------------------------------------

// WRITTEN ANSWERS

// add written answers here ... Q#5

// [1.1] The copy constructor is called for the object v2 using the values 
//       from object v. The copy constructor creates sets the attribute vsize 
//       of v2 to the vsize of v and creates a double array of size vsize for 
//       v2. The copy operation is then called and the values of the array v
//       are copied into the array of v2. 

// [2.1] The object v3 is set to the same values as v4. The elem attribute is 
//       initialized to the same values but points to a different place in memory.
// [2.2] In self assignment, the result is as if there was no change to the 
//       object in the first place. I don't think there are any problems. 

// [5]   The difference between a copy and a move operation is that a copy 
//       operation will copy the elements of an existing object into another
//       object. A move operation will transfer elements of an existing object
//       to another object.  
//       When the temp vector is returned by value, v6 is assigned to the rvalue
//       that was returned by the function. The move constructor is invoked. This
//       results in improved performance because a move constructor allows the 
//       the rvalue object to be moved into the new variable without being copied.
