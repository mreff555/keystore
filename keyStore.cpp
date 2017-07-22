#include "keyStore.hpp"

void KeyStore::createKey(string desc, string uin, string pass, string url, bool hidden) {
    KeyStore *k = new KeyStore;
    k->description = desc;
    k->username = uin;
    k->password = pass;          // Yes this is temporary.  Password should not be plain text
    k->address = url;
    k->hidden = hidden;


}


    
	
