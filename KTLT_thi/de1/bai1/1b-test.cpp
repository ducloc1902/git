/* Created by Hung on 24/08/2022.
 * Viet ham khuon mau MaxOfTwo (int , int) tra ve so lon hon
 trong 2 so nguyen.
 * Su dung lai ham MaxofTwo ( int , int) o tren de viet ham theo 
 khuon mau MaxOfFour ( int,int,int,int) tra ve so lon nha trong 4
 so nguyen
 */
 
 #include <stdio.h>
 
 int Maxoftwo ( int a, int b){	
 	if (a>b)
 		return a;
 	else 
 		return b;
 }
 int Maxoffour ( int a, int b, int c , int d){
 	return ( Maxoftwo (Maxoftwo(a,b),Maxoftwo(c,d)));
 	}
 	
 int main(){
 	int a = 4 , b = 5 , c =6 , d =10;
 	printf (" so lon nhat trong 2 so la: %d",Maxoftwo(a,b));
 	printf("\n");
 	printf (" so lon nhat trong 4 so la: %d",Maxoffour(a,b,c,d));

 	
 
 }
