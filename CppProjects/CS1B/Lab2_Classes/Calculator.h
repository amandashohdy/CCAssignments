#ifndef CALCULATORH
#define CALCULATORH

class Calculator {
    public:
       // TODO: Declare default constructor
       Calculator() ;

       // TODO: Declare member functions -
       //       Add(), Subtract(), Multiply(), Divide(), Clear(), GetValue()

       void Add(double val) ;
       void Subtract(double val);
       void Multiply(double val) ;
       void Divide(double val) ;
       void Clear() ;
       double GetValue() ;

    private:
       // TODO: Declare private data member - value
       double value ;
};

#endif
