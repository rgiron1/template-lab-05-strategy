#ifndef __BS_HPP__
#define __BS_HPP__

#include "container.hpp"

class Container;

class BubbleSort : public Sort {
    public:

        /* Pure Virtual Functions */
        virtual void sort(Container* num){
	int i, j, flag = 1;    // set flag to 1 to start first pass
      Base* temp;             // holding variable
      int numLength = num->size(); 
      for(i = 1; (i <= numLength) && flag; i++)
     {
          flag = 0;
          for (j=0; j < (numLength -1); j++)
         {
               if (num->at(j+1)->evaluate() > num->at(j)->evaluate())      // ascending order simply changes to <
              {
num->swap(j, j+1);
                    flag = 1;               // indicates that a swap occurred.
               }
          }
     }
     return;   //arrays are passed to functions by address; nothing is returned
}
};

#endif 
