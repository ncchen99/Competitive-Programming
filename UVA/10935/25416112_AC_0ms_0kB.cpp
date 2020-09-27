#include <iostream>
#include <cstring>
#include <stack>
#include <queue>
using namespace std;
int main()
{
    while(1)
    {
        int a,last=1;
        queue<int> v1;
        cin>>a;
        if(a==0)break;
        for(int i=1;i<=a;i++)
        {
            v1.push(i);
        }
        cout<<"Discarded cards:"<<(a==1 ? "":" ");
        int i=2;
        while(1)
        {
            if(v1.front()==v1.back()) break;
            cout<<v1.front();
            if(i<a)cout<<", ";
            v1.pop();
            last=v1.front();
            v1.pop();
            v1.push(last);
            i++;
        }
        cout<<endl;
        cout<<"Remaining card: "<<last<<endl;
    }
}
