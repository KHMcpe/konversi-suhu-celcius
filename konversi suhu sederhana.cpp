#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>


int main(){
	system ("color 2");
	char answer [15];
	float celcius, hasil;
	while (1){
	// Header //
	printf ("\t\t\t\t\t\t\t+----------------+\n");
    printf ("\t\t\t\t\t\t\t|  Konversi Suhu |\n");
    printf ("\t\t\t\t\t\t\t+----------------+\n\n");
     // Fungsi //
    
	
    printf ("Masukkan suhu dalam celcius! : ");
    scanf ("%f", &celcius);
	printf ("Kamu mau mengonversi suhu Celcius menjadi apa? : ");
	scanf ("%s", &answer);
	
	if (strcmp(answer, "fahrenheit") == 0){
		hasil = (celcius * 1.8) + 32;
		printf("Konversi suhu Celcius %.2f ke fahrenheit adalah = %.2f", celcius, hasil);
		Sleep (3000);
		system ("cls");
	}
	else if (strcmp(answer, "kelvin") == 0){
		hasil = celcius + 273.15;
		printf("Konversi suhu Celcius %.2f ke kelvin adalah = %.2f", celcius, hasil);
		Sleep (3000);
		system ("cls");
	}
	else if (strcmp(answer, "reamur") == 0){
		hasil = celcius * 0.80;
		printf("Konversi suhu Celcius %.2f ke reamur adalah = %.2f", celcius, hasil);
		Sleep (3000);
		system ("cls");
	}
	else {
		printf("Pilihan konversi tidak dikenal.\n");
		Sleep (3000);
		system ("cls");
	  }
	}
	return 0;
	
}
