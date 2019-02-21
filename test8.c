//
//  modiy this file to check  git add -u 
//  test8.c
//  c_project
//
//  Created by ouyanghuan on 2019/2/19.
//  Copyright © 2019 ouyanghuan. All rights reserved.
//

#include <stdio.h>
#include "LinkStack.h"

struct Person
{
    struct LinkNode node;
    char name[20];
    int age;
};


int main08()
{
    struct Person p1 = {NULL,"aaa", 10};
    struct Person p2 = {NULL,"bbb", 20};
    struct Person p3 = {NULL,"ccc", 30};
    struct Person p4 = {NULL,"ddd", 40};
    struct Person p5 = {NULL,"eee", 50};
    struct Person p6 = {NULL,"fff", 60};
    
    LinkStack stack = Init_LinkStack();
    if(NULL == stack)
    {
        return -1;
    }
    
    Push_LinkStack(stack, &p1);
    Push_LinkStack(stack, &p2);
    Push_LinkStack(stack, &p3);
    Push_LinkStack(stack, &p4);
    Push_LinkStack(stack, &p5);
    Push_LinkStack(stack, &p6);

    struct LStack * s =  (struct LStack *)stack;
    while (s->size > 0) {
        struct Person * p  =  (struct Person *)Top_LinkStack(s);
        printf("person Name: %s  Age: %d\n", p->name, p->age);
        Pop_LinkStack(stack);
    }
    Destroy_SeqStack(stack);
    
    return 0;
}
