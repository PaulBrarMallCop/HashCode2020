//
//  Book.cpp
//  GoogleHash
//
//  Created by Gurjepaul Brar on 2/20/20.
//  Copyright © 2020 Gurjepaul Brar. All rights reserved.
//

#include <stdio.h>
#include "Book.h"

Book::Book()
{
    identificationNum = -1;
    score = -1;
    scanned = false;
}

Book::Book(int identificationNum, int score)
{
    this->identificationNum = identificationNum;
    this->score = score;
    scanned = false;
}

void Book::setIdentificationNum(int identificationNum)
{
    if (identificationNum < 0)
    {
        return;
    }
    else
    {
        this->identificationNum = identificationNum;
    }
}

void Book::setScore(int score)
{
    if (score < 0)
    {
        return;
    }
    else
    {
        this->score = score;
    }
}

void Book::setScanned(bool scanned)
{
    this->scanned = scanned;
}

int Book::getIdentificationNum() const
{
    return identificationNum;
}


bool Book::getScanned() const
{
    return scanned;
}

int Book::getScore() const
{
    return score;
}

bool Book::operator==(const Book& b) const
{
    if (identificationNum ==  b.identificationNum)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Book::operator!=(const Book& b) const
{
    return !(*this == b);
}

