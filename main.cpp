//
//  main.cpp
//  test 1
//
//  Created by Pedro Matos on 15/11/2021.
//


#include <iostream>
#include <fstream>
#include "Test 1.hpp"
#include <unistd.h>
#include "Character.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    

    std::cout << "#     #                                                              #######                   #####                       "<<std::endl;

    std::cout << "#  #  # ###### #       ####   ####  #    # ######    #####  ####        #    #    # ######    #     #   ##   #    # ###### "<<std::endl;
    
    std::cout << "#  #  # #      #      #    # #    # ##  ## #           #   #    #       #    #    # #         #        #  #  ##  ## #      "<<std::endl;
    
    std::cout << "#  #  # #####  #      #      #    # # ## # #####       #   #    #       #    ###### #####     #  #### #    # # ## # #####  "<<std::endl;
    
    std::cout << "#  #  # #      #      #      #    # #    # #           #   #    #       #    #    # #         #     # ###### #    # #      "<<std::endl;
    
    std::cout << "#  #  # #      #      #    # #    # #    # #           #   #    #       #    #    # #         #     # #    # #    # #      "<<std::endl;
    
    std::cout << " ## ##  ###### ######  ####   ####  #    # ######      #    ####        #    #    # ######     #####  #    # #    # ###### "<<std::endl;

    loadingscreen();
    usleep(299900);
    
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<"Welcome outsider!"<<endl;
    usleep(199900);
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<" "<<endl;
    cout<<"I'm Rivet! You may not know me yet, but I will be your guide along this incredible journey that is just ahead!" << endl;
    playerCreation();
    
    return 0;
}
