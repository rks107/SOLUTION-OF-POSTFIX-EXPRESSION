#include<bits/stdc++.h>
using namespace std;
int main()
 {
   int t;
   cin>>t;
   while(t--)
   {
       char exp[100];
       cin>>exp;
       
       stack<int>s;
       for(int i=0;i<strlen(exp);i++)
       {
           if(isdigit(exp[i])){
               s.push(exp[i]-'0');
           }
           else
           {
               int val1=s.top();
               s.pop();
               int val2=s.top();
               s.pop();
               switch(exp[i])
               {
                   case '+':
                            s.push(val2 + val1);
                             break;
                   case '-':
                            s.push(val2-val1);
                            break;
                   case '*':
                            s.push(val2*val1);
                            break;
                   case '/':
                            s.push(val2/val1);
                            break;
               }
               
           }
       }
     cout<<s.top()<<endl;
   }
	return 0;
}