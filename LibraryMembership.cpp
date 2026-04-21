#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string person_name;
};

class Member : public Person
{
public:
    int member_id;
};

class PremiumMember : public Member
{
public:
    int books_borrowed;
};

int main()
{
    PremiumMember premium_member_object;

    getline(cin, premium_member_object.person_name);
    cin >> premium_member_object.member_id;
    cin >> premium_member_object.books_borrowed;

    cout << "Member Name: " << premium_member_object.person_name << endl;
    cout << "Member ID: " << premium_member_object.member_id << endl;
    cout << "Books Borrowed: " << premium_member_object.books_borrowed << endl;

    if (premium_member_object.books_borrowed <= 10)
    {
        cout << "Status: Within Limit" << endl;
    }
    else
    {
        cout << "Status: Limit Exceeded" << endl;
    }

    return 0;
}
