//
//  Library.cpp
//  Google Hash
//
//  Created by Jose Palomera on 2/20/20.
//  Copyright © 2020 Jose Palomera. All rights reserved.
//

#include <stdio.h>
#include "Library.h"

Library::Library(){
    
}

Library::Library(int identification, int totalBooks, int signUpDays, int maxShipBooks){
    
    this->id = identification;
    setOfBooks = totalBooks;
    signUpTime = signUpDays;
    maxShipmentBooks = maxShipBooks;
    signedUp = false;
    allScanned = false;
    signingUp = false;
    
}

//Method adds a book to the library
bool Library::addToLibrary(Book book){
    myBooks.push(book);
    return true;
}
