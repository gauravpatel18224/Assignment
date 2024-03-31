/*. Display This Information using printf
a. Your Name
b. Your Birth date
c. Your Age
d. Your Address*/

int main(){
	
	char name[100];
	char date[10];
	int age;
	char address[100];
	
	printf("Enter your name : ");
	scanf("%s",name);
	
	printf("Enter your birthdate : ");
	scanf("%s",date);
	
	printf("Enter your age : ");
	scanf("%d",&age);
	
	printf("Enter your address : ");
	scanf("%s",address);
	
	printf("your name is : %s\n",name);
	printf("your birthdate is : %s\n",date);
	printf("your age is : %d\n",age);
	printf("your address is : %s\n",address);
}