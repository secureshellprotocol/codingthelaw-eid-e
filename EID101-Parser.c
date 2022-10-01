/* Sample code to import data from   driving_data.csv and speedlimit.csv into arrrays 
for EID 101 "Coding the Law" homework assignment.  This parser is written specifically for this 
assignment, so many values are hard-coded (e.g. file names, length of file, size of arrays).
	
When compiled and run, correct output is:

	driving_data.csv file opened successfully
	The first time and speed are 8.014000 and 0.000000
	speedlimit.csv file opened successfully
	The first time and speed limit are 0.000000 and 55.000000

Sample code provided by Associate Dean Lisa A. Shay, September 2021 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	FILE* driving; 
	FILE* limit;
	float drivetime[12425];	//First column of driving_data.csv, time that vehicle speed was recorded
	float drivespeed[12425]; //There are 12425 entries of vehicle speed
	float limittime[10];	//Time that speed limit went into effect 
	float speedlimit[10];	//There are 10 sections of road with various speed limits
	char line[512];			//No line in the file is more than 512 characters (actually, all are far less)
	const char* token;		//Variable used in parsing the line read from the file
	int i=0;
	
	driving = fopen("driving_data.csv", "r");  
	   if(driving == NULL) {
      perror("Error opening driving data file");  // Likely source of error: file isn't in the same directory as this program
      return(-1);
   }
	printf("driving_data.csv file opened successfully\n");
		
	fgets(line, sizeof(line), driving); //discard first line, header information
	
	for (i=0; i<12425; i++)  // The driving data file contains 12425 lines.
	{
		fgets(line, sizeof(line), driving); // Read one line of the file
		token = strtok(line, ",");	// Parse first value from string
		drivetime[i] = atof(token); // Convert from string to float
		token = strtok(NULL, ",");  // Parse second value from string
		drivespeed[i]= atof(token); // Convert from string to float
    }
	fclose(driving);
	
	printf("The first time and speed are %f and %f \n", drivetime[0],drivespeed[0]);
	
	limit = fopen("speedlimit.csv", "r");  
	   if(limit == NULL) {
      perror("Error opening speed limit file"); // Likely source of error: file isn't in the same directory as this program
      return(-1);
   }
	printf("speedlimit.csv file opened successfully\n");
		
	fgets(line, sizeof(line), limit); //discard first line, header information
	
	for (i=0; i<10; i++)  // The speed limit data file contains 10 lines.
	{
		fgets(line, sizeof(line), limit); // Read one line of the file
		token = strtok(line, ",");	// Parse first value from string
		limittime[i] = atof(token); // Convert from string to float
		token = strtok(NULL, ",");  // Parse second value from string
		speedlimit[i]= atof(token); // Convert from string to float
    }
	fclose(limit);
	
	printf("The first time and speed limit are %f and %f \n", limittime[0],speedlimit[0]);
	
	/*********************************
	*								 *
	*  Insert your algorithm here 	 *
	*								 *
	*********************************/
	
	return(0);
}
