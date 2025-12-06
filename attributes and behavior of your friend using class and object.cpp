include <iostream>

using namespace std;

class Friend {
public:
    string name;
    int age;

    void greet() {
        cout << "Hi, I'm " << name << " and I'm " << age << " years old." << endl;
    }
};

int main() {
    Friend myFriend;
    myFriend.name = "emmaculate";
    myFriend.age = 17;
    myFriend.greet();
}