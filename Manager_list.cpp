#include <iostream>
using namespace std;

struct Student{
    string name;
    int age;
    int id;
    string family_phone_number;
    bool check_in_out;
    Student(string ten, int id, int tuoi, string sdt_gd, bool check_in_out){
        name = ten;
        this->id = id;
        age = tuoi;
        family_phone_number = sdt_gd;
        // check_in_out = false;
        this-> check_in_out = check_in_out;
    }
};
    // typedef Student SV;
    // SV arraySV[5];
void check_in_out(Student *student){
    if((*student).check_in_out == false)
    {
    (*student).check_in_out = true;
    }
    else if ((*student).check_in_out == true)
    (*student).check_in_out = false;
}
// void check_in_out(Student a[]){
//     for (int i=0; i<5; i++){
//     if(a[i].check_in_out == false)
//     {
//     a[i].check_in_out = true;
//     }
// //     else if ((*student).check_in_out = true)
// //     (*student).check_in_out = false;
// }
// }
void find_id(Student a[],int id){
    for(int i = 0; i < 5; i++){
        if(a[i].id == id){
            cout << "Name of ID: " << a[i].name << endl;
            cout << "Phone number: " << a[i].family_phone_number << endl;
        }
    }
}
void check_id(Student a[],int id){
    for(int i=0; i< 5; i++){
        if (a[i].id == id){
            check_in_out(&a[i]);
            cout << "Status check of " << a[i].name << " is " << 
            (a[i].check_in_out ? "checked in": "checked out ")<< endl;
        }
    }
}
void check_status(Student a[]){
    for(int i=0; i<5; i++){
        if(a[i].check_in_out == true){
            cout << "Warning " << a[i].name << " inside"<< endl;
        }
    }
}
int main()
{
    int id;
    /////////////////////////////// auto check ////////////////////////
    // Student class_student[5]={
    //     Student ("LMT",1,22,"0326090840"),
    //     Student ("ABC",2,21,"2222222222"),
    //     Student ("XYZ",3,20,"3333333333"),
    //     Student ("NMT",4,19,"4444444444"),
    //     Student ("TTH",5,18,"5555555555")
    // };
    ////////////////////////////////////////////////////////////////////
    ////////////////////////////// Test check//////////////////////////
    Student class_student[5]={
        Student ("LMT",1,22,"0326090840",true),
        Student ("ABC",2,21,"2222222222", false),
        Student ("XYZ",3,20,"3333333333",true),
        Student ("NMT",4,19,"4444444444",false),
        Student ("TTH",5,18,"5555555555",false)
    };
    ///////////////////////////////////////////////////////////////////
    // while (true){
    // cout << "Enter find ID: " ; cin >> id;
    // find_id(class_student, id);
    // check_id(class_student, id);
    check_status(class_student);
    // }
    return 0;
}