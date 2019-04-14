/*
 ============================================================================
 Name        : TestC.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "EccTest.h"

int genKey(EncrpyKey *key) {
    
    uint8_t publicKey[ECC_BYTES + 1];
    uint8_t privateKey[ECC_BYTES];
    
    ecc_make_key(publicKey, privateKey);
    
    memcpy(key->privateKey, privateKey, sizeof(privateKey));
    memcpy(key->publicKey, publicKey, sizeof(publicKey));

    return EXIT_SUCCESS;
}
