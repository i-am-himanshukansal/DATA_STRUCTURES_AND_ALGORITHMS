        #include<bits/stdc++.h>
        using namespace std;
        string infix_to_postfix(string&s){
                string ans = "";
                int i=0;
                stack<char>st;
                unordered_map<char,int>prior =  {{'^',3},{'*',2},{'/',2},{'+',1},{'-',1}};
                while(i<s.size()){
                        if(s[i]>='a'&&s[i]<='z' || s[i]>='A'&&s[i]<='Z' || s[i]>='0'&&s[i]<='9'){
                                ans+=s[i];
                        }else if(s[i]=='('){
                                st.push(s[i]);
                        }else if(s[i]==')'){
                                while(st.top()!='('){
                                        ans+=st.top();
                                        st.pop();
                                }
                                st.pop();
                        }else{
                                while(!st.empty() && prior[s[i]]<=prior[st.top()]){
                                        ans+=st.top();
                                        st.pop();
                                }
                                st.push(s[i]);
                        }
                        i++;
                }

                while(!st.empty()){
                        ans+=st.top();
                        st.pop();
                }
                return ans;
        }
        int main(){
                string x;
                cout<<"enter infix expression : ";
                cin>>x;

                string s = infix_to_postfix(x);
                cout<<"after infix postfix conversion"<<s<<endl;
                cout<<s<<endl;

                return 0;
        }