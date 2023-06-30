

#include <iostream>
#include <string>
using namespace std;

class Pressedent {
private:
    string fName;
   static Pressedent* activPresedent;
    Pressedent(string fName) {
        this->fName = fName;
    }
public:
    static Pressedent*  getPressedent(string newNamefName) {
        if (activPresedent == nullptr) {
            activPresedent =new Pressedent(newNamefName);
        }
        return activPresedent;
    }
    void whoeInfo() {
        cout<< this << fName<<endl;
    }
};
Pressedent* Pressedent::activPresedent = nullptr;
int main()
{
    Pressedent* pres= Pressedent::getPressedent("putin");
    Pressedent* prestwo = Pressedent::getPressedent("aaaaaaaa");
    pres->whoeInfo();
    prestwo->whoeInfo();
    std::cout << "Hello World!\n";
}

