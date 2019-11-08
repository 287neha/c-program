#include<stdio.h>
#include<stdlib.h>
typedef struct bst
{
 int data;
 struct bst *left;
 struct bst *right;
}node;
node *allocate(int value)
{
 node *newnode;
 newnode=(node *)malloc(sizeof(node));
 newnode->data=value;
 newnode->left=0;
 newnode->right=0;
 return newnode;
}
node *insertion(node *root,int num)
{
 if(root==0)
 {
  return allocate(num);
 }
 else if(num>root->data)
 {
  root->right=insertion(root->right,num);
 }
 else
 {
  root->left=insertion(root->left,num);
 }
 return root;
}
void traverse(node *root)
{
 if(root!=0)
 {
  printf("%d ",root->data);
  traverse(root->left);
  traverse(root->right);
 }
}
node *searching(node *root,int num)
{
 if(root==0)
 {
  return NULL;
 }
 else if(num==root->data)
 {
  return root;
 }
 else if(num>root->data)
 {
  return searching(root->right,num);
 }
 else 
 {
  return searching(root->left,num);
 }
}
node *findmin(node *root)
{
 if(root->left==0)
 {
  return root;
 }
 else
 {
  return findmin(root->left);
 }
}
node *deletion(node *root,int num)
{
 if(root==0)
 {
  return 0;
 }
 else if(num>root->data)
 {
  root->right=deletion(root->right,num);
 }
 else if(num<root->data)
 {
  root->left=deletion(root->left,num);
 }
 else
 {
  if(root->left==0&&root->right==0)
  {
   free(root);
   root=0;
  }
  else if(root->left==0)
  {
   node *temp=root;
   root=root->right;
   free(temp);
  }
  else if(root->right==0)
  {
   node *temp=root;
   root=root->left;
   free(temp);
  }
  else
  {
   node *temp=findmin(root->right);
   root->data=temp->data;
   root->right=deletion(root->right,temp->data);
  }
 }
 return root;
}      
int main()
{
 int num,choice;
 node *root=0,*found;
 do
 {
  printf("enter your choice\n1:insertion\n2:deletion\n3:searching\n4:traversing");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:
    printf("enter the number to be inserted");
    scanf("%d",&num);
    root=insertion(root,num);
    break;
   case 2:
    printf("enter the number to be deleted");
    scanf("%d",&num);
    root=deletion(root,num);
    break;
   case 3:
    printf("enter the number to be searched");
    scanf("%d",&num);
    found=searching(root,num);
    if(found==0)
    {
     printf("element not found");
    }
    else
    {
     printf("%d found",num);
    }
    break;
   case 4:
    traverse(root);
    break;
   case 5:
    default:printf("enter a valid choice");
  }
 }while(choice>0&&choice<5);
 return 0;
}
    
