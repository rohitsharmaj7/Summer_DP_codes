#include <iostream> 
#include <unordered_map> 
using namespace std;   
int main() 
{  
    unordered_map<string, double> umap; 
    umap["PI"] = 3.14; 
    umap["root2"] = 1.414; 
    umap["root3"] = 1.732; 
    umap["log10"] = 2.302; 
    umap["loge"] = 1.0; 
  
    string keya="PI";
   
    // If key not found in map iterator to end is returned 
    if (umap.find(keya) == umap.end()) 
        cout << keya << " not found\n\n"; 
  
    // If key found then iterator to that key is returned 
    else
        cout << "Found " << keya << "\n\n"; 
  
} 
