#ifndef PORTAL_H
#define PORTAL_H

#include<bits/stdc++.h>
using namespace std;

class Portal{
    public :

	//for processing the user inputs
    virtual void processUserCommand(string) = 0;

	// checks the responses
    virtual void checkResponse() = 0;
};

#endif