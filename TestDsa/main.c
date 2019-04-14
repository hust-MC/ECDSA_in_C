//
//  main.c
//  TestDsa
//
//  Created by baidu on 2019/4/12.
//  Copyright © 2019年 baidu. All rights reserved.
//


#include "main.h"

/// dfasfsdf
int main(int argc, const char * argv[]) {
    // insert code here...
    
    printf("%s", "\nHello Start\n");
    
    // 初始化双端密钥
    EncrpyKey clientKey = {0, 0};
    EncrpyKey serverKey = {0, 0};
    genKey(&clientKey);
    genKey(&serverKey);
    
    printf("publicKey is : %s \n", clientKey.publicKey);
    printf("privateKey is : %s \n", clientKey.privateKey);

    // 生成加密密钥
    uint8_t secret[ECC_BYTES] = {0};
    ecdh_shared_secret(serverKey.publicKey, clientKey.privateKey, secret);
    printf("Secret is : %s \n", secret);
    
    // 对数据进行加密
    uint8_t signature[ECC_BYTES * 2] = {0};
    uint8_t hash[ECC_BYTES] = {CONTENT};
    
    ecdsa_sign(clientKey.privateKey, hash, signature);
    printf("Signature is : %s \n", signature);
    
    // 解密
    hash[0] = 'T';
    int result = ecdsa_verify(clientKey.publicKey, hash, signature);
    printf("the result is : %d \n", result);
    
    
    puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
    return EXIT_SUCCESS;
}
