
#include <iostream>
#include "Manager.h"


int main() {
    Manager mgr("John John");
    Employee *harry = new Manager("Harry");
    mgr.addEmployee(harry);
    mgr.printEmployees();
    return 0;
}
