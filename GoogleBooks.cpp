//
//  GoogleBooks.cpp
//  Library
//
//  Created by Jose Palomera on 2/20/20.
//  Copyright © 2020 Jose Palomera. All rights reserved.
//

#include <stdio.h>
#include "GoogleBooks.h"


GoogleBooks::GoogleBooks(string theFile){
    
    ifstream fileReader(theFile);
    if(!fileReader){
        cout << "File could not be opened" << endl;
        return;
    }
    
    //Reading in the first line
    fileReader >> totalBooks;
    fileReader >> totalLibraries;
    fileReader >> daysForScanning;
    
    int score;
    
    for(int i = 0; i < totalBooks; i++){
        fileReader >> score;
        totalScores.push_back(score);
    }
    
    for(int j = 0; j < totalLibraries; j++){
        
        int libBooks, signUpDays, booksPerDay;
        
        fileReader >> libBooks >> signUpDays >> booksPerDay;
        
        Library temp(j, libBooks, signUpDays, booksPerDay);
        
        theLibraries.push_back(temp);
        
        for(int k = 0; k < libBooks; k++){
            int bookId;
            
            fileReader >> bookId;
                        
            theLibraries[j].addToLibrary(Book(bookId, totalScores[bookId]));
        }
        
    }
}

void GoogleBooks::calculateScore(){
    int score = 0;
    int counter = 0;
    int beingSignedUp = 0;
        
    for (int i = 0; i < daysForScanning; i++)
    {
        bool signingUp = false;
        
        for (int j = 0; j < theLibraries.size(); j++)
        {
            if (theLibraries[j].getSigningUp() == true)
            {
                beingSignedUp = j;
                signingUp = true;
            }
        }
        
        if (!signingUp)
        {
            for (int k = 0; k < theLibraries.size(); k++)
            {
                if (!(theLibraries[k].getSigningUp()) && !(theLibraries[k].getSignUp()))
                {
                    theLibraries[k].setSigningUp(true);
                    beingSignedUp = k;
                    break;
                }
            }
        }
        
        for (int l = 0; l < theLibraries.size(); l++)
        {
            if (theLibraries[l].getSignUp() == true)
            {
                for (int f = 0; f < theLibraries[l].getMaxShipmentBooks(); f++)
                {
                    if (theLibraries[l].myBooks.empty() == false)
                    {
                        //cout << 1 << endl;
                        score += (theLibraries[l].myBooks.front()).getScore();
                        theLibraries[l].myBooks.pop();
                    }
                }
            }
        }
        
        counter++;
        
        if (counter == theLibraries[beingSignedUp].getSignUpTime())
        {
            counter = 0;
            theLibraries[beingSignedUp].setSigningUp(false);
            theLibraries[beingSignedUp].setSignUp(true);
        }
    }
    cout << score << endl;
}
        
        
        
    
