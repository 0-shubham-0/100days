#include <stdio.h>
void acceptArray(int arr[], int size) 
{ 
    int i =0; 
    for(i=0; i < size; i++) 
    { 
        printf("Enter elements : "); 
        scanf("%d",&arr[i]); 
    } 
} 
void printArray(int arr[],int size) 
{ 
    int i =0; 
 	printf("\nElements are : "); 
    for(i=0; i < size; i++) 
    printf("\n %d",arr[i]);  
    printf("\n"); 
} 
char compareArray(int a[],int b[],int size)	{
	int i;
	for(i=0;i<size;i++){
		if(a[i]!=b[i])
			return 0;
	}
	return 1;
}
int main(){
	int s;
	printf("Enter size of the array ");
	scanf("%d",&s);
	int a[s],b[s];
	printf("For the the first array \n");
	acceptArray(a,s);
	printf("\nFor the the second array\n");
	acceptArray(b,s);
	if(compareArray(a,b,s)==1){
		printf("Arrays have same elements.\n");
		printArray(a,s);
	}
	else{
		printf("Arrays have different elements.\n");
	}	
	return 0;
}
