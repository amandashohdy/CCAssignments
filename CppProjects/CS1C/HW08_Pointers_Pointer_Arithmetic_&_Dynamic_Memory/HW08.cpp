// hw08.cpp
// to illustrate pointers, pointer arithmetic & dynamic memory

/*************************************************************************
 * AUTHOR     : Professor John Kath
 * EDITOR     : Amanda Shohdy
 * HW08       : pointers, pointer arithmetic & dynamic memory
 * CLASS      : CS 1C
 * SECTION    : TTH 1:30 - 3:50 pm
*************************************************************************/

#include <iostream>

using namespace std;

// function definitions go into hw08.cpp:

// hw08.cpp

namespace hw08 {

const int ARRAY_SIZE = 5;
const int DYNAMIC_SIZE = 15;
const int TIC_TAC_TOE_SIZE = 3;

// function definitions:

//------------------------------------------------------------------------------

int  increment_value(int x)
    // pass a value, compute a new value by adding 5 to x and return it
{
    x += 5 ;
              // temp, replace when defining function
    return x; // included so that incomplete lab code will compile
}

void increment_pointer(int* p)
    // pass a pointer, increment value of p by 1
{
    *p += 1 ;
}      

void increment_reference(int& r)
    // pass a reference, increment value of r by 1
{
    r += 1 ;
}

//------------------------------------------------------------------------------

void print_2darray_subscript(double twoDD[][ARRAY_SIZE], int row, int col)
    // print array using subscripts
{
    for(int i=0;i<row;i++)
    {
        for(int j=0; j<col; j++) cout << twoDD[i][j] << " ";
        cout << endl;
    }
    cout << endl;
}

void print_2darray_pointer(double* twoDD, int row, int col)
    // print array using pointer arithmetic
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            // our 2d array is layed out linearly in memory as contiguous rows, one after another, there are #row rows
            // each row has #col columns

            // to compute the offset using pointer math
            // offset from twoDD: #row (i) * #col + #col (j), result: pointer to array element
            // ...
            cout << twoDD[i * col + j] << " " ;
        }
        cout << endl;
    }
    cout << endl;
}

//------------------------------------------------------------------------------

void print_2darray_dynamic_subscript(int** twoDD, int row, int col)
    // print array using subscripts
{
    for(int i=0;i<row;i++)
    {
        for(int j=0; j<col; j++) cout << twoDD[i][j] << " ";
        cout << endl;
    }
    cout << endl;
}

void print_2darray_dynamic_pointer(int** twoDD, int row, int col)
    // print array using pointer arithmetic
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            // our dynamic 2d array is an array of int pointers
            // each component in the array itself points to an array of ints
            // dynamic array rows are not contiguous in memory

            // to compute the offset using pointer math
            // offset from twoDD: move to the correct row, add #row (i), dereference to obtain pointer to row
            //                    next, add #col (j), result: pointer to array element
            // ...
            cout << *(twoDD[i]+j) << " " ;
        }
        cout << endl;
    }
    cout << endl;
}

//------------------------------------------------------------------------------

double* dynamic_allocation_array_doubles(int array_size)
    // the caller is responsible for the memory allocated
{
    int* pi_array = new int[DYNAMIC_SIZE];
    // function uses pi_array
    // function responsible for cleaning up (i.e. deleting) memory allocated for pi_array
    // do stuff here with pi_array
    double* pd_array = new double[array_size];
    // ...    // dynamic memory allocated for pi_array not needed any longer, free it
    delete [] pi_array ;
    return pd_array;
}

//------------------------------------------------------------------------------

} // hw08

//------------------------------------------------------------------------------

