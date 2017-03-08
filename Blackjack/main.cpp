//
//  main.cpp
//  Blackjack
//
//  Created by Dakota Klasky on 3/7/17.
//  Copyright © 2017 Dakota Klasky. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    std::string bet;
    std::string answer;
    std::cout<<"Please place your bet";
    std::cin>> bet;
    std::cout<< "Do you want another card";
    std::cin>> answer;
    if (answer == "yes") {
        //give new card
    }
    if (answer == "no"){
        //count cards
    }
    return 0;
}
