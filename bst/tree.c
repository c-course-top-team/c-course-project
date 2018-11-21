/*
 * This file is tree.c
 * Binary Search Tree (BST) imlpementation
 *
 */

#include <stdio.h>
//#include <stdlib.h>
#include "tree.h"

FILE *g_log; // g stands for global

int init_log(void)
{
    g_log = fopen("log.txt", "w+");
    if (NULL == g_log)
    {
        printf("Can't create log file\n");
        return FALSE;
    }
 
    fprintf(g_log, "init_log()\n");
    return TRUE;   
}

void deinit_log(void)
{
    fprintf(g_log, "deinit_log()\n");
    fclose(g_log);
}

PTREE_NODE add_node(PTREE_NODE tree, int key)
{
    fprintf(g_log, "add_node(%p, %d)\n", tree, key);

    if (NULL == tree) 
    {
        // TODO: Allocate memory
 	// TODO: Check return value
        // TODO: set element (key, right, left)
    } 
    else if (tree->key < key) 
        tree->left = add_node(tree->left, key);
    else 
        tree->right = add_node(tree->right, key);
    
    return tree;
}

PTREE_NODE delete_node(PTREE_NODE tree, int key)
{
    fprintf(g_log, "delete_node(%p, %d)\n", tree, key);

    return tree;
}

void print_tree(PTREE_NODE tree)
{
    fprintf(g_log, "print_tree(%p)\n", tree);

    if (NULL == tree)
    {
        printf("Empty\n");
        return;
    }

// TODO
}

PTREE_NODE find(int key)
{
    fprintf(g_log, "find(%d)\n", key);

    return NULL; // not found
}

void destroy_tree(PTREE_NODE tree)
{
    fprintf(g_log, "destroy_tree(%p)\n", tree);
}
