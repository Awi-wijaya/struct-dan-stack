#include <iostream>Add commentMore actions

using namespace std;

typedef int itemType;

const int MAXSTACK = 10;

typedef struct stack
{
    itemType Item[MAXSTACK];
    int Count;
} Stack;

void InitializeStack(Stack *S);Add commentMore actions
int Full(Stack *S);
int Empty(Stack *S);
void Pop(Stack *S, itemType *x);
void Push(Stack *S, itemType x);
void display(Stack *S);

int main(int argc, char const *argv[])Add commentMore actions
{
    cout << "Hello World!" << endl;
    Stack S;
    itemType x;

    InitializeStack(&S);

    Push(&S, 3);
    Push(&S, 7);
    Push(&S, 4);
    Push(&S, 2);
    Push(&S, 6);
    Pop(&S, &x);
    display(&S);

    return 0;
}

void InitializeStack(Stack *S) {Add commentMore actions
    S->Count = 0;
}

int Full(Stack *S) {Add commentMore actions
    return (S->Count == MAXSTACK);
}

int Empty(Stack *S) {Add commentMore actions
    return (S->Count == 0);
}

void Pop(Stack *S, itemType *x) {Add commentMore actions
    if (S->Count == 0)
    {
        cout << "Stack masih kosong" << endl;
    } else {
        --(S->Count);
        *x = S->Item[S->Count];
    }
    
}

void Push(Stack *S, itemType x) {Add commentMore actions
    if (S->Count == MAXSTACK) {
        cout << "Stack sudah penuh" << endl;
    } else {
        S->Item[S->Count] = x;
        ++(S->Count);
    }
}

void display(Stack *S) {Add commentMore actions
    cout << "Menampilkan data stack" << endl;

    for (int i = (S->Count) - 1; i >= 0; --i)
    {
        cout << S->Item[i] << endl;
    }
    
}
