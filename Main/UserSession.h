#ifndef TRIPSERVICE_USERSESSION_H
#define TRIPSERVICE_USERSESSION_H

#include "TripServiceSupport.h"

class UserSession;
UserSession *oneUserSession = 0;

class UserSession {
public:
    inline static UserSession *GetInstance() {
        if (!oneUserSession) { oneUserSession = new UserSession(); }
        return oneUserSession;
    }

protected:

    UserSession() {}

private:

    UserSession(const UserSession &);

public:

    inline User *GetLoggedUser() {
        throw "UserSession.GetLoggedUser() should not be called in an unit test";
    }

    inline bool IsUserLoggedIn() {
        throw "UserSession.IsUserLoggedIn() should not be called in an unit test";
    }

};


#endif //TRIPSERVICE_USERSESSION_H
