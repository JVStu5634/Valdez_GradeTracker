// Name: Joseph Valdez
// Date: 3/31/2026
// File: grades.cpp
// Purpose: This file defines the two functions declared in grades.h.

#include "grades.h"

char getLetterGrade(int score) {
  if (score >= 90) {
    return LetterGrade::A;
  }
  else if (score >= 80) {
    return LetterGrade::B;
  }
  else if (score >= 70) {
    return LetterGrade::C;
  }
  else if (score >= 60) {
    return LetterGrade::D;
  }
  else {
    return LetterGrade::F;
  }
}
char gradeToChar(LetterGrade grade) {
  switch (grade) {
case LetterGrade::A:
    return 'A';
case LetterGrade::B:
    return 'B';
case LetterGrade::C:
    return 'C';
case LetterGrade::D:
    return 'D';
case LetterGrade::F:
    return 'F';
default: 
  return '?';
  }
}
