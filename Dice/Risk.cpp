//
//  dice.cpp
//  Fun-With-Cpp
//
//  Created by Christopher Strickland on 7/8/22.
//
//  Need to store all rolls and stats data in hash object
//  Need to ask for continue option after roll is complete, and battleCount++;

#include "Dice.hpp"
#include <stdio.h>
#include<iostream>
#include <time.h>
#include<random>

using namespace std;


void bubbleSort(int array[], int size){
    int i, j;
       for(i = 0; i < size - 1; i++)
           for (j = 0; j < size - i - 1; j++)
               if (array[j] < array[j + 1])
                   swap(array[j], array[j + 1]);
}

void compareArrays(int attack[], int defend[]){
    int attackerLoses = 0;
    int defenderLoses = 0;
    
    for(int i=0; i < 2; i++){
        if(defend[i] == 0)
            break;
        if(defend[i] >= attack[i])//defender wins ties
            attackerLoses++;
        else defenderLoses++;
    }
    cout << "Attacker loses: " << attackerLoses << " armies.\n";
    cout << "Defender loses: " << defenderLoses << " armies.\n";
    
}

int main() {
    
    

    Dice attackerA(6), attackerB(6), attackerC(6);
    Dice defenderA(6), defenderB(6);
    int attackDice, defendDice;
    int attackArray[attackDice], defendArray[defendDice];
    int battleCount, choice;
    srand(time(NULL));
    
cout << R"(
    ____  ___ ____  _  __
   |  _ \|_ _/ ___|| |/ /
   | |_) || |\___ \| ' /
   |  _ < | | ___) | . \
   |_| \_\___|____/|_|\_\)"
    << endl << endl;
    cout << "Battle # " << battleCount++ << endl;
    cout<<"Attacker: how many dice will you roll? (1 - 3)\n";
    cin >> attackDice;
    while(attackDice < 1 || attackDice > 3){
        cout << "only enter 1, 2, or 3\n";
        cin >> attackDice;
    }
    cout<<"Defender: how many dice will you roll? (1 - 2)\n";
    cin >> defendDice;
    while(defendDice < 1 || defendDice > 2){
        cout << "only enter 1 or 2\n";
        cin >> defendDice;
    }
          switch(attackDice) {
             case 1:
                  cout<<"ATTACKER throws 1 die\n" << endl;
                      attackArray[0] = attackerA.roll();
                  //attackArray.sort() //future method in dice class
                  break;
              case 2:
                  cout<<"ATTACKER throws 2 dice\n" << endl;
                      attackArray[0] = attackerA.roll();
                      attackArray[1] = attackerB.roll();
                  //attackArray.sort() //future method in dice class
                  break;
              case 3:
                  cout<<"ATTACKER throws 3 dice\n" << endl;;
                      attackArray[0] = attackerA.roll();
                      attackArray[1] = attackerB.roll();
                      attackArray[2] = attackerC.roll();
                      //attackArray.sort() //future method in dice class
                  break;
          }
    cout << endl;
    switch(defendDice) {
       case 1:
            cout<<"DEFENDER throws 1 die\n" << endl;
                defendArray[0] = defenderA.roll();
                //defendArray.sort() //future method in dice class
            break;
        case 2:
            cout<<"DEFENDER throws 2 dice\n" << endl;
                defendArray[0] = defenderA.roll();
                defendArray[1] = defenderB.roll();
                //defendArray.sort() //future method in dice class
            break;
    }
    cout << "\n\nResults...\n\n";
    //below needs to be transitioned to dice class..
    bubbleSort(attackArray, attackDice);
    bubbleSort(defendArray, defendDice);
    compareArrays(attackArray, defendArray);
    cout << endl;
    
    
    
    return 0;
}

