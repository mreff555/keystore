#include <cstring>
#include <iostream>
#include <openssl/sha.h>
#include <vector>
#ifndef __keyStore_h__
#define __keyStore_h__

using namespace std;

class KeyStore {
    int keyIndex;
    string description;
    string username;
    string password;
    string address;
    bool hidden;

vector<KeyStore*> keyStore_array;

public:
    void createKey(std::string, std::string, std::string, std::string, bool);
    void modifyKey(std::string, std::string, std::string, std::string, bool);
    void deleteKey(int);
    void getKey(int);
    void listPublic();
    void listAll();
};

#endif
