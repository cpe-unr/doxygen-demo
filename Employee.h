//
// Created by Keith Lancaster on 3/28/21.
//

#ifndef DOXYGEN_EMPLOYEE_H
#define DOXYGEN_EMPLOYEE_H


#include <string>

class Employee {
    std::string name;
public:
    const std::string &getName() const;

    void setName(const std::string &name);

    int getHoursWorked() const;

    void setHoursWorked(int hoursWorked);

private:
    int hoursWorked = 0;
public:
    explicit Employee(std::string  name);
    void addWorkHours(int hours);
    friend std::ostream& operator<<(std::ostream& out, const Employee& emp);
};


#endif //DOXYGEN_EMPLOYEE_H
