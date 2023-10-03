#include <math.h>
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

//pairs
// int main(){
// pair<int,int> p={1,3};
// cout<<p.first<<" "<<p.second<< endl;
// pair<int,pair<int,int>> p1={2,{1,3}};
// cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<< endl;
// pair<int,int> arr[]={{1,2},{2,3},{3,4}};
// cout<<arr[0].first<<" "<<arr[0].second<< endl;
// pair<int,int> arr1[3];
// arr1[0]={1,2};
// arr1[1]={2,3};
// arr1[2]={3,4};
// cout<<arr1[0].first<<" "<<arr1[0].second<< endl;
// }

// ---------------------------------------------------------------------------------

//vector
// int main(){
// vector<int> v;
// v.push_back(1);
// v.emplace_back(2);
// vector<int>::iterator it = v.begin();
// // cout<<*it<<endl;
// // it = it++;
// // cout<<*it<<endl;
// // cout<<v[0]<<endl;
// // cout<<v.at(0)<<endl;
// // cout<<v.front()<<endl;
// // cout<<v.back()<<endl;
// // cout<<v.size()<<endl;
// // cout<<v.capacity()<<endl;
// // cout<<v.max_size()<<endl;
// // v.resize(5);
// // cout<<v.size()<<endl;
// // cout<<v.capacity()<<endl;

// for(vector<int>::iterator it=v.begin();it!=v.end();it++)
// cout<<*it<<" ";

// for(auto it= v.begin();it!=v.end();it++)
// cout<<*it<<" ";

// v.erase(v.begin()+1);
// v.erase(v.begin()+2,v.begin()+4);
// v.insert(v.begin()+1,2,3);
// v.insert(v.begin()+1,4);
// v.insert(v.begin()+1,v.begin(),v.end());
// v.pop_back();
// v.clear();
// v.swap(v);
// v.emplace(v.begin(),2);
// v.empty();
// }

// ---------------------------------------------------------------------------------

// //lists
// int main(){
// list<int> l;
// l.push_back(1);
// l.emplace_back(2);
// list<int>::iterator it = l.begin();
// cout<<*it<<endl;
// l.push_front(5);
// l.emplace_front(6);
// cout<<l.front()<<endl;
// cout<<l.back()<<endl;
// l.pop_back();
// l.pop_front();
// l.insert(l.begin(),2);
// l.insert(l.begin(),2,3);
// l.insert(l.begin(),l.begin(),l.end());
// l.erase(l.begin());
// l.erase(l.begin(),l.end());
// l.remove(2);
// l.reverse();
// l.sort();
// l.unique();
// l.merge(l);
// l.clear();
// l.swap(l);
// l.empty();
// l.size();
// l.max_size();
// l.resize(5);
// l.resize(5,2);
// }

// ---------------------------------------------------------------------------------

//deque