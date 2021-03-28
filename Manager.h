//
// Created by Keith Lancaster on 3/28/21.
//

#ifndef DOXYGEN_MANAGER_H
#define DOXYGEN_MANAGER_H

#include <vector>
#include "Employee.h"

class Manager : public Employee{
private:
    std::vector<Employee*> employees;

public:
    explicit Manager(const std::string &name);

    void printEmployees();
public:
    void addEmployee(Employee* newEmployee);
};

#endif //DOXYGEN_MANAGER_H
