#include"tree.h"

int main(){
	BTree tree = createTree();
	int i=0;
	int countNum[10]={0,0,0,0,0,0,0,0,0,0},l=1,treeHeight,treeCount;//记录每层的节点数,l从1开始,树的深度

		treeHeight = height(tree);
	printf("\n此二叉树的深度为: %d\n",treeHeight);

	treeCount = countTree(tree);
	printf("此二叉树的节点总数为: %d\n",treeCount);

	levelCount(tree,l,countNum);
	printf("此二叉树各层的节点数为: ");
	for(i=1;i<=treeHeight;i++){
		printf("第%d层数目: %d,  ",i,countNum[i]);
	}
	printf("\n\n");

	printf("先序遍历此二叉树: ");
	perOrder(tree);
	printf("\n");

	printf("中序遍历此二叉树: ");
	inOrder(tree);
	printf("\n");

	printf("后序遍历此二叉树: ");
	postOrder(tree);
	printf("\n");

	printf("层次遍历此二叉树: ");
	levelOrder(tree);
	printf("\n");
	return 0;
}

