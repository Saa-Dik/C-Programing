#include<iostream>
#include<queue>
using namespace std;
int main()
{
   queue<int>st; //queue as st hisabe bujailam

    st.push(5);
    st.push(6);
    st.push(15); //st.push mane amra amade queue te amar data ke push korteci
    cout<<(st.front())<<"\n";

}
