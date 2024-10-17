#include<iostream>
#include<unordered_map>

using namespace std;

void countCharacters(unordered_map<char, int> &mapping, string ch){
      for (auto temp : ch) {
           mapping[temp]++;
}
                                // now increae the frequency of each characters
        
}

int main (){

//     // creation of map
//     unordered_map<string, int>map;

//     // insertion 
//     pair<string, int> p = make_pair("mohit", 23);

//     pair<string, int>q("ram", 24);

//     pair<string, int>r;
//     r.first = "sneha";
//     r.second = 23;

//     map.insert(p);
//     map.insert(q);
//     map.insert(r);

//     cout << "size of map :" << map.size() << endl;
//     cout << map.at("mohit") << endl;
    
//     // searching
//     cout << map.count("mohit") << endl;

//     // search key in map

//     if(map.find("sneha") != map.end()){
//         cout << "found" << endl;
//     } else {
//         cout << "not found" << endl;
//     }

     string ch = "mohit";
     unordered_map<char, int > mapping;  // create map

     countCharacters(mapping, ch);
   
     // foreach mapping
     for(auto val : mapping){
         
         cout << val.first<< val.second <<  endl;
     }
}