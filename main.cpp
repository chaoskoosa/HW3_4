/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Matt Koosa
 *
 * Created on September 19, 2016, 2:56 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int daysMonth(int, int);

/*Days in a month selection
 */
int main(int argc, char** argv) {
    int month, year, monthDay;
    
    cout << "please enter a month numerically 1 - 12: ";
    cin >> month;
    cout << endl;
    cout << "please enter a year numerically: ";
    cin >> year;
    cout << endl;
    
    monthDay = daysMonth(month, year);
  
    cout << "The days of the month in month " << month << " are " << monthDay
         << " in year " << year << endl;
    
    return 0;
}

int daysMonth(int m, int y)
{
    if(m == 1)
        return 31;
    else if(m == 2 && y%4)
        return 29;
    else if (m == 2)
        return 28;
    else if (m == 3)
        return 31;    
    else if (m == 4)
        return 30;    
    else if (m == 5)
        return 31;
    else if (m == 6)
        return 30;
    else if (m == 7)
        return 31;
    else if (m == 8)
        return 31;
    else if (m == 9)
        return 30;
    else if (m == 10)
        return 31;
    else if (m == 11)
        return 30;
    else if (m == 12)
        return 31;
}