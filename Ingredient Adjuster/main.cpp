/* 
 * File:   main.cpp
 * Author: Gustavo Salgado
 *
 * Created on February 23, 2023
 * Purpose: Cooking ingredient measuring calculator
 */

//System Libraries
#include <iostream> 
#include <cstdlib>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Science, Math, Conversions,Dimensions

//Function Prototypes

int main(int argc, char** argv) {
    //Set random number seed
    //Declare variables
    int numIn;
    float sugar, butter, flour;
    //Initialize variables
    sugar = 1.5/48;
    butter = 1.0 / 48;
    flour = 2.75/48;
    //Map/Process the Inputs -> Outputs 
    cout<<"How many cookies would you like to make?\t"<<endl;
    cin>>numIn;
    //Display Inputs/Outputs
    cout<<"\nYou will need:"<<endl;
    cout<<"\t Sugar  "<<setprecision(3)<<sugar*numIn<<" Cups"<<endl;
    cout<<"\t Butter "<<butter*numIn<<" Cups"<<endl;
    cout<<"\t Flour  "<<flour*numIn<<" Cups"<<endl;
    //Clean up memory and files
    //Exit the program
    return 0;
}

