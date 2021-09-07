//
#include<iostream>
#include<string>
#define MAX 20
using namespace std;
 char s[20];
 int top=-1;
 void push(char ch){
    if(top==MAX-1){
         cout<<"StackOverFlow"<<endl;
    }

    else
    {
        top++;
        s[top]=ch;
    }


 }
char pop(){
    char ch;

    if(top==-1)
        cout<<"StackUnerFlow"<<endl;
    else
    {

        ch=s[top];
        s[top]='\0';
        top--;
        return (ch);
    }
return 0;

 }
 int priority(char alpha){
    if(alpha=='+'||alpha=='-')
        return(1);
    if(alpha=='*'||alpha=='/')
        return(2);
    if(alpha=='$'|| alpha=='^')
        return(3);
    return 0;
 }
string convert(string infix){
    int i=0;
    string postfix="";
    while(infix[i]!='\0'){
        if(infix[i]>='a' && infix[i]<='z' || infix[i]>='A' && infix[i]<='Z'){
            postfix.insert(postfix.end(),infix[i]);
            i++;
        }
       else if(infix[i]=='(' || infix[i]=='{' || infix[i]=='['){
            push(infix[i]);
            i++;

        }
        else if(infix[i]==')' || infix[i]=='}' || infix[i]==']'){
            if(infix[i]==')'){
                while(s[top]!='('){
                            postfix.insert(postfix.end(),pop());

                      }
                        pop();
                            i++;
            }
            if(infix[i]=='}'){
                while(s[top]!='{'){
                            postfix.insert(postfix.end(),pop());

                      }
                                                  pop();
                            i++;
            }
            if(infix[i]=='['){
                while(s[top]!=']'){
                            postfix.insert(postfix.end(),pop());

                      }
                                                  pop();
                            i++;
            }

        }
        else {
        if(top==-1){
            push(infix[i]);
            i++;
        }


    else if(priority(infix[i])<=priority(s[top])){
    postfix.insert(postfix.end(),pop());
    while(priority(s[top])==priority(infix[i])){
        postfix.insert(postfix.end(),pop());
        if(top<0){
            break;
        }
    }
    push(infix[i]);
    i++;
    }
    else if(priority(infix[i])>priority(s[top])){
        push(infix[i]);
        i++;
    }

}
 }
 while(top!=-1){
    postfix.insert(postfix.end(),pop());

 }
     cout<<"The converted postfix string is : "<<postfix<<endl;
    return postfix;
}
int main(){
    int t;
    cin>>t;
    while(t--){
    string infix,postfix;

    cout<<"Enter The infix Expression : ";
    cin>>infix;
    postfix=convert(infix);
    }
    return 0;
}











