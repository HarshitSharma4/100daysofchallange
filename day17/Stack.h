#if !defined(_STACK_H_)
#define _STACK_H
// #include<iostream>
class stack
{
    int top;
    int max;
    int array_stk[200];

public:
    stack()
    {
        std::cout << "enter maximum element=" << std::endl;
        std::cin >> max;
        top = -1;
    }

    stack(int max1) : max{max1}
    {
        top = -1;
    }
    void push();
    void pop();
    void peek();
    void dispay()
    {
        std::cout<<"[";
        for(int i=0;i<=top;i++){
            std::cout<<array_stk[i]<<" , ";
        }
        std::cout<<"]"<<std::endl;
    }
    ~stack(){
        std::cout<<"stack has been deleted";
    }
};
void stack::push()
{
    if (top < max - 1)
    {
        top++;
        std::cout << "enter element which you want to add in array::--";
        int a;
        std::cin >> a;
        array_stk[top] = a;
    }
    else
    {
        std::cout << "over flow condition" << std::endl;
    }
}
void stack::pop()
{
    if (top > -1)
    {

        std::cout << "the element which is delete" << array_stk[top] << std::endl;
        top--;
    }
    else
    {
        std::cout << "under flow condition" << std::endl;
    }
}
void stack::peek()
{
    std::cout << "top value is :" << top << std::endl;
}



#endif //STACK