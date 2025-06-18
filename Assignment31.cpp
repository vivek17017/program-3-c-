#include<iostream>
#include<string.h>
using namespace std;
void sor(int p[],int n,bool a=true)
{
    if(a==true)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=n;j>0;j--)
            {
                if(p[j]<p[j-1])
                {
                    int t=p[j];
                    p[j]=p[j-1];
                    p[j-1]=t;
                }
            }
        }
    }
    if(a==false)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=n-1;j>0;j--)
            {
                if(p[j]>p[j-1])
                {
                    int t=p[j];
                    p[j]=p[j-1];
                    p[j-1]=t;
                }
            }
        }
    }
}
int main89()
{
    int q[]={3,1,5,2,7,5};
    sor(q,6);
    for(int i=0;i<6;i++)
    cout<<q[i]<<" ";
}

int add(int,int,int=0);
int add(int x,int y,int z)
{
    return x+y+z;
}
int main0()
{
    int a,b;
    cout<<"Enter two numbers";
    cin>>a>>b;
    cout<<"sum of "<<a<<" and "<<b<<" is "<<add(a,b);
    cout<<endl;
    cout<<"Enter three numbers";
    int c;
    cin>>a>>b>>c;
    cout<<"sum of "<<a<<","<<b<<" and "<<c<<" is "<<add(a,b,c);
}
void sort(int A[],int N, bool asc=true)
{
    if(asc)
    {
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N-1;j++)
            {
                if(A[j]>A[j+1])
                {
                    int k=A[j];
                    A[j]=A[j+1];
                    A[j+1]=k;
                }
            }
        }
    }
    else
    {
        for(int i=1;i<=N-1;i++)
        {
            for(int j=0;j<=N-1-i;j++)
            {
                if(A[j]<A[j+1])
                {
                    int k=A[j];
                    A[j]=A[j+1];
                    A[j+1]=k;
                }
            }
        }
    }
}
int main1()
{
    int q[]={3,1,5,2,7,5};
    bool v;
    sort(q,6,v);
    for(int i=0;i<6;i++)
    cout<<q[i]<<" ";
}
void sort_string(char A[][20],int N, bool asc=true)
{
    char temp[20];
    if(asc)
    {
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N-1;j++)
            {
                if(strcmp(A[j],A[j+1])>0)
                {
                    strcpy(temp,A[j]);
                    strcpy(A[j],A[j+1]);
                    strcpy(A[j+1],temp);
                }
            }
        }
    }
    else
    {
        for(int i=1;i<=N-1;i++)
        {
            for(int j=0;j<=N-1-i;j++)
            {
                if(strcmp(A[j],A[j+1])<0)
                {
                    strcpy(temp,A[j]);
                    strcpy(A[j],A[j+1]);
                    strcpy(A[j+1],temp);
                }
            }
        }
    }
}
void sort_string(char[][20],int, bool);
int main2()
{
    char q[][20]={"abc","uip","ihk","iho","bho","bns"};
    bool v=true;
    sort_string(q,6,v);
    for(int i=0;i<6;i++)
    cout<<q[i]<<" ";
}


void rotate_array(int arr[],int l,int d=1,int n=1)
{
    
    int arr1[n],arr2[l-n];
    for(int i=0;i<n;i++)
    {
        arr1[i]=arr[i];
    }
    for(int i=n,j=0;i<l;i++,j++)
    {
        arr2[j]=arr[i];
    }
    if(d==1)
    {
        int k;
        for(int i=0;i<n;i++)
        {
            if(n+i<l)
            {
                arr[n+i]=arr1[i];
                k=n+i;
            }
            else
            {
                arr[n+i-l]=arr1[i];
                k=n+i-l;
            }
        }
        for(int i=0,j=0,g=k+1;i<l-n;i++)
        {
            if(g<l)
            {
                arr[g]=arr2[i];
                g++;
                cout<<k<<"-"<<arr2[i]<<endl;
            }
            else
            {
                arr[j]=arr2[i];
                j++;
            }
        }
    }
    else
    {
        for(int i=0;i<l-n;i++)
        {
            arr[i]=arr2[i];
        }
        for(int i=l-n,j=0;i<l;i++,j++)
        {
            arr[i]=arr1[j];
        }
    }
}
void rotate_array(int[],int ,int ,int);
int main57()
{
    int arr[9]={4,5,9,8,4,2,7,8,9};
    rotate_array(arr,9,1,6);
    for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<" ";
    }

}


int next_prime_no(int a)
{
    int l=1;
    while(l)
    {
        int k=0;
        for(int i=1;i<=a+1;i++)
        {
            if((a+1)%i==0)
            k+=1;
        }
        if(k==2)
        l=0;
        else
        a=a+1;
    }
    return a+1;
}

int lcm(int a,int b,int c)
{
    int lcm=1,x=2;
    while(a>1||b>1||c>1)
    {
        if(a%x==0 || b%x==0 || c%x==0)
        {
            lcm=lcm*x;
            if(a%x==0)
            a=a/x;
            if(b%x==0)
            b=b/x;
            if(c%x==0)
            c=c/x;
        }
        else
        x=next_prime_no(x);
    }
    return lcm;

}


void print_prime(int n)
{
    int a=2;
    while(n>1)
    {
        if(n%a==0)
        {
            while (n%a==0)
        {
            n=n/a;
        }
        cout<<a<<" ";
        }
        else
        a=next_prime_no(a);
        
    }
}

int hcf(int a,int b)
{
    int y=a>b?a:b;
    int x=a>b?b:a;
    while (y%x)
    {
        int r=y%x;
        y=x;
        x=r;
        
    }
    return x;
}
float vol(float l,float b,float h)
{
    return l*b*h;
}
float vol(float r,float h)
{
    return (1/3)*3.14*r*r*h;
}
float vol(float r)
{
    return r*r*r;
}
void print_substring(char arr[],int a,int b=-1);
int main4()
{
    char arr[]="i am your lover";
    print_substring(arr,2,9);
}
void print_substring(char arr[],int a,int b)
{
    if(b==-1)
        b=strlen(arr);
    for(int i=a;i<b;i++)
    {
        cout<<arr[i];
    }
}
void swap(int arr1[],int arr2[],int n)
{
    for(int i=0;i<n;i++)
    {
        int j=arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=j;

    }
}
void merge(int arr1[],int m,int arr2[],int n,int arr3[],int r)
{
    int i,j,k;
    for(i=0,j=0,k=0;i<r&&j<r;k++)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k]=arr1[i];
            i++;
        }
        else
            {
                arr3[k]=arr2[j];
                j++;
            }
    }
    if(i<j)
    {
        while(i<m+n)
        {
            arr3[k]=arr1[i];
            i++;
            k++;
        }
    }

}

void RotateArray(int A[],int N,int d=1,int n=1)
{
    int i,t;
    if(d==1)
    {
        while(n)
        {
            t=A[N-1];
            for(i=N-1;i>=1;i--)
                A[i]=A[i-1];
            A[0]=t;
            n=n-1;
        }
    }
    else
    {
        while(n)
        {
            t=A[0];
            for(i=0;i<=N-2;i++)
                A[i]=A[i+1];
            A[N-1]=t;
            n=n-1;
        }
    }
}





int lcmm(int a,int b,int c)
{
    int L;
    for(L=a>b?a>c?a:c:b>c?b:c;L<=a*b*c;L++)
    {
        if(L%a==0&&L%b==0&&L%c==0)
        return L;
    }
    return 1;
}

int main()
{
    print_substring("i am a man of my word",4);

}










