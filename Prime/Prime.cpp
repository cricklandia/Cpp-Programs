////
////  Prime.cpp
////  Fun-With-Cpp
////
////  Created by Christopher Strickland on 7/11/22.
////
//
//#include "Prime.hpp"
//#include <iostream>
//using namespace std;
//
//bool singlePrimeCheck();//check one int for primeness
//
//void primeArtPrint(int end){
//    
//    bool prime;
//    const int width = 100;
//    cout << "A Graphical Representation of The Prime Numbers up to " << end << " with Width Set to " << width << endl << endl;
//    cout << " ";//1 is not prime
//    //cout << "*";//2 is prime
//    cout << "*";//2 is prime
//   
//    
//    for(int i=1; i<end; i++){
//        for(int j=2; j<i; j++){
//            if (i % j == 0) {
//                //not prime
////                cout << i << " is NOT a prime number.\n";
////                cout << "why?...because " << i << " is divisible by " << j << endl << endl;
//                prime = false;
//                if(i % width == 0){
//                    cout << " ";
//                    cout << endl;
//                
//                } else cout << " ";
//                break;
//            }
////            cout << i << " is a prime number.\n";
////            cout << "why?...because " << i << " is NOT divisible by {2..." << j << "}" << endl << endl;
//            prime = true;
//        }
//        if(prime == true)
//            if(i % width == 0){
//                cout << endl;
//                //cout << i;
//                cout << "*";
//            } else //cout << i;
//                cout << "*";
//            //cout << i << " is a prime number.\n\n";
//    }
//    cout << "\n\n\n\n";
//    
//
//}
//
//int main(){
//    
//    //print all primes up to a parameter
//    primeArtPrint(1000);
//    
//    
//   
//    
//}
