/* 
 * File:   main.cpp
 * Author: Gustavo Salgado
 *
 * Created on February 23, 2023
 * Purpose: Days in a month
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
    int mIn,yrIn;
    int days, leap;
    //Initialize variables
    
    
    //Map/Process the Inputs -> Outputs 
    cout<<"Enter the Month number (1-12):\t";
    cin>>mIn;
    if ((mIn > 12) || (mIn < 1)){
        cout<<"\n\tError: You did not enter a valid month (1-12)"<<endl;
        exit(1);
    }
    cout<<"\nEnter the four digit year number:\t";
    cin>>yrIn;
    if (yrIn%100==0){
        if ( yrIn%400==0){
            if(mIn == 2){
                mIn=29;
            }
        }
    }
    if((yrIn%100!=0)&&(yrIn%4==0)){
        if(mIn == 2){
                mIn=29;
            }
    }
    switch (mIn){
        case 1: 
            days = 31;
            break;
        case 2: 
            days = 28;
            break;
        case 3: 
            days = 31;
            break;
        case 4: 
            days = 30;
            break;
        case 5: 
            days = 31;
            break;
        case 6: 
            days = 30;
            break;   
        case 7:
            days = 31;
            break;
        case 8:
            days = 31;
            break;
        case 9:
            days = 30;
            break;
        case 10:
            days = 31;
            break;
        case 11:
            days = 30;
            break;
        case 12:
            days = 31;
            break;
        case 29:
            days = 29;
            break;      
    }
    //Display Inputs/Outputs
    cout<<"\nThere are "<<days<<" in that month"<<endl;
    //Clean up memory and files
    //Exit the program
    return 0;
}

