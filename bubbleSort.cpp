#ifndef __BS_HPP__
#define __BS_HPP__

#include "container.hpp"

class Container;

class BubbleSort {
    public:

        /* Pure Virtual Functions */
        virtual void sort(Container* num){
	int i, j, flag = 1;    // set flag to 1 to start first pass
      int temp;             // holding variable
      int numLength = num.size(); 
      for(i = 1; (i <= numLength) && flag; i++)
     {
          flag = 0;
          for (j=0; j < (numLength -1); j++)
         {
               if (num.at(j+1) > num.at(j))      // ascending order simply changes to <
              { 
                    temp = num.at(j);             // swap elements
                    num.at(j) = num.at(j+1);
                    num.at(j+1) = temp;
                    flag = 1;               // indicates that a swap occurred.
               }
          }
     }
     return;   //arrays are passed to functions by address; nothing is returned
}
};

#endif 
