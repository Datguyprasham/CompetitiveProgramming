#include<iostream>
#include<cstring>
using namespace std;
int main()
{

    char s[101];
    int i,j,len,lower=0,upper=0;
    while(cin>>s !=EOF)
    {
        len=strlen(s);
        for(i=0; i<len; i++)
        {
            if(s[i]>='a'&&s[i]<='z')
                lower++;
            else if(s[i]>='A'&&s[i]<='Z')
                upper++;
        }
        if(lower>upper)
        {
            cout<<strlwr(s);
        }
        else if(lower<upper)
        {
            cout<<strupr(s);
        }
        else if(lower==upper)
        {
            cout<<strlwr(s);
        }
        lower=0,upper=0;
    }
    return 0;
}
