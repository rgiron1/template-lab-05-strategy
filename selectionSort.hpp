#ifndef __SS_HPP__
#define __SS_HP__
#include "sort.hpp"
using namespace std;

class Container;

class SelectionSort : public Sort{
public:
	virtual void sort(Container* num)
{
	Base* temp;
      int i, j, first;
      int numLength = num->size();
      for (i= numLength - 1; i > 0; i--)
     {
           first = 0;                 // initialize to subscript of first element
           for (j=1; j<=i; j++)   // locate smallest between positions 1 and i.
          {
                 if (num->at(j) < num->at(first))
                 first = j;
          }
         temp = num->at(first);   // Swap smallest found with element in position i.
         *(num->at(first)) = *(num->at(i));
         *(num->at(i)) = *temp;
     }
     return;
}

};


#endif
