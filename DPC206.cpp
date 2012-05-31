#include <iostream>
using namespace std;

int count;

long reverse(long n)
{
    ++count;
    long rev = 0;
    while(n)
    {
        rev = rev*10 + n%10;
        n /=10;
    }
    return rev;
}

int main()
{
    int iter;
    long num,mid,result;
    bool is_palin=false;
    cin>>iter;
    if(!(iter && (iter<101)))
    {
        return -1;
    }
    while(iter--)
    {
        cin>>num;
        is_palin = false;
        while(!is_palin)
        {
            num += reverse(num);
            result = reverse(num);
            if(result == num)
                is_palin = true;
            else
                mid = result;
        }
        cout<<count/2<<" "<<result<<endl;
        count = 0;
        result = 0;
    }
    return 0;
}
