//
//  dice.hpp
//  Fun-With-Cpp
//
//  Created by Christopher Strickland on 7/8/22.
//

#ifndef dice_hpp
#define dice_hpp

#include <stdio.h>
#include<iostream>
#include <time.h>
#include<random>
#include<unistd.h>

using namespace std;

#endif /* dice_hpp */

class dice {
    
//private:
//    int arraySize;
    
public:
    int sides;
    int top;
    
    //initializer
    dice(int sides){
        this->sides = sides;
        
        //cout << "You just created a die object with " << sides << " sides.\n\n";
    }

    //roll
    int roll(){
       
        //sleep(rand() % 2);
        //srand(rand() % 4);
        
        int top = rand() % sides + 1;
        cout << "You just rolled " << top << " on a " << sides << " sided die." << endl;
        this->top = top;
        return top;
    }
    
    
//    void bubbleSort(arr1[], arrackSize, arr2[], defendSize){
//        int i, j;
//        for(i=0; i<n-1; i++)
//            for(j=0;)
//
//
//
//    }
    
};


