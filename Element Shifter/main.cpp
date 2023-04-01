#include <iostream>
#include <iomanip>

using namespace std;

float* ArrayElementShift(float [], int);

int main()
{
    cout<<"Program: Element Shifter"<<endl;
   
    int arraySize;                                          //Var to store array size
 
    cout<<"\n Enter array size: "<<endl;        
    cin>>arraySize;                                        //Input value to array size var
    
    float array[arraySize];                                //Creates first array
    
    for (int i = 0; i < arraySize; i++){
        
        cin>>array[i];                                  //Fills in the array with user input

    }
     
    
    float* newArray = ArrayElementShift(array,arraySize);                 //calls function

    
    cout<<"Original array: ";
    for (int i = 0; i < arraySize; i++){ 
        cout<<showpoint<<setprecision(2)<<array[i]<<" ";    //Prints out old array
    }
    
    
    cout<<"\nPrint new array: ";
            
    for (int i = 0; i < arraySize+1; i++){                  //Prints new array
        cout<<showpoint<<setprecision(2)<<newArray[i]<<" ";
    }
    
    return 0;
}

float* ArrayElementShift(float array[],int arraySize){
    
    float* newArray = new float[arraySize+1];
    float zero = 0.0;
    newArray[0]=zero;
    for (int i = 0; i < arraySize; i++){
        newArray[i+1] = array[i];
        
    }
    
    return newArray;
    
    
    
   
}