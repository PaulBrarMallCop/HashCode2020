//
//  main.cpp
//  GoogleHash
//
//  Created by Gurjepaul Brar on 2/20/20.
//  Copyright © 2020 Gurjepaul Brar. All rights reserved.
//

#include <iostream>
#include "GoogleBooks.h"

int main(int argc, const char * argv[]) {
    GoogleBooks test("a_example.txt");
    test.calculateScore();
    return 0;
}
