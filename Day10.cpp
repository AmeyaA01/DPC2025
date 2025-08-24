#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> anagrams;
     for (const string& s : strs) {
        string key = s;
        sort(key.begin(), key.end());
        anagrams[key].push_back(s);
    }
    vector<vector<string>> result;
     for (auto& pair : anagrams) {
        result.push_back(pair.second);
    }
    return result;
}

int main() {
    vector<vector<string>> outputs;

    vector<string> test1 = {"eat", "tea", "tan", "ate", "nat", "bat"};
    outputs = groupAnagrams(test1);
     for (auto& group : outputs) {
        cout << "[";
        for (auto& str : group) cout << "\"" << str << "\" ";
        cout << "]\n";
    }
    cout << endl;

    vector<string> test2 = {""};
    outputs = groupAnagrams(test2);
    for (auto& group : outputs) {
        cout << "[";
        for (auto& str : group) cout << "\"" << str << "\" ";
        cout << "]\n";
    }
    cout << endl;

    vector<string> test3 = {"a"};
    outputs = groupAnagrams(test3);
    for (auto& group : outputs) {
        cout << "[";
        for (auto& str : group) cout << "\"" << str << "\" ";
        cout << "]\n";
    }
    cout << endl;

    vector<string> test4 = {"abc", "bca", "cab", "xyz", "zyx", "yxz"};
    outputs = groupAnagrams(test4);
    for (auto& group : outputs) {
        cout << "[";
        for (auto& str : group) cout << "\"" << str << "\" ";
        cout << "]\n";
    }
    cout << endl;

    vector<string> test5 = {"abc", "def", "ghi"};
    outputs = groupAnagrams(test5);
    for (auto& group : outputs) {
        cout << "[";
        for (auto& str : group) cout << "\"" << str << "\" ";
        cout << "]\n";
    }
    cout << endl;
}
