// Stack Class from scratch
// Code by: Nishant Shah

#include <iostream>
#include <assert.h>
using namespace std;

class Stack
{
private:
    static const int m_maxLength = 10; // To maintain the length of the array thoughout the scope of the program
    int m_arr[m_maxLength];
    int m_arrIndex = 0;
public:
    void reset();
    bool push(int push_value);
    int pop();
    void print();
};

void Stack::reset()
{
    m_arrIndex = 0;    
}

bool Stack::push(int push_value)
{
    if (m_arrIndex == m_maxLength)
        return false;

    m_arr[m_arrIndex++] = push_value;
    return true;

        
}

int Stack::pop()
{
    assert(m_arrIndex > 0); // If the length of the stack is 0, the program terminates
    return m_arr[--m_arrIndex];    
}

void Stack::print()
{
    cout << "( ";
    for (int i = 0; i < m_arrIndex; ++i)
        cout << m_arr[i] << ' ';
    cout << ")\n";
}


int main()
{
    Stack stack;
	stack.reset();
 
	stack.print();
 
	stack.push(5);
	stack.push(3);
	stack.push(8);
	stack.print();
 
	stack.pop();
	stack.print();
 
	stack.pop();
	stack.pop();
 
	stack.print();
    return 0;
}
