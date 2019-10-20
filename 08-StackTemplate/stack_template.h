//------------------------------------------------------------------------------
//         Filename:  stack_template.h
//------------------------------------------------------------------------------

#ifndef __STACK_TEMP_H__
#define __STACK_TEMP__H__

template<class T> class Stack {
public:
  // Constructor
  Stack(int size);
  // Destructor
  ~Stack();

  void         push(T);
  T            pop();

private:
  int m_iSize;
  int m_iTop;
  T            *m_pcStore;
};


// Constructor
template<class T> Stack<T>::Stack(int size) :
    m_iSize(size),
    m_iTop(0)
{
    m_pcStore = new T[m_iSize];
}

// Destructor
template<class T> Stack<T>::~Stack()
{
    if (m_pcStore)
        delete[] m_pcStore;
}

// Method to put a character onto the stack
template<class T> void Stack<T>::push(T c)
{
    if (m_iTop<m_iSize)
        m_pcStore[m_iTop++] = c;
}

// Method to get the upper element from the stack
// Returns:
//   - upper character, if stack is not empty,
//   - 0 (zero), if stack is empty.
template<class T> T Stack<T>::pop()
{
    return m_iTop ? m_pcStore[--m_iTop] : 0;
}

#endif // __STACK_H__

//-----------------------------------------------------------------------------
//    END OF FILE
//-----------------------------------------------------------------------------
