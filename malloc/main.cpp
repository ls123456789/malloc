//
//  main.cpp
//  malloc
//
//  Created by admin on 15/12/16.
//  Copyright © 2015年 内师大. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int *p;
    int i,j,temp;
    int N;
    scanf("%d",&N);
    p = (int *)malloc(N*4);
    
    for (i = 0; i<N; i++)
        scanf("%d",&p[i]);
    for (int i = 0; i<N-1; i++)
    {
        for (j=0; j<N-1-i;j++ )
        {
            if (p[j]>p[j+1])
            {
                temp = p[j];
                p[j] = p[j+1];
                p[j+1] = temp;
            }
        }
    }
    for (i=0; i<N; i++)
    {
        printf("%d\n",p[i]);
    }
    return 0;
}
