//
//  IntArray.cpp
//  Labo 3
//
//  Created by Damiaan Dufaux on 24/02/15.
//  Copyright (c) 2015 Damiaan Dufaux. All rights reserved.
//

#include "IntArray.h"

void IntArray::resize(unsigned newLength) {
	if (newLength > 0) {
		int *newData = new int[newLength];
		int toCopy = fmin(length, newLength);
		for (int i = 0; i < toCopy; ++i) newData[i] = data[i];
		for (int i = toCopy; i<newLength; ++i) newData[i] = 0;
		
		delete [] data;
		data = newData;
		
		length = newLength;
	} else {
		data = 0;
	}
}

void IntArray::set(unsigned index, int value) {
	if (index<length) data[index] = value;
}

void IntArray::insertBefore(unsigned int index, int value) {
	if (index < length) {
		resize(length + 1);
		for (int i = length-1; i>index; --i) {
			data[i] = data[i-1];
		}
		data[index] = value;
	}
}