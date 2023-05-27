
#include <iostream>
using namespace std;

const int TABLE_SIZE = 100;

class HashNode {
public:
    int key;
    int value;
    HashNode(int k, int v) : key(k), value(v) {}
};

class HashMap {
private:
    HashNode** table;

public:
    HashMap() {
        table = new HashNode*[TABLE_SIZE];
        for (int i = 0; i < TABLE_SIZE; i++)
            table[i] = NULL;
    }

    ~HashMap() {
        for (int i = 0; i < TABLE_SIZE; i++)
            if (table[i] != NULL)
                delete table[i];
        delete[] table;
    }

    int hash(int key) {
        return key % TABLE_SIZE;
    }

    void insert(int key, int value) {
        int hash_val = hash(key);
        while (table[hash_val] != NULL && table[hash_val]->key != key)
            hash_val = hash(hash_val + 1);
        if (table[hash_val] != NULL)
            delete table[hash_val];
        table[hash_val] = new HashNode(key, value);
    }

    int search(int key) {
        int hash_val = hash(key);
        int comparisons = 0;
        while (table[hash_val] != NULL && table[hash_val]->key != key) {
            hash_val = hash(hash_val + 1);
            comparisons++;
        }
        if (table[hash_val] != NULL)
            comparisons++; // increment comparison for final match
        return comparisons;
    }
};


int main() {
    HashMap my_map;

    // Prompt user for key-value pairs to insert
    int key, value;
    char choice;
    do {
        cout << "Enter key: ";
        cin >> key;
        cout << "Enter value: ";
        cin >> value;
        my_map.insert(key, value);

        cout << "Insert another key-value pair? (y/n): ";
        cin >> choice;
    } while (choice == 'y');

    // Prompt user for key to search
    cout << "Enter key to search: ";
    cin >> key;
    int comparisons = my_map.search(key);
    if (comparisons > 0)
        cout << "Found " << key << " with " << comparisons << " comparisons." << endl;
    else
        cout << "Could not find " << key << endl;

    return 0;
}

