#include "vector.hpp"
#include "selectionSort.hpp"
#include "op.hpp"
#include <iostream>
using namespace std;

int main(){
Container * v = new Vector();
Sort *s = new SelectionSort();

v->set_sort_function(s);
v->add_element(new Op(6));
v->add_element(new Op(7));
v->add_element(new Op(3));

v->add_element(new Op(5));
v->add_element(new Op(9));
v->add_element(new Op(4));
v->print();
cout << endl;
cout << v->size() << endl;
cout << v->at(2)->stringify() << endl;
//v->swap(0,2);
v->sort();
v->print();
cout << endl;


return 0;
}
