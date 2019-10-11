#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

void insert(int array[], int delta, int size){
  int element, index, n=0;
  printf("Enter element to insert\n");
	scanf("%d",&element);
  index = element%size;

  while (array[index]!=INT_MIN) {
    if (array[index]==INT_MAX){
      break;
    }
    index = index + delta;
    n++;
    if (n==size){
      break;
    }
  }
  if (n==size){
    printf("Hash table is full \n");
  } else {
    array[index]=element;
  }
}

void display(int array[], int size){
  int i;
  for(i=0;i<size;i++)
        printf("%d\t%d\n",i,array[i]);
}

void search(int array[], int delta, int size){
  int element, index, n = 0;
  printf("Enter element to search\n");
	scanf("%d",&element);
  index = element%size;

  while (n++ != size){
    if(array[index]==element){
      printf("Element found at index %d\n", index);
      break;
    } else {
      if (array[index]==INT_MAX||array[index]!=INT_MIN){
        index = index + delta;
      }
    }
  }
  if (--n==size){
    printf("Element not found \n");
  }
}

int main(){
  int size, delta, i, choice;

  printf("Enter size of hash table (bucket size)\n");
	scanf("%d",&size);

  printf("Enter hash function (delta)\n");
 	scanf("%d",&delta);

  int array[size];

  for (i=0;i<size;i++){
    array[i]=INT_MIN;
  }

  do{
	  printf("Enter your choice\n");
	  printf(" 1-> Insert\n 2-> Display\n 3-> Search\n 0-> Exit\n");
	  scanf("%d",&choice);
	  
	  switch(choice){
		  case 1:
			insert(array,delta,size);
			break;
		case 2:
			display(array,size);
			break;
		case 3:
			search(array,delta,size);
			break;
		default:
			printf("Enter correct choice\n");
			break;
		}
  } while (choice);
  return 0;
}
