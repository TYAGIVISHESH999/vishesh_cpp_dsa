
#include <iostream>
using namespace std;
class Signup{
    public:
    string name;
    string email;
    string password;
};
void displayinfo(){
cout<<"name = "<<endl<<"email = "<<endl<<"Password = "<<endl;
}
int main() {
    Signup user;
    user.name="Anant";
    user.email="anant12@gmail.com";
    user.password="12345";
    displayinfo();
    return 0;
}

