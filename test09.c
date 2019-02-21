////
////  test09.c
////  c_project
////
////  Created by ouyanghuan on 2019/2/19.
////  Copyright © 2019 ouyanghuan. All rights reserved.
////
//
//#include "LinkStack.h"
//
//int isLeft(char p)
//{
//    return p == '(';
//}
//
//int isRight(char p )
//{
//    return p == ')';
//}
//
//void printError(const char * str, char * ErrorMsg, char * pos)
//{
//    printf("%s\n", ErrorMsg);
//    int dis =(int) (pos - str);
//    for(int i = 0; i < dis; i++)
//    {
//        printf(" ");
//    }
//    printf("A\n");
//}
//
//void test09()
//{
//    const char * str = "5+5*(6()+9/3*1)-(1)+3(";
//    char * p = (char *)str;
//    printf("sizeof char * %d\n",sizeof(char *));
//    LinkStack stack = Init_LinkStack();
//
//    while (*p != '\0') {
//        if(isLeft(*p))
//        {
//            Push_LinkStack(stack, p);
//        }
//
//        if(isRight(*p))
//        {
//            if(Size_LinkStack(stack) > 0)
//            {
//                Pop_LinkStack(stack);
//            }
//            else
//            {
//                printError(str, "未匹配到左括号\n", p);
//            }
//        }
//        p++;
//    }
//    while (Size_LinkStack(stack)) {
//        printError(str, "未匹配到右括号\n", Top_LinkStack(stack));
//        Pop_LinkStack(stack);
//    }
//
//    Destroy_LinkStack(stack);
//    stack = NULL;
//}
//
//int main()
//{
//    test09();
//    return 0;
//}
