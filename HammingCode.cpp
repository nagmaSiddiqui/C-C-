// Program for Hamming code
#include <math.h>
#include <stdio.h>
int input[25];
int output[30];
//Function to calculate parity bit value
int ham_gen(int position, int total_bits)
{
 int count=0, i=position-1;
 // Traverse to store Hamming Code
 while (i<total_bits) 
 {
 for (int j=i; j<i+position; j++) 
 {
 if (output[j]==1)
 count++;
 }
 i=i+ 2*position;
 }
 if (count%2==0)
 return 0;
 else
 return 1;
}
// Function to calculate and fill ouptut array
void Output_gen(int input[], int N)
{
 int i=0, j=0, k=0, parity_count=0, total_bits;
 // Find parity bits count
 while (N > (int)pow(2, i) - (i + 1)) {
 parity_count++;
 i++;
 }
 total_bits = parity_count + N;
 for (i = 0; i < total_bits; i++) 
 {
 // Setting parity bits as 0 in output
 if (i == ((int)pow(2, k) - 1)) {
 output[i] = 0;
 k++;
 }
 //Setting output[i] as input[j]
 else {
 output[i] = input[j];
 j++;
 }
 }
 // Traverse and update the hamming code
 for (i = 0; i < parity_count; i++) 
 {
 int position = (int)pow(2, i); //Find current position
 int value = ham_gen(position, total_bits); // Find value at current position
 output[position - 1] = value; // Update the code
 }
 // Print the Hamming Code
 printf("\nThe generated Hamming Code is: ");
 for (i = 0; i < total_bits; i++) {
 printf("%d", output[i]);
 }
}
int main()
{
 int N;
 printf("Enter a number of data bits: ");
 scanf("%d",&N);
 for(int j=0;j<N;j++)
 {
 printf("Enter data bit %d: ",j+1);
 scanf("%d",&input[j]);
 }
 Output_gen(input, N);
}

