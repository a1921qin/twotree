#ifndef TREE_H
#define TREE_H
#include<stdio.h>
#include<stdio.h>
#include<malloc.h>
#define MAXSIZE 100

typedef char dataType;
//二叉树结构
typedef struct bnode{
	dataType data;
	struct bnode *lChild,*rChild;
}Bnode,*BTree;
//队列结构
typedef struct {
	BTree data[MAXSIZE];
	int front,rear;
}SeqQueue,*PSeqQueue;
//栈的结构
typedef struct {
	BTree data[MAXSIZE];
	int top;
}SeqStack,*PSeqStack;

PSeqQueue initSeqQueue();
int emptyQueue(PSeqQueue queue);
int pushQueue(PSeqQueue queue,Bnode *node);
int popQueue(PSeqQueue queue,BTree *node);
int frontQueue(PSeqQueue queue,BTree *node);
void destroyQueue(PSeqQueue *queue);
PSeqStack initStack();
int emptyStack(PSeqStack stack);
int pushStack(PSeqStack stack,Bnode *node);
int popStack(PSeqStack stack,BTree *node);
void visit(char ch);
BTree createTree();
void perOrder(BTree tree);
void inOrder(BTree tree);
void postOrder(BTree tree);
void levelOrder(BTree tree );
int height(BTree tree);
void levelCount(BTree tree,int l,int num[]);
int countTree(BTree tree);


#endif
