//
//  LinkedList.cpp
//  Fun-With-Cpp
//
//  Created by Christopher Strickland on 7/13/22.
//
/*
 Chris Strickland
 CS 318
 
 Link List Program
 
 I have a list of numbers that I need to know two things, what numbers I have in the list and how many of each number do I have in the list.  So you are to read in each number and add the number to an ordered link list.  Now, if you are adding a number to the list and you find that number, then you will just count it.  If you do not find the number in the link list, then you will add a new node to the link list with the new number and set the count to one.
 
 The structure/class will have three fields; the number, a counter, the counter is used to keep count of how many of this number exist and of course a link field.
 
 1.  Print out the values and their counts say 8 per line.
 Example     5 – 22   8 – 15   13 – 5   22 – 3   25 – 18   where the 5 is the number and 22 is its count (ie there were 22 number 5’s in the list).  Label output please.
 
 2.  Print out the number of nodes in the link list and the average for the values.  (5-22 is 5 values     to count in sum and average.)
 3.  Now, go through the link list and delete any node with a value that is a multiple of 5.
 4.  Print out the number of nodes in the new link list.
 5.  Travers the new link list and print out the number of values in the list and the average.
 
 Input file is LinkNbrs.dat.
 */

#include "LinkedList.hpp"
#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
#include <cstdlib>//needed for NULL?
using namespace std;

///GLOBAL VARIABLES///
//ifstream infile;
//ofstream outfile;



/////////////////////////////////
////////// M  A  I  N ///////////
/////////////////////////////////

int main()
{
    h = NULL;
    int val, i = 1, nodeCount;
    bool foundInList;
    float avg;
    
    int inputArray[100] = {2, 28, 15, 21, 10, 5, 39, 39, 3, 25, 26, 26, 2, 28, 2, 12, 36, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 8, 9, 7, 8, 6, 7, 5, 6, 7, 6, 6, 5, 4, 6, 3, 7, 6, 5, 4, 3, 2, 1, 3, 2, 3, 4, 1, 0, 9, 8, 7, 6, 5, 4, 3, 2, 1};
// INPUT FILE FUNCTIONALITY:
//            infile.open("/Users/christopherstrickland/inputfiles/LinkNbrsIN.txt");
//            outfile.open("/Users/christopherstrickland/outputfiles/LinkNbrsOUT.txt");
    
//    while(!infile.eof())
//    {
//        infile >> val;
//        foundInList = searchLinkList(h, val);
//            if(foundInList == 0)//0 is false
//            {
//                insertNode(val);
//            }
//        //PrintList();//for debugging
//        i++;
//    }
    
    for(int q=1; q<100; q++){
        val = inputArray[q];
        foundInList = searchLinkList(h, val);
            if(foundInList == 0)//0 means false
            {
                insertNode(val);
            }
    }
        
    cout << "1.  Print out the values and their counts say 8 per line. Example     5  22   8 – 15   13 – 5   22 – 3   25 – 18   where the 5 is the number and 22 is its count (ie there were 22 number 5’s in the list).  Label output please." << endl << endl;
    PrintList();
    
    cout << "2.  Print out the number of nodes in the link list and the average for the values.  (5-22 is 5 values     to count in sum and average.)" << endl << endl;

    nodeCount = countNodesInList();
    avg = avgList(nodeCount);
    cout << "node count: " << nodeCount << " | average of unique values in list: " << fixed << setprecision(1) << avg << endl << endl;
    
    cout << "3.  Now, go through the linked list and delete any node with a value that is a multiple of 5." << endl << endl;
    deleteNode();
    
    PrintList();
    
    cout << "4.  Print out the number of nodes in the new link list." << endl << endl;
    nodeCount = countNodesInList();
    cout << "node count in new list (without multiples of 5): " << nodeCount << endl << endl;
    
    cout << "5.  Traverse the new link list and print out the number of values in the list and the average." << endl << endl;
    
    nodeCount = countNodesInList();//because each node is assigned one value, the nodeCount matches the count of unique values
    avg = avgList(nodeCount);
    cout << "number of values in link list: " << nodeCount << " | average of unique values in link list: " << fixed << setprecision(1) << avg << endl << endl;
    
    //PrintList();
//    infile.close();
//    outfile.close();
    
    return 0;
}
