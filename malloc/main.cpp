//
//  main.cpp
//  malloc
//
//  Created by admin on 15/12/16.
//  Copyright © 2015年 内师大. All rights reserved.
//

#include <iostream>

struct Student
{
    char name[100];
    int age;
    char sex[3];
};
int main(int argc, const char * argv[]) {
    // insert code here...
    Student *p;
    Student temp;
    int i,j;
    int N;
    scanf("%d",&N);
    //p = (int *)malloc(N*4);
    p = new Student[N];
    if (p==0) {
        exit(0);
    }
    for (i = 0; i<N; i++)
        scanf("%s %s %d",p[i].name,p[i].sex,&p[i].age);
    for (int i = 0; i<N-1; i++)
    {
        for (j=0; j<N-1-i;j++ )
        {
            if (p[j].age>p[j+1].age)
            {
                temp = p[j];
                p[j] = p[j+1];
                p[j+1] = temp;
            }
        }
    }
    for (i=0; i<N; i++)
    {
        printf("%s %s %d",p[i].name,p[i].sex,p[i].age);
    }
    delete p;
    return 0;
}
