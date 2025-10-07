#include<iostream>
using namespace std;
class Student 
{	int id;
	public:	Student(int i)
		{	id = i;
     			cout << "\n\n\nConstructor called\n";
    		}
		Student(Student &s) 
		{	id = s.id;
			cout << "\n\n\n\nCopy constructor called\n";
    		}
		void display() 
		{	cout << "ID: " << id << endl;
    		}
};
int main() {
    Student s1(500);       
    Student s2 = s1;    
    s1.display();
    s2.display();
    return 0;
}
