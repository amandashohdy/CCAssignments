// hw15.cpp
// to illustrate stl containers & iterators

/*************************************************************************
 * AUTHOR     : Professor John Kath
 * EDITOR     : Amanda Shohdy
 * HW15       : stl containers & iterators
 * CLASS      : CS 1C
 * SECTION    : 1:30 - 3:50 p
*************************************************************************/

#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;

using std::vector;

// function & class definitions go into hw15.cpp:

// hw15.cpp

namespace hw15 {

//
// list conainter, iterator example code adapted from Chapter 20.4
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

//------------------------------------------------------------------------------

template<typename Elem>
struct Link
{
    Link* prev;    // previous link
    Link* succ;    // successor (next) link
    Elem  val;     // the value
    Link(const Elem& v = Elem(), Link* p = 0, Link* s = 0) : val{v}, prev{p}, succ{s} { }
};

//--Q#3-------------------------------------------------------------------------

template<typename Elem>
class list
{
    // representation and implementation details
public:
    class iterator;         // forward declaration of member type: class iterator
    class const_iterator;   // forward declaration of member type: class const_iterator

    list() : first(new Link<Elem>()), last{first} { }
    ~list()
    {
        while (first != last)
        {
            Link<Elem> *next = first->succ;
            delete first;
            first = next;
        }
        delete last;
    }

    iterator begin();   // iterator to first element
    iterator end();     // iterator to one beyond last element

    // add missing const iterators begin, end here

    // ...  // constant iterator to first element
    const_iterator begin() const ;
    // ...  // constant iterator to one beyond last element
    const_iterator end() const ;

    iterator insert(iterator p, const Elem& v); // insert v into list after p
    iterator erase(iterator p);                 // remove p from the list

    void push_back(const Elem& v);  // insert v at end
    void push_front(const Elem& v); // insert v at front
    void pop_front();   // remove the first element
    void pop_back();    // remove the last element

    Elem& front();      // the first element
    Elem& back();       // the last element

    Link<Elem>* first;
    Link<Elem>* last;   // one-beyond-the-last link
};

//--Q#4-------------------------------------------------------------------------

template<typename Elem>
class list<Elem>::iterator // definition for class iterator
{
    Link<Elem>* curr;   // current node
public:
    iterator(Link<Elem>* ptr) 
    : curr{ptr} { }

    iterator& operator++() // forward
    {
        curr = curr->succ ; 
        return *this ;
    }
    iterator& operator--() // backwards
    {
        curr = curr->prev ;
        return *this ;
    }
    Elem& operator*() // get value (dereference)
    {
        return curr->val ;
    }

    bool operator==(const iterator& source) const // lhs, rhs iterators point to the same node (equal)
    {
        return curr == source.curr ;
    }
    bool operator!=(const iterator& source) const // lhs, rhs iterators do not point to the same node (not equal)
    {
        return curr != source.curr ;
    }
};

//--Q#4-------------------------------------------------------------------------

template<typename Elem>
class list<Elem>::const_iterator // definition for class const_iterator
{
    const Link<Elem>* curr;   // current node
                              // node pointed to by curr is immutable (i.e. can't be changed)
                              // fine to modify curr pointer itself (i.e. pointer value stored in curr)
                              // refer to const correctness reading
public:

    // add missing constructor, overloaded ++, --, *, ==, != operators here
    const_iterator(const Link<Elem>* ptr) 
    : curr{ptr} {} 

    const_iterator& operator++() 
    {
        curr = curr->succ ;
        return *this ;
    }
    const_iterator& operator--() 
    {
        curr = curr->prev ;
        return *this ;
    }
    const Elem& operator*() const
    {
        return curr->val ;
    }

    bool operator==(const const_iterator& source) const 
    {
        return curr == source.curr ;
    }
    bool operator!=(const const_iterator& source) const
    {
        return curr != source.curr ;
    }
};

//------------------------------------------------------------------------------

template<typename Elem> 
typename list<Elem>::iterator list<Elem>::begin()  // iterator to first element
{ 
    return iterator(first); 
}

//--Q#3-------------------------------------------------------------------------

// constant iterator to first element
template<typename Elem>
typename list<Elem>::const_iterator list<Elem>::begin() const

// ... add missing constant iterator begin here
{
    return const_iterator(first) ;
}

//------------------------------------------------------------------------------

template<typename Elem> 
typename list<Elem>::iterator list<Elem>::end() // iterator to one beyond last element
{ 
    return iterator(last); 
}

//--Q#3-------------------------------------------------------------------------

// constant iterator to last element
template <typename Elem>
typename list<Elem>::const_iterator list<Elem>::end() const

// ... add missing constant iterator end here
{
    return const_iterator(last) ;
}

//------------------------------------------------------------------------------

template<typename Elem> 
void list<Elem>::push_front(const Elem& v) // insert v at front
{
    first = new Link<Elem>(v,0,first);
}

//
// low algorithms adapted from Chapter 20.1, 20.4
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

//--Q#5-------------------------------------------------------------------------

double* low_doubles(double* first, double* last)
    // return a pointer to the element in [first,last) that has the lowest value
{
    double l = -1;
    double* low = &l ;
    for(double* p = first; p!=last; ++p)
    {
        if (*p < l) { low = p; l = *p; }
    }
    return low;
}

//--Q#5-------------------------------------------------------------------------

// implement templated low algorithm here
template <typename Iterator>
Iterator low(const Iterator first, const Iterator last)
{
    Iterator i = first ;

    for (Iterator iterator = first ; iterator != last ; ++iterator)
    {
        if (*iterator < *i) i = iterator ;
    }
    return i ;
}

//------------------------------------------------------------------------------

} // hw15

