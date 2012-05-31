#include <iostream>
#include <string>
using namespace std;

int main()
{
    int iter;
    bool flag;
    cin>>iter;
    while(iter)
    {
        flag = true;
        string str1, str2;
        cin>>str1>>str2;
        int str1_count[26]={0},str2_count[26]={0};
        int len1 = str1.size();
        int len2 = str2.size();
        if((len1 != len2) || (len1 > 20) || (len2 > 20))
        {
            cout<<"NO"<<endl;
            --iter;
            continue;
        }
        
        for(int itr1 = 0;itr1 < len1;++itr1)
            ++str1_count[str1[itr1] - 'a'];
            
        for(int itr2 = 0;itr2 < len2;++itr2)
            ++str2_count[str2[itr2] - 'a'];
        
        for(int i=0;i<26;++i)
            if(str1_count[i] == str2_count[i])
                continue;
            else
            {
                flag = false;
                break;
            }
        
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        --iter;
    }
    return 0;
}
