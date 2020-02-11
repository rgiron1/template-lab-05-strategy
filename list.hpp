#ifndef __LIST_HPP__
#define __LIST_HPP__
#include <list>
using namespace;

class List : public Container{

void set_sort_function(Sort* s){
sort_function = s;
}

virtual void sort(){
sort_function->sort(&l);
}

virtual Base* at(int i){
return l[i];
}

virtual void print(){
for(auto const &i : l){
cout << i->stringify() << '\n';
}
}

virtual int size(){
return l.size();
}

virtual void swap(int i, int j){
Base * temp = l[i];
l[i] = l[j];
l[j] = temp;
}

virtual void add_element(Base* element){
l.push_back(element);
}

private:
list<Base*> l;

};

#endif
