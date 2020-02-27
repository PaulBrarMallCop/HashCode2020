//
//  Book.h
//  GoogleHash
//
//  Created by Gurjepaul Brar on 2/20/20.
//  Copyright © 2020 Gurjepaul Brar. All rights reserved.
//

#ifndef Book_h
#define Book_h
#include <iostream>
#include <string>
using namespace std;

class Book
{
public:
    Book();
    Book(int identificationNum, int score);
    
    void setIdentificationNum(int identificationNum);
    void setScore(int score);
    void setScanned(bool scanned);
    
    int getIdentificationNum() const;
    int getScore() const;
    bool getScanned() const;
    
    bool operator==(const Book& b) const;
    bool operator!=(const Book& b) const;
    
private:
    int identificationNum;
    bool scanned;
    int score;
};
#endif /* Book_h */

