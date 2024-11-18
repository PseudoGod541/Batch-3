#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string sentence;
        getline(cin,sentence);
        map<string,int>wordCount;
        istringstream iss(sentence);
        string word;
        string mostFreqWord;
        int maxCount=0;
        while(iss>>word)
        {
            ++wordCount[word];
            if(wordCount[word]>maxCount)
            {
                maxCount=wordCount[word];
                mostFreqWord=word;
            }
        }
        cout<<mostFreqWord<<" "<<maxCount<<endl;
    }
    return 0;
}
