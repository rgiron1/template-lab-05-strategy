#include "vector.hpp"
#include "selectionSort.hpp"

int main(){
Container * v = new Vector();
Sort *s = new SelectionSort() ;

v->set_sort_function(s);




return 0;
}
