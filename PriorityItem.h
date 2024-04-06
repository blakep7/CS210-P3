#ifndef PRIORITY_ITEM
#define PRIORITY_ITEM

#include <string>
#include <iostream>

using namespace std;

class PriorityItem {
  private:
    int priority;
    string data;

  public:
    PriorityItem(int pri, string priData);
    int compareTo(const PriorityItem o);

    // Overloaded comparison operators
    bool operator < (PriorityItem other) ; 
    bool operator > (PriorityItem other) ; 
    bool operator <= (PriorityItem other) ; 
    bool operator >= (PriorityItem other) ; 
    bool operator == (PriorityItem other) ; 
    bool operator != (PriorityItem other) ; 
    friend ostream& operator<<(ostream& os, const PriorityItem& pri);

    // Getters
    int getPriority();
    string getData();
};
#endif
