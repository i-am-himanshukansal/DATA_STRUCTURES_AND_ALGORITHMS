  if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z'||s[i]>='0'&&s[i]<='9'){
                        string str = "";
                        str+=s[i];
                        stri.push(str);
                }else if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^'){
                        string s1 = stri.top();
                        stri.pop();
                        string s2 = stri.top();
                        stri.pop();
                        string str = '('+s2+s[i]+s1+')';
                        stri.push(str);
                }
                i++;