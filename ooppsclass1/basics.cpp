#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Gymmmember
{

private:
    string address;

public:
    string name;
    int age;
    string gender;
    int id;

    // default constrator is called
    // Gymmmember(){
    //     cout << "default constracture is called" << endl;
    // }

    // parametarised constractor is called

    Gymmmember(int _id, int _age, string _name, string _gender, string _address)
    {
        id = _id;
        age = _age;
        name = _name;
        gender = _gender;
        address = _address;
    }

    void excersie()
    {
        cout << "excersice" << endl;
    }

    void leg()
    {
        cout << "leg excercise" << endl;
    }

    void zumba()
    {
        cout << "zumba class" << endl;
    }
};

int main()
{

    Gymmmember G2(2, 21, "Rahul", "male", "kokata");
    cout << G2.id << endl;
    cout << G2.age << endl;
    // cout << G2.address <<endl;   // can't accecss
    G2.excersie();
}

// #include <iostream>
// #include <string>
// #include <vector>

// using namespace std;

// class Student
// {
// private:
//     string gf;

// public:
//     int id;
//     int age;
//     bool present;
//     string name;
//     int nos;
//     int *v;

//     // ctor: Default ctor: assigns garbage value
//     // no khokhla student
//     Student()
//     {
//         cout << "Student ctor called" << endl;
//     }

//     // paremeterized ctor
//     Student(int id, int age, bool present, string name, int nos, string gf)
//     {
//         this->id = id;
//         this->age = age;
//         this->present = present;
//         this->name = name;
//         this->nos = nos;
//         this->gf = gf;
//         this->v = new int(10);
//         cout << "Student paremeterized ctor called" << endl;
//     }

//     Student(int id, int age, bool present, string name, int nos)
//     {
//         this->id = id;
//         this->age = age;
//         this->present = present;
//         this->name = name;
//         this->nos = nos;
//         cout << "Student paremeterized ctor w/o gf called" << endl;
//     }

//     // copy ctor
//     Student(const Student &srcobj)
//     {
//         cout << "Student copy ctor called" << endl;
//         this->name = srcobj.name;
//         this->age = srcobj.age;
//         this->gf = srcobj.gf;
//         this->nos = srcobj.nos;
//         this->present = srcobj.present;
//         this->id = srcobj.id;
//     }

//     // getter / setter
//     string getGfName()
//     {
//         return gf;
//         // return this->gf;
//     }

//     void setGfName(string gf)
//     {
//         this->gf = gf;
//     }

//     void study()
//     {
//         cout << "studying" << endl;
//     }
//     void sleep()
//     {
//         cout << "sleeping" << endl;
//     }
//     void bunk()
//     {
//         cout << "bunking" << endl;
//     }

//     ~Student()
//     {
//         cout << "Student dtor called" << endl;
//         delete v;
//     }

// private:
//     void gfchatting()
//     {
//         cout << "Chatting" << endl;
//     }

//     void cheating()
//     {
//         cout << "Cheating" << endl;
//     }
// };

// int main()
// {
//     cout << sizeof(Student) << endl;
//     Student s1;

//     Student s2(1, 12, 1, "Chota Bheem", 1, "Chutki");
//     cout << s2.name << endl;
//     cout << s2.id << endl;

//     Student s3(2, 15, 0, "Lokesh", 5);
//     cout << s3.name << endl;

//     // alocating on heap
//     Student *s4 = new Student(3, 34, 1, "Chintu", 6);
//     cout << s4->name << endl;
//     cout << (*s4).name << endl;

//     delete s4; // no LEAK

//     s1.name = "Goli";
//     s1.age = 12;
//     s1.id = 1;
//     s1.nos = 5;
//     s1.present = 1;

//     Student s2;
//     s2.name = "Chota Bheem";
//     s2.age = 11;
//     s2.id = 2;
//     s2.nos = 1;
//     s2.present = 0;

//     copy ctor
//     Student s1(1, 12, 1, "Chota Bheem", 1, "Chutki");
//     Student s2 = s1;
//     Student s2(s1);

//     Student s2 = s1;

//     cout << s1.name << endl;
//     cout << s2.name << endl;

//     Student s1(1, 12, 1, "Chota Bheem", 1);
//     cout << s1.name << endl;
//     cout << s1.getGfName() << endl;

//     s1.setGfName("Indumati");

//     cout << s1.getGfName() << endl;

//     return 0;
// }

// #include <iostream>
// #include <string>
// #include <vector>

// using namespace std;
// class Doctor {
//  private:
//        string address;

// public:

//      int id;
//      int age;
//      bool presentInChamber;
//      string name;
//      int noOfpatients ;

//     // defalt constructor

//     Doctor () {

//         cout << "deafalut ctor is called" << endl;
//     }

//     Doctor ( int id, int age, bool presentInChamber , string name, int noOfpatients){

//         this->id = id;
//          this->age = age;
//          this->presentInChamber = presentInChamber;
//         this->name = name;
//         this->noOfpatients = noOfpatients;

//       cout << "Student paremeterized ctor called" << endl;

//     }

// };

// int main () {

//     Doctor D1 (7, 35, 1, "Rakesh roy", 10);
//     cout << D1.name << endl;
//     cout << D1.noOfpatients << endl;

//     // Student s3(2, 15, 0, "Lokesh", 5);
//     // cout << s3.name << endl;
// }