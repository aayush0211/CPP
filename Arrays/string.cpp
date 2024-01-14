#include<iostream>
#include<string>
using namespace std;

int CountOccurence(const string &str1, char target){
    int cnt=0;
    for(char c:str1){
        if(c==target){
            cnt++;
        }
    }
    return cnt;
}
int blank(const string &str1){
    int cnt=0;
    for(char c: str1){

        if(c==' '){
            cnt++;
        }
    }
    return cnt;
}
int cntWords(string &str1){
    int cnt=0;
    bool inWord = false;
    for(char c: str1){
        if(c==' ' || c=='\t' || c=='\n'){
            inWord=false;
        }
        else if(!inWord){
            inWord = true;
            cnt++;
        }
    }
    return cnt;
}
int cntVowel(string &str1){
    int cnt=0;
    for(char c: str1){
        char lower = tolower(c);
        if(lower=='a' || lower=='e' || lower=='i' || lower=='o' || lower=='u'){
            cnt++;
        }
    }
    return cnt;
}
int main(){
    string str;
    char target;
    cout<<"Enter a string: \n";
    getline(cin, str);
     cout<<"Enter a character : \n";
    cin>>target;

    int Occurrence = CountOccurence(str,target);
    int blankSpaces = blank(str);
    int wordCnt = cntWords(str);
    int vowelCnt = cntVowel(str);

    cout << "Occurrences of '" << target << "': " << Occurrence << endl;
    cout << "Blank spaces: " << blankSpaces << endl;
    cout << "Number of words: " << wordCnt << endl;
    cout << "Total number of vowels: " << vowelCnt << endl;

    return 0; 
}