#include <iostream>
#include <string>
#include <vector>
#include "student.h"
using namespace std;

string STUDENT::getFullName()
{
    return firstName + " " + surname;
}

int main()
{
    STUDENT student = { 1, "Kristina", "Bolashikova", 16, 18};
    cout << student.getFullName();
}

