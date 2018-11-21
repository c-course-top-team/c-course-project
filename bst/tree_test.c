/*
 * This file is tree_test.c
 * Binary Search Tree testing
 *
 */

#include <stdio.h>
#include "tree.h"

int main(void)
{
    PTREE_NODE tree = NULL;

    if (!init_log())
        return -1;

    tree = add_node(tree, 1);
    tree = add_node(tree, 2);
    tree = delete_node(tree, 1);
    
    fprintf(g_log, "Well done!\n");
    destroy_tree(tree);

    deinit_log();
    return 0;
}
