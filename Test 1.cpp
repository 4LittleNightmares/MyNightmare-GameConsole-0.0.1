//
//  Test 1.cpp
//  test 1
//
//  Created by Pedro Matos on 15/11/2021.
//

#include <iostream>
#include <string>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <iostream>
#include "Test 1.hpp"

using namespace std;

int loadingscreen(){
    
    int i = 0;
    char load [26];
    while (i<25) {

        load[i++] = '|';
        load [i] = '\0';
        
        printf("\n\nLOADING [%-25s]", load);
        cout<<" "<<endl;
        usleep(190000);
    }
    return 0;
}
