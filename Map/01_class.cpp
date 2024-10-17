#include<iostream>
#include<unordered_map>

using namespace std;

int main (){

    // creation of map
    unordered_map<string, int>map;

    // insertion 
    pair<string, int> p = make_pair("mohit", 23);

    pair<string, int>q("ram", 24);

    pair<string, int>r;
    r.first = "sneha";
    r.second = 23;

    map.insert(p);
    map.insert(q);
    map.insert(r);

    cout << "size of map :" << map.size() << endl;
    cout << map.at("mohit") << endl;
    
    // searching
    cout << map.count("mohit") << endl;
}