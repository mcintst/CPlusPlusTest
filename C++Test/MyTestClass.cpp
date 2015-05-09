//
//  MyTestClass.cpp
//  C++Test
//
//  Created by Stuart McIntosh on 6/5/15.
//  Copyright (c) 2015 Stuart McIntosh. All rights reserved.
//

#include "MyTestClass.h"
#include <string>

myClass::myClass(int value){
    theValue = value;
}

void myClass::Set(int value) {
    theValue = value;
}

int myClass::Add(int value) {
    theValue = theValue+value;
    return theValue;
}