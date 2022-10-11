//Jeremia Edwin Hamonangan        	211511029
//Mochamad Hafidh Dwyanto        	 	211511043
//Nazwa Fitriyani Zahra	      	    211511051
//Rezky Azhar Aditya            	    211511055

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define   SIZE   10


int main()
{
	 float a[SIZE][SIZE], x[SIZE], ratio, det=1;
	 int i,j,k,n;

	 /* Inputs */
	 /* Jumlah Ordo Matrix */
	 printf("Enter Order of Matrix: ");
	 scanf("%d", &n);

	 /* 2. Reading Matrix */
	 printf("\nEnter Coefficients of Matrix: \n");
	 for(i=0;i< n;i++)
	 {
		  for(j=0;j< n;j++)
		  {
			   printf("a[%d][%d]=",i,j);
			   scanf("%f", &a[i][j]);
		  }
	 }

	/* Penerapan  */
	 for(i=0;i< n;i++)
	 {
	 	//Pengecekan apabila diagonal = 0
//		  if(a[i][i] == 0.0)
//		  {	
//				printf ("Mathematical Error");
//			   exit(0);
//		  }
////		  
		  //Pembentukan segitiga atas
		  for(j=i+1;j< n;j++)
		  {
		  	
		  	
			   ratio = a[j][i]/a[i][i];
				if(a[i][i] == 0.0){	
				   	ratio = 0.0;
				}

			   for(k=0;k< n;k++)
			   {
			  		a[j][k] = a[j][k] - ratio*a[i][k];
			   }
		  }
	 }

	 /* Displaying upper triangular matrix */
	 
	 /* Not required, just for the sake of understanding */
	 
	 /* By analyzing upper triangular matrix you 
	 will get what's going on :) */
	 printf("\nUpper Triangular Matrix: \n");
	 for(i=0;i< n;i++)
	 {
		  for(j=0;j< n;j++)
		  {
			   printf("%0.2f\t",a[i][j]);
		  }
		  printf("\n");
	 }

	 /* Finding determinant by multiplying
	 elements in principal diagonal elements */
	 for(i=0;i< n;i++)
     {
         det = det * a[i][i];
     }

	 printf("\n\nDeterminant of given matrix is: %0.3f", det);


	 return 0;
}