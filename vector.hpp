#ifndef __VECTOR_HPP__
#define __VECTOR_HPP__
#include "container.hpp"
#include <vector>
#include <iostream>
using namespace std;


class Vector : public Container{
private:
	vector<Base*> vec;
public:

        virtual void add_element(Base* element) {
	vec.push_back(element);
	}

        virtual void print() {
	for(int i = 0; i < vec.size(); i++){
	cout << vec.at(i)->stringify();
	}
	}

        virtual void sort() {
	sort_function->sort(this);

	}

	virtual void swap(int i, int j) {
	Base* temp = vec.at(i);
	vec.at(i) = vec.at(j);
	vec.at(j) = temp;
	}

        virtual Base* at(int i) {
	return vec.at(i);
	}

        virtual int size() {
	return vec.size();
	}








};
#endif
