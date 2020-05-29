#include<stdio.h>
#include<stdlib.h>

int main( ) 
{ 
    FILE *filePointer,*copy; 
    char sentence[50];
    
    //Getting user input
    printf("\nEnter the text to file:\n");
    gets(sentence);
    
    //Creating file poniter
    filePointer = fopen("data.txt", "w") ; 
    if ( filePointer == NULL ) { 
        printf( "\ndata.txt file failed to open.\n" ) ; 
        exit(-1);
    }
	  
    //Writing to the file
    
    fputs(sentence, filePointer) ;    
    fputs("\n", filePointer) ; 
    fclose(filePointer) ;
	
	 
    //Copying Contents to copy.txt and reversing the contents of file
    
	filePointer=fopen("data.txt","r");	//reading the created file
	copy=fopen("copy.txt","w");			//copy to file copy.txt
	
	if ( copy == NULL ) { 
        printf( "\ncopy.txt file failed to open.\n" ) ; 
        exit(-1);
    }
	
	
	int index=0,i;
	char contents[500],ch;
	
	do
	{ 
		ch = getc(filePointer);
		fputc(ch,copy);
		contents[index]=ch;
		index++;
	}while (ch != EOF);	
	
	contents[index]='\0';
	printf("\nThe File is Copied to copy.txt\n");
	
	//Printing in reverse order
	
	printf("\nReverse contents of file:\n");
	for(i=index;i>=0;i--){
		printf("%c",contents[i]);
	}
	
	//Closing the files
	
	fclose(filePointer);
	fclose(copy);
    return 0;         
} 
