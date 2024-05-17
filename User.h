#ifndef USER_H
#define USER_H

#include "Person.h"
#include <string>
using namespace std;

class User : public Person {
private:
    string username;
    string password;

public:
    User(const string& fullName, const string& email, const string& phoneNumber,
         const string& username, const string& password)
        : Person(fullName, email, phoneNumber), username(username), password(password) {}

    const string& getUsername() const {
        return username;
    }

    bool authenticate(const string& inputPassword) const {
        return password == inputPassword;
    }
};

#endif
