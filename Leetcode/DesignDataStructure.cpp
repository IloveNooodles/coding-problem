#include <bits/stdc++.h>
using namespace std;

class Structure {
    private:
        vector<int> arr;
        map<int, int> m;
    public:
        void insert(int x){
            //if present do nothing
            if(m.find(x) != m.end()) return;
            
            int index = arr.size();
            arr.push_back(x);

            m.insert(pair<int, int>(x, index));
        }
        void remove(int x){
            // if not present do nothing
            if(m.find() == m.end()) return;
            arr.erase(m[x]);
            m.erase(x);
        }
        int search(int x){
            if(m.find(x) == m.end()) return -1;
            return m[x]; 
        }
        
        int getRandom(){
            srand(time(NULL));
            int random_index = rand() % arr.size();
            return arr[random_index];
        }
};

int main(){
    Structure a = Structure();
}
