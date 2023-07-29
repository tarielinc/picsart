#include <stdio.h>

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	
	int l = 6;
	int arr[]={1, 3, 4, 5, 13, 6};
	// intput array
	/* for (int i = 0; i < l; i++)
	{
		printf("Input number\n");
		scanf(" %d", &arr[i]);
	} */

	//code
	/* int i = 0;
	int j = 0;
	while(i < l){
			if (arr[i] < 0 ){
				// int temp = arr[i];
				// arr[i] = arr[j];
				// arr[j] = temp;
				swap(&arr[i],&arr[j]);
				++j;
			}		
			++i;
		}
		*/

	int tar = 8;

	for (int i = 0; i < l; i++)
	{
		for (int j = 1; j < l; j++)
		{
			if(arr[i]+arr[j]==tar && j != i){
				printf("%d %d\n", arr[i], arr[j]);
				return 0;
			}
		}
		
	}



	/* print array
	for (int i = 0; i < l; i++)
	{
		printf("%d\n", arr[i]);
	}
	*/

}
