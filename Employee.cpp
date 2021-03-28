//
// Created by Keith Lancaster on 3/28/21.
//

#include "Employee.h"
#include <ostream>
#include <utility>

void Employee::addWorkHours(int hours) {
    hoursWorked += hours;
}

Employee::Employee(std::string name) : name(std::move(name)) {

}

const std::string &Employee::getName() const {
    return name;
}

void Employee::setName(const std::string &name) {
    Employee::name = name;
}

int Employee::getHoursWorked() const {
    return hoursWorked;
}

void Employee::setHoursWorked(int hoursWorked) {
    Employee::hoursWorked = hoursWorked;
}

std::ostream &operator<<(std::ostream& out, const Employee& emp){
    out << "Name: " << emp.name << "\nHours Worked: " << emp.hoursWorked;
    return out;
}

