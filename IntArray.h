//
// Created by ADMIN on 12/18/2021.
//

#ifndef INTARRAY_INTARRAY_H
#define INTARRAY_INTARRAY_H
class IntArray
{
private:
    int *aptr;
    int arraySize;
    void subscriptError();
public:
    IntArray(int);//constructor
    IntArray(const IntArray &);//Copy Constructor
    ~IntArray();//Destructor
    int size()const//return the array size
    {return arraySize;}
    int &operator[](const int &);//Overloaded [] operator
};
#endif //INTARRAY_INTARRAY_H
