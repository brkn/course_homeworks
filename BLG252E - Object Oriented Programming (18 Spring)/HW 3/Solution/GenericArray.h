#ifndef GENERICARRAY_H
#define GENERICARRAY_H

using namespace std;

template <class t1>
class genericArray{
    int size;
    public:
		t1* elements;
        t1 total;
        genericArray(int givensize);
        ~genericArray();
        t1 sum();
};
#endif