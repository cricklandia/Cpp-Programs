////
////  Recursion-1.cpp
////  Fun-With-Cpp
////
////  Created by Christopher Strickland on 7/6/22.
////
////
//// 1. Write a value-returning recursive function called CountDigits that computes the number of the digits in a given positive integer argument (one number of multiple digits).  For example, if the argument is 12345, then the function returns 5, if the argument is 456, then the function returns 3.
////Test code with the values:  123456,  909098,  876543219
////
//
//
//#include <iostream>
//#include <fstream>
//using namespace std;
///// global variables
//ifstream infile;
//ofstream outfile;
//
///// function prototypes
//int CountDigits(long long inputNum, int count);
//
///// function definitions
//int CountDigits(long long inputNum, int count)
//{
//    if(inputNum == 0)//stops recursion
//   {
//       //cout << "inputNum: " << inputNum << " count: " << count << endl;
//       return count;
//   }
//       else
//        {
//           count++;
//           //cout << "ELSE inputNum: " << inputNum << " count: " << count << endl;
//           return CountDigits(inputNum / 10, count);//recursion
//        }
//}
//
//int main()
//{
//    long long dataIn;//long long to handle larger input
//    int digiCount = 0;//initialize
//    
//    //for proper file handling, modify paths and create files with required input...
//    infile.open("/in.txt");
//    outfile.open("/out.txt");
//    
//    infile >> dataIn;//prime loop
//    
//    while(!infile.eof())
//    {
//        digiCount = CountDigits(dataIn, digiCount);
//        cout << "the input number " << dataIn << " has "  << digiCount << " digits.\n";
//        outfile << "the input number " << dataIn << " has "  << digiCount << " digits.\n";
//        digiCount = 0;//reset count
//        infile >> dataIn;//get next input
//    }
//    
//    infile.close();
//    outfile.close();
//    
//    return 0;
//}
