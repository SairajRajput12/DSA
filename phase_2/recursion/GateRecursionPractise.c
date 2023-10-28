#include<stdio.h> 


void Nontail(int n){
    if(n <= 0){
        return; 
    }

    else{
        Nontail(n-1); 
        printf("%d\n",n); 
        Nontail(n-1); 
    }

}

int find(int n,int m){ // returns 43. refer backpage of book. 
    static int i = 10;
    i += (n+m); 
    if(i > 40){
        return i; 
    }
    else{
        return find(m+n,m-n); 
    }
}

// what does the following function can do??
int fun(int x, int y)
{
    if (y == 0)   return 0;
    return (x + fun(x, y-1));
}

// answer it gives x*y. 

// what does the following function do??
int func(int x, int y)
{
    if (y == 0)   return 0;
    return (x + fun(x, y-1));
}
 
int fun2(int a, int b)
{
    if (b == 0) return 1;
    return fun(a, fun2(a, b-1));
}

// this function calculate the power of x^y. 
// Therefore, fun2() calculates the exponentiation of the first argument a raised to the power of the second argument b. It does this using the fun() function to perform multiplication in a recursive manner




int findus(int n){
    if(n%10 == 0) return (n%10); 
    else return findus(n%10+findus(n/10));    
    // f(9874)
    // f(4+f(987)) 
    // f(4+f(7+f(98))) 
    // f(4+f(7+f(8+f(9)))) 
    // f(4+f(7+f(8+f(9+0)))
}

// question: 
unsigned int foo(unsigned int n, unsigned int r)
{
    if (n > 0)
        return (n % r + foo(n / r, r));
    else
        return 0;
}
// it will return 2. 

// question: 

int fc(int n, int *f_p)
{
    int t, f;
    if (n <= 1)
    {
        *f_p = 1;
        return 1;
    }
    t = fc(n- 1,f_p);
    f = t+ * f_p;
    *f_p = t;
    return f;
}

// from f1 and f2 which code will produce same output as f. 
// answer: f1.

void f (int n)
{
    if (n <= 1)  {
        printf ("%d", n);
    }
    else {
        f (n/2);
        printf ("%d", n%2);
    }
}

void f1 (int n)
{
    if (n/2)  {
        f(n/2);
    }
    printf ("%d", n%2);
}

void f3 (int n)
{
    if (n <=1)  {
        printf ("%d", n);
    }
    else {
        printf ("%d", n%2);
        f (n/2);
    }
}

int fun2(int A[], int N)
{
    if (N <= 0)
        return 0;
    return (fun(A, N - 1) + A[N - 1]);
}


int main(){
     // enter the project name
    // question 1: 
    // Nontail(3); 

    // question 2: 
    // printf("%d",(1,2)); 

    // question 3: 
    printf("%d\n",findus(9874)); // returns 1
    // printf("%d\n",2%2); 

  return 0;
}