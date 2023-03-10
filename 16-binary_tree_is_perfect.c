#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to root node to check if perfect
 * Return: if NULL return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t right_height, left_height;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (binary_tree_height(tree->right) == binary_tree_height(tree->left))
	{
		right_height = binary_tree_is_perfect(tree->right);
		left_height = binary_tree_is_perfect(tree->left);
	}
	else
		return (0);
	if (right_height == 1 && left_height == 1)
		return (1);
	else
		return (0);
}
