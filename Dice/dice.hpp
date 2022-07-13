//
//  dice.hpp
//  Fun-With-Cpp
//
//  Created by Christopher Strickland on 7/8/22.
//

#ifndef Dice_hpp
#define Dice_hpp

#include <stdio.h>
#include<iostream>
#include <time.h>
#include<random>
#include<unistd.h>
//#include <string>//needed for string literals R"()"? idk

using namespace std;

#endif /* Dice_hpp */

class Dice {

//private:


public:
    int sides;
    int top;

    //constructor
    Dice(int sides){
        this->sides = sides;

        //cout << "You just created a die object with " << sides << " sides.\n\n";
    }

    //roll
    int roll(){

        //sleep(rand() % 2);
        //srand(rand() % 4);

        int top = rand() % sides + 1;
        //cout << "You just rolled " << top << " on a " << sides << " sided die." << endl;
        dicePrinter(top);
        this->top = top;
        return top;
    }
    
    void dicePrinter(int top){
        
        if(top == 1){
            cout << R"(
            .----------------.
           | .--------------. |
           | |     __       | |
           | |    /  |      | |
           | |    `| |      | |
           | |     | |      | |
           | |    _| |_     | |
           | |   |_____|    | |
           | |              | |
           | '--------------' |
            '----------------' )";
            //seems impossible to make dice print horizontally :(
            //cout << R"(test
//asx)";
            
    }
        if(top == 2){
            cout << R"(
            .----------------.
           | .--------------. |
           | |    _____     | |
           | |   / ___ `.   | |
           | |  |_/___) |   | |
           | |   .'____.'   | |
           | |  / /____     | |
           | |  |_______|   | |
           | |              | |
           | '--------------' |
            '----------------' )";
    }
        if(top == 3){
            cout << R"(
            .----------------.
           | .--------------. |
           | |    ______    | |
           | |   / ____ `.  | |
           | |   `'  __) |  | |
           | |   _  |__ '.  | |
           | |  | \____) |  | |
           | |   \______.'  | |
           | |              | |
           | '--------------' |
            '----------------' )";
    }
        if(top == 4){
            cout << R"(
            .----------------.
           | .--------------. |
           | |   _    _     | |
           | |  | |  | |    | |
           | |  | |__| |_   | |
           | |  |____   _|  | |
           | |      _| |_   | |
           | |     |_____|  | |
           | |              | |
           | '--------------' |
            '----------------' )";
            
    }
        if(top == 5){
            cout << R"(
            .----------------.
           | .--------------. |
           | |   _______    | |
           | |  |  _____|   | |
           | |  | |____     | |
           | |  '_.____''.  | |
           | |  | \____) |  | |
           | |   \______.'  | |
           | |              | |
           | '--------------' |
            '----------------' )";
    }
        if(top == 6){
            cout << R"(
            .----------------.
           | .--------------. |
           | |    ______    | |
           | |  .' ____ \   | |
           | |  | |____\_|  | |
           | |  | '____`'.  | |
           | |  | (____) |  | |
           | |  '.______.'  | |
           | |              | |
           | '--------------' |
            '----------------' )";
    }
        else if(top < 1 || top > 6)cout << "this must not be a 6-sided die???";
            
    }

};