int main()
{
    // console header
	cout << endl;
	cout << "***************************************** " << endl;
	cout << "*             Running HW08              * " << endl;
	cout << "*      Programmed by Amanda Shohdy      * " << endl;
	cout << "*          CS1C TTH 1:30-3:50p          * " << endl;
	cout << "***************************************** " << endl;
	cout << endl;

	// complete the following pointer examples
    // indicate if the requested operation is not allowed, why not?
	// Q#1 - pointer examples
    int x = 10;
    // ... // [1.1] variable p of type pointer to int points to x (i.e. int* p = ?;), use & to get the address of x
    int* p = &x ;

    // ... // [1.2] variable q of type pointer to double is points to x
    //double* q = &x ;

    // ... // [1.3] update the value of p to 5, use * to assign to x through p
    *p = 5 ;

    // ... // [1.4] store the value of p in variable x2 of type int, use * to read x through p
    int x2 = *p ;

    // ... // [1.5] variable p2 of type pointer to int points to x2, use & to get a pointer to x2
    int* p2 = &x2 ;

    // ... // [1.6] assign p to p2, p2 and p both point to x
    p2 = p ;

    // ... // [1.7] point p to x2, what does p2 point to now?
    p = &x2 ;



	// complete the following reference examples
    // indicate if the requested operation is not allowed, why not?
	// Q#1 - reference examples
    int y = 50;
    // ... // [1.8] variable r of type reference to int refers to y (i.e. int& r = ?;), nothing special to do here in the initializer
    int& r = y ;
    // ... // [1.9] variable s of type reference to double refers to y
    //double& s = y ;

    // ... // [1.10] update the value of r to 10, assign to y through r (notice * is not needed)
    r = 10 ;

    // ... // [1.11] store the value of r in variable y2 of type int, read y through r (notice * is not needed)
    int y2 = r ;

    // ... // [1.12] variable r2 of type reference to int refers to y2, get a reference to int y2
    int& r2 = y2 ;

    // ... // [1.13] assign r to r2, the value of y is assigned to y2 
    r2 = r ;

    // ... // [1.14] assign y2 to r, r2 and r both point to y2
    r = y2 ;

    // ... // [1.15] variable r3 of type reference to int is defined but not initialized (i.e. does not refer to an int)
    //int& r3 ;


	// Q#1 - pointer vs reference: increment functions
    // implementation the function definitions for the following increment operations
    { // allows definition of variables within block scope avoiding redefinition errors
        int x = 100;
        int x2 = 25;
        int* p = &x2;
        int& r = x;

        cout << "increment pointer vs reference" << endl << endl;

        cout << x << endl;
        cout << hw08::increment_value(x) << endl; // x not changed when passed by value
        cout << x << endl;

        cout << x2 << endl;
        hw08::increment_pointer(p); // p points to x2, x2 updated
        cout << x2 << endl;

        cout << x << endl;
        hw08::increment_reference(r); // r refers to x, x updated
        cout << x << endl;
    }

	// complete the following pointer arithmetic examples
    // indicate if the requested operation is not allowed, why not?
	// Q#2 - pointer arithmetic
    double aDoubles[10];
    double aDoubles2[10];
    for (int i = 0 ; i < 10 ; i++)      // valgrind giving error based on uninitialized values
    {                                   // in aDoubles array. All values initialized to 0.
        aDoubles[i] = 0 ; 
    }
    double* pd = &aDoubles[5]; // point to aDoubles[5]
    double* pd2 = &aDoubles[7]; // point to aDoubles[7]
    double* pd3 = &aDoubles2[7]; // point to aDoubles[7]

    *pd = 3;
    pd[2] = 4;
    pd[-3] = 5;
    pd2[5] = 6;

    // ... // [2.1] move pd three elements to the right
    pd = pd + 3 ;
    // ... // [2.2] move pd six elements to the left
    pd = pd - 6 ;
    //pd += 1000;    // [2.3] // ... error explain
    //double d = *pd;// [2.4] // ... error explain
    //*pd = 12.34;   // [2.5] // ... error explain

    // ... // [2.6] compute the number of elements between pd and pd2 by taking the difference between pd2 and pd
    int dif1 = pd2 - pd ;
    //int dif2 = pd + pd2; // [2.7] // ... error explain
    //int dif3 = pd2 - pd3;// [2.8] // ... error explain

    cout << endl << "print array of doubles forward and backward" << endl << endl;

    // [2.9] print array going forwards
    // p starts at address aDoubles[0], ends at address &aDoubles[9], increment p, cout value pointed to by p
    //for (double* p = // ... ) cout << // ...  << '\n';
    for (double* ptr = aDoubles ; ptr <= &aDoubles[9] ; ptr++)
    {
        cout << *ptr << " " ;
    }
    cout << endl;

    // [2.10] print array going backwards
    // p starts at address aDoubles[9], ends at address &aDoubles[0], decrement p, cout value pointed to by p
    //for (double* p = // ... ) cout << // ...  << '\n';
    for (double* ptr = &aDoubles[9] ; ptr >= &aDoubles[0] ; ptr--)
    {
        cout << *ptr << " " ;
    }
    cout << endl;

    double* pd4 = &aDoubles[0];
    double* pd5 = aDoubles+5;
    double* pd6 = &aDoubles[5];
    double* pd7 = &aDoubles2[5];
    // [2.11] using the equality operator, compare pointers to array elements
    cout << endl ;
    if (pd4 == pd5) 
        cout << "pointers pd4 and pd5 point to the same element of the array" << endl;
    if (pd5 == pd6)
        cout << "pointers pd5 and pd6 point to the same element of the array" << endl;
    if (pd5 == pd7)
        cout << "pointers pd5 and pd7 point to the same element of the array" << endl;
    if (pd6 == pd7)
        cout << "pointers pd6 and pd7 point to the same element of the array" << endl;
    // [2.12] ... error explain
    //if (pd6 != pd7) cout << "pointers point to the different elements of the array" << endl;

	// complete the following function implementations
	// Q#3 - pointer arithmetic, indexing multidimensional arrays
    double twoDDoubles[hw08::ARRAY_SIZE][hw08::ARRAY_SIZE] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
    
    cout << endl << "print 2d array of doubles" << endl << endl;

    // print 2ddoubles via subscript operator
    hw08::print_2darray_subscript(twoDDoubles, hw08::ARRAY_SIZE, hw08::ARRAY_SIZE);
    // print 2ddoubles via pointer arithmetic
    hw08::print_2darray_pointer((double*)twoDDoubles, hw08::ARRAY_SIZE, hw08::ARRAY_SIZE);

	// complete the following dynamic allocation examples
	// Q#4 - new, delete operator examples
    {
        int* pi = new int;                              // [4.1] allocate one int
        int* qi = new int[5];                           // [4.2] allocate five ints (an array of 5 ints)
        int& ri = *pi;
        int& ri2 = *qi;
        int*& ri3 = qi;
        ri = 100;
        ri2 = 200;

        double* pd = new double;                        // [4.3] allocate one double
        double* qd = new double[hw08::DYNAMIC_SIZE];    // [4.4] allocate DYNAMIC_SIZE doubles (an array of DYNAMIC_SIZE doubles)

        //pi = pd;  // [4.5] pi points to pd
                    // ... error explain
        //pd = pi;  // [4.6] pd points to pi
                    // ... error explain

        double x = *pd;       // read the (first) object pointed to by pd
        double y = qd[5];     // read the sixth object pointed to by qd
        double z = *(qd+10);  // read the tenth object pointed to by qd

        delete pd;
        delete [] qd;

        cout << endl << "ri, ri2, ri3 before delete" << endl << endl;

        cout << ri << endl;   // ri refers to *pi
        cout << ri2 << endl;  // ri2 refers to *qi
        cout << ri3 << endl;  // ri3 refers to qi

        delete pi;            // [4.7] how are the values of ri, ri2, ri3 affected by delete statement?
        delete [] ri3;        // [4.8] how are the values of ri, ri2, ri3 affected by delete statement?

        cout << endl << "ri, ri2, ri3 after delete" << endl << endl;
        cout << "the reading of uninitialzed values cause errors when running valgrind" << endl ;
        cout << "the lines of code are commented out to avoid errors." << endl << endl ;

        //cout << ri << endl;
        //cout << ri2 << endl;
        //cout << ri3 << endl << endl;
    }

    double* array_of_doubles = hw08::dynamic_allocation_array_doubles(1000);
    // use array_of_doubles here
    // ... // [4.9] free array, no longer needed
    delete [] array_of_doubles ;

	// Q#5 - dynamic 2d arrays, indexing via subscript operator, pointer arithmetic

    // tic tac toe board is an array of int pointers
    // each int pointer in the board points to a row

    // declare a pointer to an array of int pointers (i.e. a pointer to a pointer of type int)
    int** p_p_tictactoe = new int*[hw08::TIC_TAC_TOE_SIZE];
    // ...  // [5.1] row1: dynamically allocate int[TIC_TAC_TOE_SIZE], use initializer list to init to {1,0,0}
    p_p_tictactoe[0] = new int[hw08::TIC_TAC_TOE_SIZE] {1, 0, 0} ;
    // ...  // [5.2] row2: dynamically allocate int[TIC_TAC_TOE_SIZE], use initializer list to init to {0,1,0}
    p_p_tictactoe[1] = new int[hw08::TIC_TAC_TOE_SIZE] {0, 1, 0} ;
    // ...  // [5.3] row3: dynamically allocate int[TIC_TAC_TOE_SIZE], use initializer list to init to {0,0,1}
    p_p_tictactoe[2] = new int[hw08::TIC_TAC_TOE_SIZE] {0, 0, 1} ;

    // print 2dints via subscript operator
    hw08::print_2darray_dynamic_subscript(p_p_tictactoe, hw08::TIC_TAC_TOE_SIZE, hw08::TIC_TAC_TOE_SIZE);
    // print 2dints via pointer arithmetic
    hw08::print_2darray_dynamic_pointer(p_p_tictactoe, hw08::TIC_TAC_TOE_SIZE, hw08::TIC_TAC_TOE_SIZE);

    // clean up board, go in reverse order of declaration

    // [5.4] delete individual rows (i.e. rows are int arrays, use delete [])
    //for(// ...) // ...
    for (int i = 0 ; i < hw08::TIC_TAC_TOE_SIZE ; i++) 
    {
        delete [] p_p_tictactoe[i] ;
    }
    // [5.5] delete board (board is an array of int pointers, use delete [])
    // ...
    delete [] p_p_tictactoe ;


    return 0;
}

