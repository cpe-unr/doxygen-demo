#ifndef DOXYGEN_EMPLOYEE_H
#define DOXYGEN_EMPLOYEE_H

#include <string>

/**
 * This is the employee class.
 */
class Employee {
    std::string name;
    int hoursWorked = 0;
public:
    const std::string &getName() const;
    void setName(const std::string &newName);
    int getHoursWorked() const;
    void setHoursWorked(int hours);

    explicit Employee(std::string  name);
    void addWorkHours(int hours);

    friend std::ostream& operator<<(std::ostream& out, const Employee& emp);
};


#endif //DOXYGEN_EMPLOYEE_H
