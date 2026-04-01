// Name: Joseph Valdez
// Date: 3/31/2026
// File: main.cpp
// Purpose: This is the entry point. All user interaction happens here.

#include <iostream>
#include <iomanip>
#include <string>
#include "grades.h"
#include "stats.h"

using namespace std;

int main()
{
  string studentName;
  const int MAX_SCORES = 5;

  double score;
  double total = 0.0;
  int count = 0;

cout << "Enter student name: ";
cin >> studentName;
cout << endl;

cout << "Enter up to 5 scores: "
