#include<iostream>
class stake {
    int top;
    int max;
    int array_stk[200];
    public :

    stake(){
        std::cout<<"enter maximum element="<<std::endl;
        std::cin>>max;    //want work
        // call();
        top=-1;
    }

    stake(int max1):max{max1}{
     top=-1;
    }  
    void push(int);
    void pop();
    void peek();
    int showelement(){
        return array_stk[top];
    }
};
void stake::push(int ele){
    if(top<max){
        top++;
        array_stk[top]=ele;
    }
    else{
        std::cout<<"over flow condition"<<std::endl;
    }
}
void stake::pop(){
    if(top>-1){
        array_stk[top]=0;
        top--;
    }
    else{
        std::cout<<"under flow condition"<<std::endl;
    }
}
void stake::peek(){
    std::cout<<"top value is :"<<top<<std::endl;
}

using namespace std;
int main(){
    stake obj1;
    while(true){
        cout<<"1 for push operation"<<endl;
        cout<<"2 for pop operation"<<endl;
        cout<<"3 for peek operation"<<endl;
        cout<<"4 for exit"<<endl;
        cout<<"\nenter your choise:"<<endl;
        int choise;
        cin>>choise;
        if(choise==4){
            break;
        }
        else{
            switch(choise){
                case 1:
                cout<<"enter element which you want to add in array::--";
                int a;
                cin>>a;
                obj1.push(a);
                break;
                case 2:
                cout<<"the element which is delete"<<obj1.showelement()<<endl;
                obj1.pop();
                break;
                case 3:
                obj1.peek();
                break;
                default:
                cout<<"invalid choise"<<endl;
            }

        }
    }

    return 0;
}