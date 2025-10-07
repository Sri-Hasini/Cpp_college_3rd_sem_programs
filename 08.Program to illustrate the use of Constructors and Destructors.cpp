#include <iostream>
using namespace std;

class Demo
{
public:
    // Constructor
    Demo() {
        cout << "Constructor called: Object is created." << endl;
    }

    ~Demo() {
        cout << "Destructor called: Object is destroyed." << endl;
    }

    void display() {
        cout << "Inside display function." << endl;
    }
};

int main() {
    {
        Demo obj;       
        obj.display();  
    }

    cout << "Back in main function." << endl;

    return 0;
}
