#include<iostream>
using namespace std;
struct student{
int y;
char name[20];
double salary;
void agecal(){
int age=y-2020;

cout<<"The Age of Akash Is"<<age;

}
}s;
int main(){
    cout<<"Enter Your Name :";
    cin.get(s.name,50);
    cout<<"Enter Your Year Of Birth";
    cin>>s.y;
    cout<<"Enter your Salary";
    cin>>s.salary;

    cout<<"______________Name_________________"<<s.name<<endl;
    cout<<"______________Year Of Birth_________________"<<s.y<<endl;
    cout<<"______________Salary_________________"<<s.salary<<endl;
    s.agecal();







return 0;
}
