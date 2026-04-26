// Problem: Identical mappings mapped to opposite positions.\n\n#include <iostream>
#include <vector>

using namespace std;

/*
 "Identical items must be mapped to same place... colliding to opposite [(value+1)%hashSize1]" 
 Simulated logic.
*/
void mapHashing(vector<int>& hash_table, int hashSize, vector<int>& arr) {
    for (int x : arr) {
        int idx = x % hashSize;
        if (hash_table[idx] == -1 || hash_table[idx] == x) {
            hash_table[idx] = x;
        } else {
            // Mapping colliding element
            int new_idx = (x + 1) % hashSize;
            hash_table[new_idx] = x;
        }
    }
}

int main() {
    int size = 10;
    vector<int> hash_table(size, -1);
    vector<int> arr = {1, 11, 21, 1};
    mapHashing(hash_table, size, arr);
    return 0;
}
