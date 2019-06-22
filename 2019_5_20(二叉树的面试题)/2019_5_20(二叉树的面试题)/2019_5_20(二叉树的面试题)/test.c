//1.��������ǰ�����.
typedef struct TreeNode Node;

//Resָ��������������ÿһ�������ڴ�ռ�
//index��ռ���һ��λ�ñ���
void _PreOrder(Node* pRoot, int* pRes, int* index){
	if (pRoot){
	    //�������ڵ�
		pRes[*index] = pRoot->val;
		(*index)++;
		 
	    //��������������
		_PreOrder(pRoot->left, pRes, index);

		//��������������
		_PreOrder(pRoot->right, pRes, index);
	}
}

//��ȡ������������
int GetTreeSize(Node* pRoot){
	if (NULL == pRoot){
		return 0;
	}
	return GetTreeSize(pRoot->left) + GetTreeSize(pRoot->right) + 1;
}

//����������ÿ�����ֵ�򱣴浽һ�������ռ��з���
int* preorderTraversal(struct TreeNode* root, int* returnSize){
	*returnSize = GetTreeSize(root);
	int* pRes = (int*)malloc(sizeof(int)*(*returnSize));	//���ٿռ�
	if (NULL == pRes){
		assert(0);
		return NULL;
	}
	int index = 0;
	_PreOrder(root,pRes,returnSize);
	return pRes;
}

//2.���������������.
typedef struct TreeNode Node;

void _InOrder(Node* root, int* pRes, int* index){
	if (root){
		//��������������
		_InOrder(root->left, pRes, index);

		//�������ڵ�
		pRes[*index] = root->val;
		(*index)++;
	
		//��������������
		_InOrder(root->right, pRes, index);
	}
}

int GetTreeSize(Node* root){
	if (NULL == root){
		return 0;
	}
	return GetTreeSize(root->left) + GetTreeSize(root->right) + 1;
}

//����������ÿ�����ֵ�򱣴浽һ�������ռ��з���
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

//3.�������ĺ������.
typedef struct TreeNode Node;

void _PosOrder(Node* pRoot, int* pRes, int* index){
	if (pRoot){
		//��������������
		_PosOrder(pRoot->left, pRes, index);

		//��������������
		_PosOrder(pRoot->right, pRes, index);

		//�������ڵ�
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

//����������ÿ�����ֵ�򱣴浽һ�������ռ��з���
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

