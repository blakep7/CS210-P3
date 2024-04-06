#include <string>
#include <iostream>
#include "PriorityItem.h"
using namespace std;

// Constructor.  Creates a new PriorityItem instance.

// standard get methods

// Overloaded relational operators

// Overloaded output operator
ostream& operator<<(ostream& os, const PriorityItem& pri)
{
    os << "[priority=" << pri.priority << ", data=" << pri.data << "]";
    return os;
}
  
