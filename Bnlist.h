#ifndef bn_list
#define bn_list

 struct bnlist{
   char name[20];                   //name of the employee.
   char last[20];                   //last name of the employee. 
   struct bnlist *right,*left;      // left and right child.

 };
typedef struct bnlist node;

void add(char name[],char Lname[], node** iterator);

int menu();

node* delete(char name[],char Lname[],node ** iterator);

void printList(node* iterator);

void cleanFile();
  
void writeToFile(node *iterator);

void readFile();
 

#endif 
