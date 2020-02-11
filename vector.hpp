#ifndef __VECTOR_HPP__
#define __VECTOR_HPP__
#include "container.hpp"
using namespace std;


class Vector : public Conainter{
private:
	vector<Base*> Vec;
public:

	void set_sort_function(Sort* s){
	sort_function = s;
	}

        virtual void add_element(Base* element) {
	vec.pushback(element);
	}

        virtual void print() = {
	for(int i = 0; i < vec.size(); i++){
	cout << vec.at(i)->stringify();
	}
	}

        virtual void sort() {
	sort_function->sort(&vec);

	}

	virtual void swap(int i, int j) {
	temp = vec.at(i);
	vec.at(i) = vec.at(j);
	vec.at(j) = temp;
	}

        virtual Base* at(int i) {
	return vec.at(i);
	}

        virtual int size() {
	return vec.size();
	}








}
#endif