//------------------------------------------------------------------------------

// WRITTEN ANSWERS

// add written answers here ... Q#1 Q#3 Q#5

// Q#1
// (1.1)    operation is allowed
// (1.2)    operation is not allowed, a double pointer cannot point to an integer variable
// (1.3)    operation is allowed
// (1.4)    operation is allowed
// (1.5)    operation is allowed
// (1.6)    operation is allowed
// (1.7)    p2 points to the memory address of the variable x
// (1.8)    operation is allowed
// (1.9)    operation is not allowed, a double reference cannot be assigned an integer variable
// (1.10)   operation is allowed
// (1.11)   operation is allowed
// (1.12)   operation is allowed
// (1.13)   operation is allowed
// (1.14)   operation is allowed
// (1.15)   operation is not allowed, a reference needs to be associated with a specific memory address
// (1)      A pointer is a variable that stores the memory address of a given variable. A reference is 
//          a variable that refers to the same memory address as another variable. The a pointer has its
//          own memory address that stores a memory address. A reference shares a memory address with
//          another variable.

//Q#2
// (2.1)    operation is allowed
// (2.2)    operation is allowed
// (2.3)    operation is not allowed, operation is out of range
// (2.4)    
// (2.5)    
// (2.6)    operation is allowed
// (2.7)    operation is not allowed, results in useless pointer
// (2.8)    operation is allowed, but does not result in elements between the two pointers. Results in the offset
// (2.9)    operation is allowed
// (2.10)   operation is allowed
// (2.11)   operation is allowed
// (2.12)   

