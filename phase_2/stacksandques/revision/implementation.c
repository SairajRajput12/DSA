#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int topIndex; 
    int *arr; 
    int size;  
} Stack; 

Stack* createStack(int size){
    Stack *stack = (Stack *)malloc(sizeof(Stack));
    stack->topIndex = -1;
    stack->size = size;
    stack->arr = (int *)malloc(size * sizeof(int));
    return stack;
}

void push(Stack *st,int val){
    if(st->size-st->topIndex > 1){
        // means i am checking available space 
        st -> arr[++st->topIndex] = val; 
    }
    else{
        printf("stack overflow has occured \n"); 
    }
}

void pop(Stack *st){
    if(st->topIndex == -1){
        printf("We cannot remove elements from an empty stack");
        return; 
    }
    else{
        st->topIndex --; 
    }
}

int top(Stack *st){
    if(st->topIndex == -1 ||  (st -> topIndex >= st->size)){
        printf("stack is empty or overflowed"); 
        return -1; 
    }
    return st -> arr[st->topIndex]; 
}

int isempty(Stack *st){
    return (st->topIndex == -1);
}

void freeStack(Stack *stack) {
    free(stack->arr);
    free(stack);
}

int main() {
    // Enter the project name
    printf("stack using struct\n");
    printf("exit\n");

    Stack *st = createStack(5);
    push(st, 22);
    push(st, 43);
    push(st, 44);
    push(st, 45);
    push(st, 46);
    push(st, 47); // This will cause overflow
    push(st, 48); // This will also cause overflow

    printf("%d\n", top(st));
    pop(st); 
    printf("%d\n", top(st));
    pop(st); 
    printf("%d\n", top(st));



    // Free the stack memory
    freeStack(st);

    return 0;
}
