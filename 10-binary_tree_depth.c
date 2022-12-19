#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a bi-tree
 * @tree: pointer to root node of tree to measure the depth
 * Return: 1, if NULL return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t ldepth, rdepth;

	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (0);
	ldepth = binary_tree_depth(tree->left);
	rdepth = binary_tree_depth(tree->right);

	if (ldepth > rdepth)
		return (ldepth - 1);
	else
		return (rdepth - 1);
}
