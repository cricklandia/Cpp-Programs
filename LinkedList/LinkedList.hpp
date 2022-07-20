//
//  LinkedList.hpp
//  Fun-With-Cpp
//
//  Created by Christopher Strickland on 7/13/22.
// a class for

#ifndef LinkedList_hpp
#define LinkedList_hpp

#include <stdio.h>

#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
#include <cstdlib>//needed for NULL?
using namespace std;



class node //ToDo, add all functions below as methods in this class
{
public:
    
    int number;
    int counter;
    node * next;
};

//global var
node * h;//head

///FUNCTION PROTOTYPES///
void insertNode(int nbr);
void PrintList();//pass *head by value as "current pointer"
bool searchLinkList(node *c, int nbr);//search for value in list, return true or false
int countNodesInList();
float avgList(int N);
void deleteNode();//delete nodes where node->number % 5 == 0

//////////////////////////
///FUNCTION DEFINITIONS///
//////////////////////////
void PrintList()//values and counts, 8 per line
    {
        node *c;
        int i = 1;
        c = h;
        cout << "value " << "| occurences\n\n";//header
        while (c)//aka while(c != NULL)
        {
            cout << c->number << "       " << c->counter << "\n";//aka (*cp).number
                        //cout << "list address = " << c << "  list->number = " << c->number;//needs to be 8 per line
                        //cout << " list->counter = " << c->counter;
                        //cout << " list->next = " << c->next << endl;
            c = c->next;//aka (*cp).next
//            if( i % 8 == 0)
//            {
//                cout << endl;
//            }
            i++;
        }
        cout << endl;
    }


bool searchLinkList(node *c, int nbr)//return true/false if value is in list
    {
        node *p, *t;//current, previous, temp pointers
        c = h;//starting search from beginning
        
        
        while(c)
        {
            if(c->number == nbr)
            {
                c->counter = c->counter + 1;//bump count for that value's node
                return true;//this tells main() that a new node is NOT needed
            }
            else//bump to next node in list
                c = c->next;
            
        }
        return false;
    }


 void insertNode(int nbr)//pass value from infile. create only if number does not yet exist in list
     {
         node *n;//new node created in this func
         node *t;//temp pointer to traverse the list
         node *p = NULL;//the previous node
     
         n = new node;//allocate new node
         n->number = nbr;//store number at new node
         n->counter = n->counter + 1;
     
     if (!h)//create first node if head == NULL (false)
         {
             h = n;
             //h->counter = h->counter + 1;
             h->next = NULL;
         }
     else //otherwise, insert new node
         {
             t = h;//position temp at head of list
             p = NULL;//initialize previous node to "nullptr"
             
        while(t != NULL && t->number < nbr)
             {
                 p = t;           //shifts p and t forward one node
                 t = t->next;       //
             }
        if(p == NULL)///works for inserting node in beginning
             {
                 h = n;
                 n->next = t;
             }
             else
             {
                 p->next = n;
                 n->next = t;
             }
         }
     }

 int countNodesInList()
{
    node *c;
    int i = 0;
    c = h;
    
    while (c)//aka while(c != NULL)
        {
            i++;
            c = c->next;
        }
    return i;//pass back count of all nodes in list
}

float avgList(int N)
{
    node *c;
    float sumVal = 0, Average;
    
    c = h;
    
    while (c)//aka while(c != NULL)
    {
        sumVal = sumVal + c->number;
        c = c->next;
    }
    
    Average = sumVal / N;

    return Average;//pass back count of all nodes in list
}

void deleteNode()//delete nodes where node->number % 5 == 0
{
    node *t;//temp pointer to traverse the list
    node *p;//the previous node
    
    if(!h)
        return;
    
    if(h->number % 5 == 0)
    {
        t = h->next;
        delete h;
        h = t;
    }
    else
    {
        t = h;//initialize to as head
        
        while(t)//t != NULL
        {
            if( (t->number % 5) == 0)//multiples of 5 get deleted
            {
                p->next = t->next;
                delete t;
            }
            else    //otherwise bump traversing pointers to next node
                p = t;
                t = t->next;
        }
    }
}


#endif /* LinkedList_hpp */
