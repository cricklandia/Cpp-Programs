////
////  main.cpp
////  Fun-With-Cpp
////
////  Created by Christopher Strickland on 7/3/22.
////
//
//#include<iostream>
//#include<cstdlib>
//#include<string>
//#include<cstdio>
//#include "header.h"
//
//
//using namespace std;
//
//
//int main() {
//    
//   HashMapTable hash;
//   int key, value;
//   int choice;
//    cout<<"WELCOME TO MY C++ HASH TABLE PROGRAM"<<endl;
//   while (1) {
//       
//      cout<<"1. Insert/overwrite a value"<<endl;
//      cout<<"2. Search value by key"<<endl;
//      cout<<"3. Delete value by key"<<endl;
//      cout<<"4. Print value by key"<<endl;
//       cout<<"5. Print the entire table"<<endl;
//       cout<<"6. Exit\n\n";
//      cout<<"What would you like to do? ";
//      cin >> choice;
//      switch(choice) {
//         case 1:
//            cout<<"Enter a key for the new value: ";
//            cin>>key;
//            cout<<"Enter the value to be inserted: ";
//            cin>>value;
//            
//            hash.Insert(key, value);
//         break;
//         case 2:
//            cout<<"Enter key of the element to be searched: ";
//            cin>>key;
//            if (hash.SearchKey(key) == -1) {
//               cout<<"No element found at key "<<key<<endl;
//               continue;
//            } else {
//               cout<<"Element at key " << key << " : ";
//               cout<<hash.SearchKey(key)<<endl;
//            }
//         break;
//         case 3:
//            cout << "Enter key of the element to be deleted: ";
//            cin >> key;
//            hash.Remove(key);
//         break;
//         
//          //print one value
//          case 4:
//              cout << "Enter key of the element to be printed: ";
//              cin >> key;
//            
//              hash.printOne(key);
//              break;
//              //print entire table
//              case 5:
//                  //cout << "Enter key of the element to be printed: ";
//                  //cin >> key;
//                
//                  hash.printAll();
//                  break;
//           //exit
//          case 6:
//             exit(1);
//          default:
//             cout<<"\nEnter correct option\n";
//              
//              
//      }
//   }
//   return 0;
//}
