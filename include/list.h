#ifndef LIST_H
#define LIST_H
typedef struct 
{
	void *data;//pointer to data
	list_element *next;//pointer to next data 	
}list_element; //list_element

typedef struct 
{
	list_element* head;//head of the list
}list;//list

void List_Init(list *alist); //init a list
list_element * Add_Element(list *alist,void *data);//add a element
void Delete_Element(list *alist,void *data);

#endif