//------------------------------------------------------------------------------

using namespace hw15;

//
// list conainter, iterator example code adapted from Chapter 20.4
// low algorithms adapted from Chapter 20.1, 20.4
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

int main()
{
    // console header
	cout << endl;
	cout << "************************************** " << endl;
	cout << "*           Running HW15             * " << endl;
	cout << "*    Programmed by Amanda Shohdy     * " << endl;
	cout << "*      CS1C TTH 1:30 - 3:50 p        * " << endl;
	cout << "************************************** " << endl;
	cout << endl;

	// Q#3,4 - containters & iterators

    list<int> myList;
    int x;
    while (cin >> x) myList.push_front(x);

	// Q#5 - low_doubles algorithm

    double d[] = {1,2,3,4,5,-99.25,100,10,500.123,5};       // init array of doubles
    vector<double> v = {1,2,3,4,5,-99.25,100,10,500.123,5}; // init identical vector of doubles

    double* lowa = low_doubles(&d[0], &d[9]); // min of array
    cout << endl << "low_doubles alg: double array min value is " << *lowa << endl << endl;

    double* middle = &v[0] + v.size()/2;
    double* lowv1 = low_doubles(&v[0], middle);          // min of vector first half
    double* lowv2 = low_doubles(middle, &v[0]+v.size()); // min of vector second half
    cout << "low_doubles alg: double vector min value first half is " << *lowv1 << endl;
    cout << "low_doubles alg: double vector min value second half is " << *lowv2 << endl << endl;

	// Q#5 - low algorithm

    // NOTE: uncomment code below once low algorithm definition is complete

    lowa = low(&d[0], &d[9]); // min of array
    cout << "low alg: double array min value is " << *lowa << endl << endl;

    lowv1 = low(&v[0], middle);          // min of vector first half
    lowv2 = low(middle, &v[0]+v.size()); // min of vector second half
    cout << "low alg: double vector min value first half is " << *lowv1 << endl;
    cout << "low alg: double vector min value second half is " << *lowv2 << endl << endl;

    list<int>::iterator p = low(myList.begin(), myList.end()); // min of list
    if (p==myList.end())    // did we reach the end?
        cout << "low alg: the list is empty";
    else
        cout << "low alg: the lowest value in the list is " << *p << endl;

    cout << endl << endl ;

    return 0;
}

//------------------------------------------------------------------------------

// WRITTEN ANSWERS

// Q#1
// STL Container: These are classes designed to store objects. The stardard sequence containers
//                are vector, deque, and list. The standard associative containers include set,
//                multiset, map, multimap, hash_set, hash_map, hash_multiset, and has_multimap.
//                There are also container adaptors queue, priority_queue, and stack. 
// STL Iterator:  These are generalizations of pointers. Iterators are used to traverse 
//                containers and point to the data inside them. The STL implements five 
//                different types of iterators: input iterators, output iterators, forward 
//                iterators, bidirectional iterators, and random-access iterators. 
// STL Algorithm: Algorithms are used to change or process data in containers. With the use of 
//                iterators, algorithms access the data stored in containers and perform 
//                operations. Some algorithms include search algorithms like binary and sequential 
//                search and sorting algorithms like bubble or sequential sort. 


// Q#2
// A container class is connected with an iterator that points to the container data. The 
// implementation of an iterator is separate from the iterator's use in an algorithm. In other words,
// an algorithm uses an iterator without understanding how the iterator is implemented. Since algorithms
// use the begin and end iterators to work on containers, algorithms are seen as templates that can 
// alter data in a container class. 


// Q#5
// Both algorithms serve the same purpose which is to find the lowest value in the container. Because of 
// the local variable l and low in low_doubles, the low_doubles algorithm is more limited than the low
// algorithm. The low algorithm is a more generic form of the low_doubles algorithm, making it more 
// easily utilized. 
// The reason that the value for the first half of vector v differs for low_doubles and low is because
// is low_doubles, the value of local variable l is set to -1, so the lowest value is only found if it is
// less than -1. 
