//
// Created by Keith Lancaster on 3/28/21.
//
#include <iostream>
#include <utility>
#include "Manager.h"

void Manager::addEmployee(Employee *newEmployee) {
    employees.push_back(newEmployee);
}

void Manager::printEmployees() {
    for(Employee* e : employees){
        std::cout << *e << std::endl;
    }
}

Manager::Manager(const std::string &name) : Employee(name){}


