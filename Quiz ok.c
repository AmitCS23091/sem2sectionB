#include<stdio.h>
int main()
{
	char sym;
	int a;
	printf("Welcome to the Quiz Game:\nAre you ready to play the game (type '+'for Yes or '-'for No)\n");
	scanf("%c",&sym);
	switch(sym)
	{
		case'+':
				printf("lets play\n");
				printf("In this quiz there are total 15 question, in which:\n5 Question-Easy\n5 Question-Moderate\n5 Question-Hard\n");
				printf("\nLet's Start:\n");
				printf("<Q1>  Who is the Current Prime Minister of Bharat=____?\n1]  Narendra Modi\n2]  Rahul Gandhi\n3]  Amit Shah\n");
				scanf("%d",&a);
				if(a==1){
					printf("Correct Answer\n");
				}
				else if(a==2||a==3){
					printf("Wrong answer\n");
					break;
				}
				else{
					printf("Choose appropriate option\n Quiz Terminated\n");
					break;
				}
					printf("<Q2>  Which City is known as the 'Pink City' of Bharat=____?\n1]  Surat\n2]  Mumbai\n3]  Jaipur\n");
				scanf("%d",&a);
				if(a==3){
					printf("Correct Answer\n");
				}
				else if(a==1||a==2){
					printf("Wrong answer\n");
					break;
				}
				else{
					printf("Choose appropriate option\n Quiz Terminated\n");
					break;
				}
				
					printf("<Q3>  Which Indian Festival is Known as the 'Festival of Light'=____?\n1]  Diwali\n2]  Holi\n3]  Onam\n");
				scanf("%d",&a);
				if(a==1){
					printf("Correct Answer\n");
				}
				else if(a==2||a==3){
					printf("Wrong answer\n");
					break;
				}
				else{
					printf("Choose appropriate option\n Quiz Terminated\n");
					break;
				}
				
					printf("<Q4>  National Flower of Bharat=____?\n1]  Rose\n2]  Lotus\n3]  Sunflower\n");
				scanf("%d",&a);
				if(a==2){
					printf("Correct Answer\n");
				}
				else if(a==1||a==3){
					printf("Wrong answer\n");
					break;
				}
				else{
					printf("Choose appropriate option\n Quiz Terminated\n");
					break;
				}
					printf("<Q5>  The National Song 'Vande Mataram' was composed by=____?\n1]  Rabindranath Tagore\n2]  Swami Vivekananda\n3]  Bankim Chandra Chattopadhyay\n");
				scanf("%d",&a);
				if(a==3){
					printf("Correct Answer\n");
				}
				else if(a==1||a==3){
					printf("Wrong answer\n");
					break;
				}
				else{
					printf("Choose appropriate option\n Quiz Terminated\n");
					break;
				}
					printf("<Q6>  The First Woman Prime Minister of India=____?\n1]  Mother Teresa\n2]  Indira Gandhi\n3]  Droupadi Murmu\n");
				scanf("%d",&a);
				if(a==2){
					printf("Correct Answer\n");
				}
				else if(a==1||a==3){
					printf("Wrong answer\n");
					break;
				}
				else{
					printf("Choose appropriate option\n Quiz Terminated\n");
					break;
				}
					printf("<Q7>  Who is the Author of Ramayana=____?\n1]  Valmiki\n2]  Tulsidas\n3]  Ved Vyasa\n");
				scanf("%d",&a);
				if(a==1){
					printf("Correct Answer\n");
				}
				else if(a==2||a==3){
					printf("Wrong answer\n");
					break;
				}
				else{
					printf("Choose appropriate option\n Quiz Terminated\n");
					break;
				}
					printf("<Q8>  Which Country will host '2024' Olympics=____?\n1]  USA\n2]  Russia\n3]  France\n");
				scanf("%d",&a);
				if(a==3){
					printf("Correct Answer\n");
				}
				else if(a==1||a==2){
					printf("Wrong answer\n");
					break;
				}
				else{
					printf("Choose appropriate option\n Quiz Terminated\n");
					break;
				}
					printf("<Q9>  'RSS' was originated from which city before Independence=____?\n1]  Noida\n2]  Nagpur\n3]  Bombay\n");
				scanf("%d",&a);
				if(a==2){
					printf("Correct Answer\n");
				}
				else if(a==1||a==3){
					printf("Wrong answer\n");
					break;
				}
				else{
					printf("Choose appropriate option\n Quiz Terminated\n");
					break;
				}
					printf("<Q10>  Which Indian state is known as the 'Land of Five Rivers'=____?\n1]  Punjab\n2]  Gujarat\n3]  Uttar Pradesh\n");
				scanf("%d",&a);
				if(a==1){
					printf("Correct Answer\n");
				}
				else if(a==2||a==3){
					printf("Wrong answer\n");
					break;
				}
				else{
					printf("Choose appropriate option\n Quiz Terminated\n");
					break;
				}
					printf("<Q11>  Indian Flag was first designed by=____?\n1]  Pingali Venkayya\n2]  Mrs Anne Besant\n3]  Madame Cama\n");
				scanf("%d",&a);
				if(a==1){
					printf("Correct Answer\n");
				}
				else if(a==2||a==3){
					printf("Wrong answer\n");
					break;
				}
				else{
					printf("Choose appropriate option\n Quiz Terminated\n");
					break;
				}
					printf("<Q12>  Which is the highest mountain peak in India=____?\n1]  K2\n2]  Mount Everest\n3]  Kanchenjunga\n");
				scanf("%d",&a);
				if(a==3){
					printf("Correct Answer\n");
				}
				else if(a==1||a==2){
					printf("Wrong answer\n");
					break;
				}
				else{
					printf("Choose appropriate option\n Quiz Terminated\n");
					break;
				}
					printf("<Q13>  I am a three-digit number. My tens digit is five more than my ones digit, and my hundreds digit is eight less than my tens digit. What number am I=____?\n1]  582\n2]  473\n3]  391\n");
				scanf("%d",&a);
				if(a==3){
					printf("Correct Answer\n");
				}
				else if(a==1||a==2){
					printf("Wrong answer\n");
					break;
				}
				else{
					printf("Choose appropriate option\n Quiz Terminated\n");
					break;
				}
					printf("<Q14>  If you randomly select a letter from the word 'PROBABILITY', what is the probability of selecting a vowel=____?\n1]  1/11\n2]  3/11\n3]  4/11\n");
				scanf("%d",&a);
				if(a==3){
					printf("Correct Answer\n");
				}
				else if(a==1||a==2){
					printf("Wrong answer\n");
					break;
				}
				else{
					printf("Choose appropriate option\n Quiz Terminated\n");
					break;
				}
					printf("<Q15>  On which mountain is the city of shri lanka located=____?\n1]  Trikuta\n2]  Gandhamadana\n3]  Sumeru\n");
				scanf("%d",&a);
				if(a==1){
					printf("Correct Answer\n");
				}
				else if(a==2||a==3){
					printf("Wrong answer\n");
					break;
				}
				else{
					printf("Choose appropriate option\n Quiz Terminated\n");
					break;
				}		
				break;
		case'-':
			    printf("OK!!\nAs Your Wish");
			    break;
		default:
				printf("Type '+' or '-'.");		
	}
	return 0;	
}
