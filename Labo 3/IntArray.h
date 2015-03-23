//
//  IntArray.h
//  Labo 3
//
//  Created by Damiaan Dufaux on 24/02/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#ifndef __Labo_3__IntArray__
#define __Labo_3__IntArray__

#include <stdio.h>
#include <cmath>

class IntArray {
	
	int length = 0;
	int *data;
	
public:
	
	IntArray(int length) {resize(length);}
	~IntArray() {delete [] data;}
	void resize(unsigned length);
	
	int get(unsigned index) {return index<length ? data[index] : 0;}
	int getLength() {return length;}
		
	void set(unsigned index, int value);
	void insertBefore(unsigned index, int value);
	
	int * getData() {return data;}
	
};

#endif /* defined(__Labo_3__IntArray__) */
