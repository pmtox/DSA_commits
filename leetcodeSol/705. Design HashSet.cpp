//705. Design HashSet
//LEETCODE EASY

class MyHashSet {
private:
    vector<int> data;
public:
    MyHashSet() {
    }
    
    void add(int key) {
        if(find(data.begin() , data.end() , key) == data.end()){
            data.push_back(key);
        }
    }
    
    void remove(int key) {  
        auto it = find(data.begin() , data.end() , key);
        if(it != data.end()){
            data.erase(it);
        }
    }
    
    bool contains(int key) {
        return find(data.begin() , data.end() , key) != data.end();
    }
};