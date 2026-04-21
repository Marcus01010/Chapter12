#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string person_name;
    int age;
};

class Doctor : public Person
{
public:
    string specialization;
};

class Patient : public Person
{
public:
    string disease_name;
};

int main()
{
    Doctor doctor_object;
    Patient patient_object;

    getline(cin, doctor_object.person_name);
    cin >> doctor_object.age;
    cin.ignore();
    getline(cin, doctor_object.specialization);

    getline(cin, patient_object.person_name);
    cin >> patient_object.age;
    cin.ignore();
    getline(cin, patient_object.disease_name);

    cout << "Doctor Name: " << doctor_object.person_name << endl;
    cout << "Age: " << doctor_object.age << endl;
    cout << "Specialization: " << doctor_object.specialization << endl;

    cout << "Patient Name: " << patient_object.person_name << endl;
    cout << "Age: " << patient_object.age << endl;
    cout << "Disease: " << patient_object.disease_name << endl;

    return 0;
}
