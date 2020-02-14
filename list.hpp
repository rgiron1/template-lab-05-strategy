#ifndef __LIST_HPP__
#define __LIST_HPP__
#include <list>
#include <iostream>
using namespace std;


class List : public Container{

void set_sort_function(Sort* s){
sort_function = s;
}

virtual void sort(){
sort_function->sort(this);
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

list<Base *>::iterator t1 = l.begin();
list<Base *>::iterator t2 = l.begin();

std::advance(t1, i);
std::advance(t2, j);

Base * temp = *t1;
*t1 = *t2;
*t2 = temp;

}

virtual Base* at(int i){
list<Base *>::iterator it = l.begin();

std::advance(it, i);
return *it;
}

virtual void add_element(Base* element){
l.push_back(element);
}

private:
list<Base*> l;

};

#endif
