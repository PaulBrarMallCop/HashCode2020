//
//  GoogleBooks.h
//  Library
//
//  Created by Jose Palomera on 2/20/20.
//  Copyright © 2020 Jose Palomera. All rights reserved.
//

#ifndef GoogleBooks_h
#define GoogleBooks_h

#include "Book.h"
#include "Library.h"
#include <iostream>
#include <fstream>

#include <vector>
#include <string>

using namespace std;

class GoogleBooks{
    
public:
    
    GoogleBooks(string fileReader);
    
    void calculateScore();
    
private:
    
    int daysForScanning;
    int totalLibraries;
    int totalBooks;
    
    vector<Book> theBooks;
    
    vector<Library> theLibraries;
    
    vector<int> totalScores;
    
};
#endif /* GoogleBooks_h */
