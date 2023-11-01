/*
 *  Separate chaining hashtable
 */

#ifndef __CHAINING_HASH_H
#define __CHAINING_HASH_H

// Standard library includes
#include <iostream>
#include <vector>
#include <list>
#include <stdexcept>

// Custom project includes
#include "Hash.h"

// Namespaces to include
using std::vector;
using std::list;
using std::pair;

using std::cout;
using std::endl;

//
// Separate chaining based hash table - derived from Hash
//
template<typename K, typename V>
class ChainingHash : public Hash<K,V> {
private:

    struct node{
        map<int,string> data;
        node *next, *prev;
    };

    list<node> hashtable;


public:
    ChainingHash(int n) {
        
        for (int x = 0; i < n; i++){
            hashtable.push_back(NULL);
        }
    }

    ~ChainingHash() {
        this->clear();
    }

    int size() {
        int size = 0;
        for (int i = 0; i < hashtable.size(); i++){
            if (hashtable[i] != NULL) {
                size += 1;
                if (node->next != NULL){
                    while (node->next != NULL){
                        size += 1;
                        node = node->next;
                    }
                }
            }
        }
        return;
    }

    V operator[](const K& key) {
        return -1;
    }

    bool insert(const std::pair<K, V>& pair) {
        
        return true;
    }

    void erase(const K& key) {
    }

    void clear() {
        
        for (int x = 0; i < hashtable.size; i++){
            hashtable[i] = NULL;
        }
    }

    int bucket_count() {
        return -1;
    }

    float load_factor() {
        return -1;
    }

private:
    int findNextPrime(int n)
    {
        while (!isPrime(n))
        {
            n++;
        }
        return n;
    }

    int isPrime(int n)
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }

        return true;
    }

    int hash(const K& key) {
        return 0;       
    }

};

#endif //__CHAINING_HASH_H
