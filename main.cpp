//  This is a program that takes arithmetic functions, defines them and returns results based on nested functions
//
//  Created by Milan Patel on 11/19/18.
//  Copyright © 2018 Milan Patel. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <string>
#include <cstring>

// Prime arithmetic functions
int addition(int,int);
int subtraction(int,int);
int multiply(int,int);
int divide(int,int);
int negation(int);

using namespace std;

int main()  //Main function with single line exectution and output
{
    cout<<negation(addition(multiply(subtraction(5,4),divide(8,2)),7)); //Single line function output
    
    getchar();  //Hold curser
    return 0;
}

int addition(int a,int b)   //Takes two inputs and returns the sum
{
    int result;
    result = a + b;
    
    return(result);
}

int subtraction(int a,int b)    //Takes two inputs and returns the differance
{
    int result;
    result = a - b;
    
    return(result);
}

int multiply(int a,int b)   //Takes two inputs and returns the product
{
    int result;
    result = a * b;
    
    return(result);
}

int divide(int a,int b)     //Takes two inputs and returns the quotient
{
    int result;
    result = a/b;
    
    return(result);
}

int negation(int a)         //Takes a single input and returns the negated value
{
    int result;
    result = a * -1;
    
    return(result);
}

