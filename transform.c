    #include<stdio.h>
    int top =-1;
    char s[401];
    void push(char c)
    {
    top=top+1;
    s[top]=c;
    }
    void pop()
    {
    printf("%c",s[top]);
    top=top-1;
    }
    int main()
    {
    int i,j,n;
    char a[401];
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
    printf("\n");
    scanf("%s",&a[0]);
    j=0;
    while(a[j]!='\0')
    {
    if(a[j]=='(')
    {j=j+1;
    continue;
    }
    else if(a[j]=='+'||a[j]=='/'||a[j]=='-'||a[j]=='*'||a[j]=='^')
    push(a[j]);
    else if(a[j]==')')
    pop();
    else
    printf("%c",a[j]);
     
    j++;
     
    }
     
    }
    return 0;
    
