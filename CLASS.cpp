#include <iostream>
using namespace std;
class student{
    public:
    string name;
    int age;
    int roll_no;
student(string a,int b,int c){
    name=a;
    age=b;
    roll_no=c;
}
    void display(){
         cout<<"name is:"<<name<<endl;
         cout<<"roll no is:"<<roll_no<<endl;
    }
};
int main(){
    student s1("lakshya",18,152);
    //s1.name="VISHESH TYAGI";
    //s1.age=18;
    //s1.roll_no=152;
    s1.display();
    return 0;
}#include <iostream>
using namespace std;
class student{
    public:
    string name;
    int age;
    int roll_no;
student(string a,int b,int c){
    name=a;
    age=b;
    roll_no=c;
}
    void display(){
         cout<<"name is:"<<name<<endl;
         cout<<"roll no is:"<<roll_no<<endl;
    }
};
int main(){
    student s1("VISHESH TYAGI",18,152);
    //s1.name="VISHESH TYAGI";
    //s1.age=18;
    //s1.roll_no=152;
    s1.display();
    return 0;
}
