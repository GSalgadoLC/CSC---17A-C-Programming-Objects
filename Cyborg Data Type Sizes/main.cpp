/* 
 * File:   main.cpp
 * Author: Gustavo Salgado
 *
 * Created on February 23, 2023
 * Purpose: Print out data type sizes
 */

//System Libraries
#include <iostream> 
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants - Science, Math, Conversions,Dimensions

//Function Prototypes

int main(int argc, char** argv) {
    //Set random number seed
    //Declare variables
    //Initialize variables
    //Map/Process the Inputs -> Outputs 
    //Display Inputs/Outputs
    cout<<"Data type sizes in bytes\n"<<endl;
    cout<<"Char:\t"<<sizeof(char)<<endl;
    cout<<"Unsigned short int:\t"<<sizeof(unsigned short int)<<endl;
    cout<<"Int:\t"<<sizeof(int)<<endl;
    cout<<"Long:\t"<<sizeof(long)<<endl;
    cout<<"Float:\t"<<sizeof(float)<<endl;
    cout<<"Double:\t"<<sizeof(double)<<endl;
    //Clean up memory and files
    //Exit the program
    return 0;
}

