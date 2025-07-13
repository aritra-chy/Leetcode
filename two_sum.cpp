/*------------------------------------------------------
    author    : Aritra Chowdhury
    created   : Tuesday | 25 March,2025 | 21:20:38 
------------------------------------------------------*/
 
#include <bits/stdc++.h>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define MOD 1000000007
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

vi twosum(vi &nums,int target)
{
    unordered_map<int,int>num_map;
    for(int i=0; i<nums.size(); i++)
    {
        int con=target-nums[i];
        if(num_map.find(con) != num_map.end())
        {
            return {num_map[con],i};
        }
        num_map[nums[i]]=i;
    }
    return {};
}
