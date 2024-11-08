// CStudy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;


void printGeneration(int age)
{
    int year = 2024 - age;
    cout << year;
    if (year >= 1946 && year <= 1964)
    {
        cout << "Baby Boomber";
    }
    else if (year >= 1965 && year < 1980)
    {
        cout << "Gen X";
    }
    else if (year >= 1980 && year <= 1994)
    {

        cout << "Gen Y";
    }
    else if(year >=1996 && year <= 2015)
    {
        cout << "Gen Z";
    }
}

void printSum(int num)
{
    int sum = 0;
    for (int i = 0; i < num; i++)
    {
        sum = sum += i;
    }
    cout << sum;
}

int main()
{
    //int age;
    //cout << "Enter Your age: " << endl;
    //cin >> age;

   // printGeneration(age);

    //int number;
   // cout << "Enter a number: " << endl;
   // cin >> number;
   // printSum(number);

   // int n;
  //  int sum = 0;
  //  cout << "enter a number" << endl;
    //cin >> n;
   // while (n != 0)
   // {
  //      cout << "enter a number: " << endl;
   //     cin >> n;
    //    sum += n;
   // }
 //   cout << sum;
//
  //  float f;
  //  cin >> f;
  // int total = 1;
   // double sum = f;
  //  //sum += f;
  // while (f !=0)
   // {
   //     cout << "enter float: " << endl;
   //     cin >> f;
   //     sum += f;
    ///    total++;

   // }

   // cout << sum / total;

    int n;
    cout << "enter the value u want to add in the vector: ";
    cin >> n;
    int total = 0;
    vector<int> h = {};
    while (n != 0)
    {
        cout << "enter the value u want to add in the vector: " << endl;
        cin >> n;
        h.push_back(n);
        total++;
    }
    int x;
    cout << "enter the value u wanna add to them:" << endl;
    cin >> x;

    for (int i = 0; i < total;i++)
    {
        int n = h[i];
        int nn = n + x;
        h[i] = nn;
        cout << h[i] << endl;
    }
}


