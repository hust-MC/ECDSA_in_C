//
//  Header.h
//  TestDsa
//
//  Created by baidu on 2019/4/12.
//  Copyright © 2019年 baidu. All rights reserved.
//

#include <stdlib.h>
#include <stdio.h>
#include "EccTest.h"


#ifndef main_h
#define main_h

typedef struct Key {
    uint8_t publicKey[ECC_BYTES +1];
    uint8_t privateKey[ECC_BYTES];
} EncrpyKey;

#define CONTENT "This is a content"

#endif /* Header_h */
