#include<iostream>
using namespace std;
class Demo
{
    public:
        inline int square(int x)  {
            return x * x;
        }
        inline float square(float x)  {
            return x * x;
        }
        void add() {
            cout << "\nI am in add() - No Arguments";
        }
        void add(int a, int b)  {
            cout << "\nI am in add(int, int) - The sum = " << a + b;
        }
        void add(float a, float b)  {
            cout << "\nI am in add(float, float) - The sum = " << a + b;
        }
        void add(int a, float b) {
            cout << "\nI am in add(int, float) - The sum = " << a + b;
        }
};
int main() {
    Demo obj;
    cout << "Square of 5 (int) is: " << obj.square(5) << endl;
    cout << "Square of 4.5 (float) is: " << obj.square(4.5f) << endl;
    obj.add();
    obj.add(10, 20);
    obj.add(10.5f, 10.5f);
    obj.add(10, 10.5f);
    return 0;
}
