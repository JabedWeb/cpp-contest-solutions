#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>  // Include this for the sort function

using namespace std;

// Set of colors
vector<string> colors = {"blue", "green", "yellow", "red", "purple", "orange", "pink",
                         "grey", "cyan", "brown", "ash", "silver", "gold", "white", "black"};

int maxColors(string s) {
    int maxCount = 0;

    if (s.length() < 3) {
        return maxCount;
    }

    for (const string& color : colors) {
        // Create a copy of the color string and sort it
        string sortedColor = color;
        sort(sortedColor.begin(), sortedColor.end());

        // Sort the input string
        sort(s.begin(), s.end());

        int count = 0;
        int k = 0;
        int l = 0;

        // take a vector to track which character has been used
        vector<bool> used(s.length(), false);
        while (l<s.length() && k<sortedColor.length()) {
            if (s[l] == sortedColor[k] && !used[l]) {
                count++;
                used[l] = true;
                k++;
            }
            l++;
        }
        if(count==color.length()){
            //as we get the color then we have to remove the color from the string
    
            // for(int i=0;i<s.length();i++){
            //     //cout << s[i] << " " << color[0] << " " << << endl;
            //     if(s[i]==color[0]){
            //         s.erase(i,1);
            //         i--;
            //     }
            // }
            maxCount++;
        }
        
    }

    return maxCount;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int maxColorCount = maxColors(s);
        cout << maxColorCount << endl;
    }

    return 0;
}
