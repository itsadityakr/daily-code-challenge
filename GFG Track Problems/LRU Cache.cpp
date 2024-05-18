// https://www.geeksforgeeks.org/batch/dsa-galgotia-2/track/DSASP-LinkedList/problem/lru-cache

class LRUCache {
private:
    unordered_map<int, int> cache; // store key-value pairs
    unordered_map<int, list<int>::iterator> ma; // store references of key in cache
    list<int> dq; // store keys of cache
    int csize; // maximum capacity of cache

public:
    LRUCache(int cap) {
        csize = cap;
    }

    int GET(int key) {
        if (cache.find(key) == cache.end()) {
            return -1;
        } else {
            int value = cache[key];
            refer(key); // update the key's reference
            return value;
        }
    }

    void SET(int key, int value) {
        // Key is already present in cache
        if (cache.find(key) != cache.end()) {
            cache[key] = value;
            refer(key); // update the key's reference
        } else {
            // Cache is full
            if (dq.size() == csize) {
                int last = dq.back(); // delete least recently used element
                dq.pop_back();
                cache.erase(last);
                ma.erase(last);
            }
            cache[key] = value;
            refer(key); // update the key's reference
        }
    }

private:
    void refer(int x) {
        // not present in cache
        if (ma.find(x) == ma.end()) {
            dq.push_front(x);
            ma[x] = dq.begin();
        } else {
            dq.erase(ma[x]);
            dq.push_front(x);
            ma[x] = dq.begin();
        }
    }
};