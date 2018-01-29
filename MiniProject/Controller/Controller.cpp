//
//  Controller.cpp
//  MiniProject
//
//  Created by Zettler, Dylan on 1/25/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "Controller.hpp"

using namespace std;

Controller :: Controller()
{
    
}

void Controller :: start()
{
    for (int index = 13; index < 31; index++)
    {
        cout << "Dylan Zettler" << index + 1 << " times" << endl;
    }
}

#include <vector>  //for std::vector
#include <string>  //for std::string

std::vector<std::string> data;

int main ()
{
    int firstvalue, secondvalue;
    int * mypointer;
    
    mypointer = &firstvalue;
    *mypointer = 10;
    mypointer = &secondvalue;
    *mypointer = 20;
    cout << "firstvalue is " << firstvalue << '\n';
    cout << "secondvalue is " << secondvalue << '\n';
    return 0;
}
