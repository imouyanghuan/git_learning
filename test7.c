//
//  test7.c
//  c_project
//
//  Created by ouyanghuan on 2019/2/18.
//  Copyright © 2019 ouyanghuan. All rights reserved.
//

#include <stdio.h>
#include "SeqStack.h"

struct Person
{
    char name[20];
    int age;
};

int main07()
{
    struct Person p1 = {"aaa", 10};
    struct Person p2 = {"bbb", 20};
    struct Person p3 = {"ccc", 30};
    struct Person p4 = {"ddd", 40};
    struct Person p5 = {"eee", 50};
    struct Person p6 = {"fff", 60};

    SeqStack * s = Init_SeqStack();
    if(NULL == s)
    {
        return -1;
    }
    
    Push_SeqStack(s, &p1);
    Push_SeqStack(s, &p2);
    Push_SeqStack(s, &p3);
    Push_SeqStack(s, &p4);
    Push_SeqStack(s, &p5);
    Push_SeqStack(s, &p6);
    
    struct SStack * mystack =  (struct SStack *)s;
    while (mystack->size > 0) {
        struct Person * p = (struct Person *)Top_SeqStack(mystack);
        printf("person Name: %s  Age: %d\n", p->name, p->age);
        Pop_SeqStack(mystack);
    }
    Destroy_SeqStack(mystack);
    return 0;
}
