//
//  dice.cpp
//  Fun-With-Cpp
//
//  Created by Christopher Strickland on 7/8/22.
//

#include "dice.hpp"
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
    
    
//    dice d6(6), d8(8), d10(10), d20(20);
//    dice A(6), B(6), C(6);
    dice attackerA(6), attackerB(6), attackerC(6);
    dice defenderA(6), defenderB(6);
    int attackDice, defendDice;
    int attackArray[attackDice], defendArray[defendDice];
    srand(time(NULL));
    
    cout<<"RISK\n";
    cout<<"Attacker: how many dice will you roll? (1 - 3)\n";
    cin >> attackDice;
    cout<<"Defender: how many dice will you roll? (1 - 2)\n";
    cin >> defendDice;
          switch(attackDice) {
             case 1:
                  cout<<"ATTACKER throws 1 die\n" << endl;
                      attackArray[0] = attackerA.roll();
                
                  break;
              case 2:
                  cout<<"ATTACKER throws 2 dice\n" << endl;
                      attackArray[0] = attackerA.roll();
                      attackArray[1] = attackerB.roll();
                  break;
              case 3:
                  cout<<"ATTACKER throws 3 dice\n" << endl;;
                      attackArray[0] = attackerA.roll();
                      attackArray[1] = attackerB.roll();
                      attackArray[2] = attackerC.roll();
                  break;
          }
    cout << endl;
    switch(defendDice) {
       case 1:
            cout<<"DEFENDER throws 1 die\n" << endl;
                defendArray[0] = defenderA.roll();
            break;
        case 2:
            cout<<"DEFENDER throws 2 dice\n" << endl;
                defendArray[0] = defenderA.roll();
                defendArray[1] = defenderB.roll();
            break;
    }
    cout << "\n\nResults...\n\n";
    bubbleSort(attackArray, attackDice);
    bubbleSort(defendArray, defendDice);
    compareArrays(attackArray, defendArray);
    cout << endl;
    
    
    
    return 0;
}

