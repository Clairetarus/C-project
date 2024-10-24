#include <stdio.h>
#include<string.h>

//structure definition for a book
struct book{
	char title[30];
	char author[30];
    int publication_year;
    char ISBN[13];
    float price;
};

int main(){
//declaring and initializing the structure
    struct book book1={
    	"introduction to programming",
    	"john smith",
    	2022,
    	"97801303627",
    	49.99
    };
    
    //printing the values of the fields
    printf("Book details:\n");
    printf("Title:%s\n",book1.title);
    printf("Author:%s\n",book1.author);
    printf("publication year:%d\n",book1.publication_year);
    printf("ISBN:%s\n",book1.ISBN);
    printf("Price:%.2f\n",book1.price);
    
    //prompting the user to enter the details of a new book
    struct book book2;
    
    char temp_title[30];
    char temp_author[30];
    
    printf("\nEnter the Book details:\n");
    
    printf("Enter the Title:\n");
    scanf("%s",temp_title);
    strcpy(book2.title,temp_title);
    
    printf("Enter the Author:\n");
    scanf("%s",temp_author);
    strcpy(book2.author,temp_author);
    
    printf("Enter the Publication year:\n");
    scanf("%d",&book2.publication_year);
    
    printf("Enter the ISBN:\n");
    scanf("%s",book2.ISBN);
    
    printf("Enter the price:\n");
    scanf("%.2f",book2.price);
    
    
    
    
    return 0;
}