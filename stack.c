#include<stdio.h>

//Important global variables declaration
int stack[100],top,max,choice;

//Important function declaration
void display();
void addItem();
void deleteItem();
void showAllItem();
void showTopItem();

//Main function starts 
int main(){
	top=-1;
	
	printf("Enter the max stack value:");
	scanf("%d",&max);
	printf("you entered %d",max);	
	display(); //call the first function for user choice input
	return 0;
}  //main function ends


	// Function to aks user choice
void display(){
	printf("\n\n \t===========Enter the type of operation that you want to perform:============\n ");
	printf("\t\t\t  1.Add item:\n \t\t\t  2.Delete item:\n \t\t\t  3.View all item:\n \t\t\t  4.View top item:\n  \t\t\t  5.All done \n\n");
	printf("\t---------------->");
	scanf("%d",&choice);
	
	
			//To call the function according to the users input
	switch(choice){
		case 1:
			printf("\nWanna add items:\n");
			addItem();
			break;
		
		case 2:
				printf("\nWanna delete items:\n");
				deleteItem();
			break;
		
		case 3:
				printf("\nWanna view all items:\n");
				showAllItem();
			break;
		
		case 4:
				printf("\nWanna view top item:\n");
				showTopItem();
			break;
		
		case 5:
			printf("All is well");			
			break;
		default:
			//calls itself when input is wrong
			printf("\n *******Input error****");
			display();
	}
	
}



//function to add data in top of the stack
void addItem(){
	int newData;
	if(top>=max-1){  		//Here we put max-1 condition because top starts from -1 and our counting starts from 1 also top value is increased before initializing top data
		printf("\t**********stack is full**********\n");
		printf("\t**********choose something else*********\n");
		display();
	}else{
		printf("Enter the value to be added:");
		scanf("%d", &newData);
		++top;				//we must increase the value of top at first because the array indexing starts only from 0 but not from -1
		stack[top]=newData;
		printf("\t ---->The top value is %d now:",stack[top]);
		display();
	}
}



//function to delete the top data
void deleteItem(){

	if(top<=-1){  			//if array indexing is less than or equal to -1 then it means there is no data in stack
		printf("Stack is empty\n");
	}else{
		stack[top]="";		//This will initialize the top value to '' or empty
		--top;
		printf("\t *********The top data has been deleted*****");
		display();
	}
}




//fucntion to show data in stack i.e array
void showAllItem(){
	
	if(top<=-1){
		printf("\t********Stack data is empty *******\n");
		printf("\t********Choose someting else ******\n");
	}else{
		int i=0;
		//Prints all the data in stack
		while(i<=top){
			printf("%d \n",stack[i]);
			++i;
		}
		display();
	}
}



//function to show top data in a stack
void showTopItem(){
	if(top<=-1){
		printf("\t *********Stack is empty *******\n");
		display();
	}else{
		stack[top];
		display();
	}
}