//Q#3
// (3)      The two arrays are laid out lineraly in memory as contiguous rows. Because we are dealing with an offset
//          twoDDoubles must be cast to a double*.

//Q#4
// (4.1)    operation is allowed
// (4.2)    operation is allowed
// (4.3)    operation is allowed
// (4.4)    operation is allowed
// (4.5)    operation is not allowed, incompatible types
// (4.6)    operation is not allowed, incompatible types
// (4.7)    value ri is affected by the statement because the data in the memory location it refers to has been deleted
//          ri now points to an undefined area of memory.
// (4.8)    values ri2 and ri3 are affected by the statement because ri2 referred to the first value in the qi array. 
//          when [] ri3 is deleted, the reference to the memory of the qi array is deleted, so ri2 now refers to an 
//          undefined area of memory. ri3 is unchanged because it still refers to the same memory address. 
// (4.9)    operation is allowed

//Q#5
// (5.1)    operation is allowed
// (5.2)    operation is allowed
// (5.3)    operation is allowed
// (5.4)    operation is allowed
// (5.5)    operation is allowed
// (5)      The p_p_tictactoe array is laid out in memory so that each component in the subsequent array points to an array
//          of ints. The arrays are not contiguous in memory. We need to pass a pointer to a pointer because the first 
//          dimension of the pointer points to the addresses of the rows, the rows then each point to the data within the 
//          columns of the 2d array. 
