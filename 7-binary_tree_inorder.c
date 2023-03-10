#include "binary_trees.h"
/**
 * binary_tree_inorder - traverses bi-tree using in-order
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to func to call for each node. Value in
 * the node must be passed as a parameter to thi func
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
