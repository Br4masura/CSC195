
#include "Declarations.h"
#include <iostream>
#include "Employee.h"


//typedef double salary; traditional c++ way
using salary = double; //modern c++ way
//both create a context
using Sandwich = char;


int main() {

	salary wage_reception = 14.4;
	salary wage_analyst = 18.5;
	salary wage_engineer = 32.4;
	 
	Sandwich pastrami; 


    int numEmployees;
    std::cout << "Number of employees (max 5): ";
    std::cin >> numEmployees;

    if (numEmployees > 5) numEmployees = 5; // Limit to 5 employees

    Employee employees[5]; // Array of Employee objects

    for (int i = 0; i < numEmployees; i++) {
        std::cout << "\nEnter details for Employee " << (i + 1) << ":\n";
        employees[i].Read();
    }

    std::cout << "\n--- Payroll Summary ---\n";
    for (int i = 0; i < numEmployees; i++) {
        employees[i].Write();
    }

    return 0;


}
