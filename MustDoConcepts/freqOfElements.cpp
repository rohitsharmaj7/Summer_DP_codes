 #include <bits/stdc++.h> 
using namespace std;  
void countFreq(int a[], int n) 
{  
    unordered_map<int, int> hm; 
    for (int i = 0; i < n; i++) 
        hm[a[i]]++; 
  
    set<pair<int, int> > st; 
    for (auto x : hm) { 
        st.insert({ x.first, x.second }); 
    } 
    int cumul = 0; 
    for (auto x : st) { 
        cumul = x.second; 
        cout << x.first << " " << cumul << endl; 
    } 
} 
int main() 
{ 
    int a[] = { 1, 3, 2, 4, 2, 1 }; 
    int n = sizeof(a) / sizeof(a[0]); 
    countFreq(a, n); 
    return 0; 
} 
