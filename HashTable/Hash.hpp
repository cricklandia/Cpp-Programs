//
//  header.h
//  Fun-With-Cpp
//
//  Created by Christopher Strickland on 7/4/22.
//

#ifndef Hash.hpp
#define Hash.hpp
#endif /* Hash.hpp */
#include<iostream>

using namespace std;

const int maxSize = 3;

class HashTableEntry {
   public:
      int key;
      int value;

      HashTableEntry(int key, int value) {
         this->key= key;
         this->value = value;
      }

};

class HashMapTable {
   private:
      HashTableEntry **t;
        int currentSize;
   public:
      HashMapTable() {
         t = new HashTableEntry * [maxSize];
         for (int i = 0; i< maxSize; i++) {
            t[i] = NULL;
         }
      }

      int HashFunc(int key) {
          //cout << "key % maxSize: " << key % maxSize << endl;
         return key % maxSize;
      }

      void Insert(int key, int value) {
          int h = HashFunc(key);

        if(currentSize < maxSize){
            currentSize++;
         while (t[h] != NULL && t[h]->key != key) {
            h = HashFunc(h + 1);
         }
         if (t[h] != NULL)
            delete t[h];
         t[h] = new HashTableEntry(key, value);

          }
          //as of 7.5.22 breaks if over maxSize
          else cout << "table full, please delete something\n\n";
      }

      int SearchKey(int key) {
         int h = HashFunc(key);
         while (t[h] != NULL && t[h]->key != key) {
            h = HashFunc(h + 1);
         }
         if (t[h] == NULL)
            return -1;
         else
            return t[h]->value;
      }

      void Remove(int key) {
         int h = HashFunc(key);
         while (t[h] != NULL) {
            if (t[h]->key == key)
               break;
            h = HashFunc(h + 1);
         }
         if (t[h] == NULL) {
            cout<<"No Element found at key "<<key<<endl;
            return;
         } else {
            delete t[h];
         }
         cout<<"Element Deleted"<<endl;
      }



    void printOne(int key){

        int h = HashFunc(key);

        if (t[h] == NULL) {
           cout<<"No value for that key "<<key<<endl;
           return;
        }

        while (t[h] != NULL && t[h]->key != key) {
           h = HashFunc(h + 1);
        }
        cout <<"value: " << t[h]->value << "\n\n";

    }

    void printAll(){

        int i = 0;
        cout << "\nTHIS IS YOUR CURRENT TABLE...\n";
        while(i<maxSize){
            if(t[i] != NULL){

            cout << "key: " << t[i]->key << "   value: " << t[i]->value << "\n";
            }
            i++;
        }
        cout << "\n\n\n";


    }




    //~ makes this a destructor member function
    ~HashMapTable() {
       for (int i = 1; i < maxSize; i++) {
          if (t[i] != NULL)
             delete t[i];
             delete[] t;
       }
    }
};


