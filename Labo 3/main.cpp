//
//  main.cpp
//  Labo 3
//
//  Created by Damiaan Dufaux on 24/02/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#include <iostream>
#include "IntArray.h"

using namespace std;

void ex1 (){
	double * a = new double [5];
	*a = 2;
	*(a+1) = *a*2;
	a[2] = *a**(a+1);
	cout << a[0] << " " << a[1] << " " << a[2] << endl;
	a+=1;
	*(a+1) = *(a-1)*3;
	cout << *a << " " << *(a+1) << endl;
}

void ex2 (){
	double b[] = {9,7,5,3,1};
	double* p1 = b;
	double* p2 = &b[1];
	double **q1 = &p1;
	double **q2 = &p2;
	cout << *p1 << " " << *p2 << endl;
	(*q1)++;
	*p2 = *(p1+2);
	p2 +=2;
	cout << *p1 << " " << *p2 << endl;
	q1 = q2;
	p1--;
	**q1 = *(p1++);
	cout << *p1 << " " << *p2 << endl;
}

void printIntArry(IntArray *intArray) {
	for (int i = 0; i < intArray->getLength(); ++i) {
		cout << intArray->get(i) << ((i < intArray->getLength()-1) ? " " : "");
	}
	cout << endl;
}

void ex3() {
	IntArray myArray = IntArray(10);
	for (int i=0; i<myArray.getLength(); ++i) {
		myArray.set(i, 10-i);
		cout << myArray.get(i) << " ";
	}
	cout << endl;
	
	myArray.resize(11);
	printIntArry(&myArray);
	
	myArray.resize(6);
	printIntArry(&myArray);
	
	myArray.resize(3);
	for (int i=0; i<myArray.getLength(); ++i) myArray.set(i, i+1);
	myArray.insertBefore(0,5);
	printIntArry(&myArray);
	
	myArray.resize(3);
	for (int i=0; i<myArray.getLength(); ++i) myArray.set(i, i+1);
	myArray.insertBefore(1,5);
	printIntArry(&myArray);
}

int main(int argc, const char * argv[]) {
//	ex1();
	
//	ex2();
	
	ex3();
	
	return 0;
}
