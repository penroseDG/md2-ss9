#include<stdio.h>
int main(){
	int size =100;
	int choice;
	int array[size] = {} ;
	int sum = 0;
	int max = array[0];
	int min = array[0];
	int find;
	int count = 0;
	int flag = 0;
	do{
		printf("\n                         Menu");
	printf("\n1. Nhap so phan tu can nhap va gia tri cac phan tu");
	printf("\n2. In ra gia tri cac phan tu dang quan ly");
	printf("\n3. In ra gia tri cac phan tu chan và tinh tong");
	printf("\n4. In ra gia tri lon nhat va nho nhat trong mang");
	printf("\n5. In ra cac phan tu là so nguyen to trong mang và tinh tong");
	printf("\n6. Nhap vao mot so và thong ke trong mang có bao nhiêu phan tu có gia tri nhu vay");
	printf("\n7. Them mot phan tu vào vi tri chi dinh");
	printf("\n8. Thoat");
	printf("\nnhap lua chon can nhap: ");
	scanf("%d", &choice);
	switch(choice){
		case 1: 
			for (int i=0; i<size; i++){
				printf("Nhap phan tu thu [%d]: ",i);
				scanf("%d", &array[i]);
				}
			break;
		case 2:
			for (int i=0; i<size;i++){
				printf("phan tu thu [%d] trong mang la: %d\n",i,array[i]);
				}
			break;
		case 3:
			for (int i=0;i<size;i++){
				if (array[i]%2==0){
					printf("%d\n",array[i]);
						sum = sum + array[i];
					}
				}
				printf("tong la: %d", sum);
			break;
		case 4:
			for (int i=0 ;i<size;i++){
				if (array[i] > max){
					max = array[i];
						}
					else if (array[i]<min){
						min = array[i];
						}
					}
				printf("\ngia tri lon nhat trong mang la: %d\ngia tri nho nhat trong mang la: %d",max,min);
			break;
		case 5:
			for(int i=0;i<array[i];i++){
					for(int j=2	;j < array[i] ; j++){
						if(array[i] % j == 0){
							flag=1;
							break;
						}
					}
				if(flag==0){
					printf("%d\n",array[i]);
					sum+=array[i];
					}
				}
				printf("tong cac phan tu so nguyen to la:%d\n",sum);
				break;
			
		case 6:
			printf("nhap 1 so tuy y: ");
				scanf("%d",&find);
				for (int i=0; i<size; i++){
					if (array[i]==find){
						count++;
						}
					}
				printf("co %d gia tri giong gia tri dang tim kiem",count); 
			break;
		case 7:
			int index;
			printf("\nnhap vi tri trong mang: ");
			scanf("%d", &index);
			int value;
			printf("\nnhap gia tri muon them vao mang: ");
			scanf("%d", &value);
			array[index]=value;
			size++;
			for (int i=0; i<size;i++){
				printf("%d\n", array[i]);
				}
			break;
		case 8:
			printf("thoat");
			break;
		}
	}while(choice != 8);
}
