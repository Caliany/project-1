//1.二叉树的前序遍历.
typedef struct TreeNode Node;

//Res指用来保存树里面每一个结点的内存空间
//index向空间哪一个位置保存
void _PreOrder(Node* pRoot, int* pRes, int* index){
	if (pRoot){
	    //遍历根节点
		pRes[*index] = pRoot->val;
		(*index)++;
		 
	    //遍历根的左子树
		_PreOrder(pRoot->left, pRes, index);

		//遍历根的右子树
		_PreOrder(pRoot->right, pRes, index);
	}
}

//获取二叉树结点个数
int GetTreeSize(Node* pRoot){
	if (NULL == pRoot){
		return 0;
	}
	return GetTreeSize(pRoot->left) + GetTreeSize(pRoot->right) + 1;
}

//将二叉树中每个结点值域保存到一段连续空间中返回
int* preorderTraversal(struct TreeNode* root, int* returnSize){
	*returnSize = GetTreeSize(root);
	int* pRes = (int*)malloc(sizeof(int)*(*returnSize));	//开辟空间
	if (NULL == pRes){
		assert(0);
		return NULL;
	}
	int index = 0;
	_PreOrder(root,pRes,returnSize);
	return pRes;
}

//2.二叉树的中序遍历.
typedef struct TreeNode Node;

void _InOrder(Node* root, int* pRes, int* index){
	if (root){
		//遍历根的左子树
		_InOrder(root->left, pRes, index);

		//遍历根节点
		pRes[*index] = root->val;
		(*index)++;
	
		//遍历根的右子树
		_InOrder(root->right, pRes, index);
	}
}

int GetTreeSize(Node* root){
	if (NULL == root){
		return 0;
	}
	return GetTreeSize(root->left) + GetTreeSize(root->right) + 1;
}

//将二叉树中每个结点值域保存到一段连续空间中返回
int* inOrderTraversal(struct Node* root, int* returnSize){
	*returnSize = GetTreeSize(root);
	int* pRes = (int*)malloc(sizeof(int*)(*returnSize));
	if (NULL == pRes){
		assret(0);
		return NULL;
	}
	int index = 0;
	_Inorder(root, pRes, &index);
	return pRes;
}

//3.二叉树的后序遍历.
typedef struct TreeNode Node;

void _PosOrder(Node* pRoot, int* pRes, int* index){
	if (pRoot){
		//遍历根的左子树
		_PosOrder(pRoot->left, pRes, index);

		//遍历根的右子树
		_PosOrder(pRoot->right, pRes, index);

		//遍历根节点
		pRes[*index] = pRoot->val;
		(*index)++;
	}
}

int GetTreeSize(Node* pRoot){
	if (NULL == pRoot){
		return 0;
	}
	return GetTreeSize(pRoot->left) + GetTreeSize(pRoot->right) + 1;
}

//将二叉树中每个结点值域保存到一段连续空间中返回
int* posorderTraversal(struct TreeNode* root, int* returnSize){
	/*int* pRes = NULL;
	if (NULL == root){
		return NULL;
	}*/
	*returnSize = GetTreeSize(root);
	pRes = (int*)malloc(sizeof(int)*(*returnSize));
	if (NULL == pRes){
		assert(0);
		return NULL;
	}
	int index = 0;
	_PreOrder(root, pRes, returnSize);
	return pRes;
}

