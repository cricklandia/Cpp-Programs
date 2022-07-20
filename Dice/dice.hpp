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
//#include <string>//needed for string literals R"()"? idk

using namespace std;



class Dice {

//private:


public:
    int sides;
    int top;
    //default constructor
    Dice(){
        sides = 6;
    }
    
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
    
    void printStats(){
        
        cout << "Below are the game stats:";
        
        
    }
    
    void getSides(){
        cout << "This DIE object has " << sides << " sides.\n";
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

//inheritance - Coin is a derived class of Dice
class Coin: public Dice{
    
    public:
        Coin(){
            sides = 2;
        }
        void getSides(){
            cout << "This COIN object has " << sides << " sides.\n";
        }
    
};
//inheritance - Spinner is a derived class of Dice
class Spinner: public Dice{
    
    public:
        Spinner(){
            sides = 10;
        }
        void getSides(){
            cout << "This SPINNER object has " << sides << " sides...and because we are demonstrating polymorphism we can show that when you call the getSides() method on a Spinner object you get a little extra text...\n";
            
        }
};
#endif /* dice_hpp */




