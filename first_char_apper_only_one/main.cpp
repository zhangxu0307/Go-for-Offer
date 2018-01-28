#include <iostream>
using namespace std;

char getFristCharAppearOnce(char *s)
{
    char hash[256];
    for(int i = 0; i < 256;i++)
        hash[i] = 0;
    for(int i = 0; s[i] != '\0';i++)
    {
        hash[s[i]-0] += 1;
    }

    for(int i = 0; s[i] != '\0';i++)
    {
        if(hash[s[i]-0] == 1)
            return s[i];
    }

    return ' ';
}


int main() {
    char s[] = "aabbccccddefg";
    char ans = getFristCharAppearOnce(s);
    cout<<ans<<endl;
}