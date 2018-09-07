#include <stdio.h>
#include <stdlib.h>

struct list
{
	node_t head;
	int len;
};
typedef struct list * list_t;

struct node
{
	int num;
	struct node *next;
};
typedef struct node * node_t;

void new_list();

node_t new_node();

void delete_node();

void append(node_t node);

void insert();

void new_list()
{
	return malloc(sizeof(struct list));
}

node_t new_node()
{
	node_t node = NULL;
	node = malloc(sizeof(struct node));

	node->next = NULL;

	return node;
}

void delete_node(node_t node)
{
	if(node){
		free(node);
		node = NULL;
	}
}

void append(list_t list, node_t node)
{
	node_t tmpNode;

	if(list->head == NULL)	// first node
	{
		list->head = node;
		list->tail = node;
	}
	else
	{
		tail->next = node;
	}

	list->len++;
}
int main()
{
	list_t list = NULL;
	node_t node = NULL;
	
	list = new_list();

	node = new_node();
	node->num = 1;

	// add to list
	append(list, node);

	delete_node(firstNode);

}