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
#include "EccTest.h"

int main(void) {

	printf("%s", "Hello Start\n");
	uint8_t publicKey[ECC_BYTES + 1] = {0};
	uint8_t privateKey[ECC_BYTES] = {0};


	ecc_make_key(publicKey, privateKey);

	printf("publicKey : %s\n", publicKey);
	printf("privateKey : %s\n", privateKey);

	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
