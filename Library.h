//
//  Library.h
//  Google Hash
//
//  Created by Jose Palomera on 2/20/20.
//  Copyright © 2020 Jose Palomera. All rights reserved.
//

#ifndef Library_h
#define Library_h

#include <queue>
#include "Book.h"
#include <iostream>

using namespace std;

class Library{
    
private:
    int id; //Library id
    
    int setOfBooks; //Sets of books in the library
    
    int signUpTime; //Number of days that library needs to signup
    
    int maxShipmentBooks;
    
    int numScan;    //Number of books that can be scanned each day
    
    bool signedUp;
    
    bool signingUp;
    
    bool allScanned;
    
public:
    
    queue<Book> myBooks;
    
    Library();
    
    Library(int identification, int totalBooks, int signUpDays, int maxShipBooks);
    
    bool addToLibrary(Book book);
    
    void setSignUp(bool o){
        signedUp = o;
    }
    
    void setAllScanned(bool o){
        allScanned = o;
    }
    
    void setSigningUp(bool o){
        signingUp = o;
    }
    
    void setBooks(int o){
        setOfBooks = o;
    }
    
    
    int getSetOfBooks()const{
        return setOfBooks;
    }
    
    int getSignUpTime()const{
        return signUpTime;
    }
    
    int getMaxShipmentBooks()const{
        return maxShipmentBooks;
    }
    
    int getNumScan()const{
        return numScan;
    }
    
    bool getSignUp()const{
        return signedUp;
    }
    
    bool getAllScan()const{
        return allScanned;
    }
    
    bool getSigningUp()const{
        return signingUp;
    }
    

};

#endif /* Library_h */
