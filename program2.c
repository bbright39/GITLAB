#include <stdio.h>
<<<<<<< HEAD
void main()
{

  int WinLotteryNo[10] = {1579, 1711, 5515, 7233, 5614, 8876, 1215, 4232, 9155, 9995}; 
  float WinAmount[10] = {50000, 15000, 10000, 5000, 5000, 5000, 5000, 3000, 3000, 3000};

  int N = 10;
  int i, won; 
  
  int YourLotteryNo;  
   
  printf("Enter your Lottery Number (0 to end): "); 
  scanf("%d", &YourLotteryNo); 
  while (YourLotteryNo != 0) 
  { 
    won = 0; 
    for (i=0;i<N && !won; i++) 
    {
       if (YourLotteryNo == WinLotteryNo[i]) 
       {
          printf("Congratulations You Won %8.2f baht\n", WinAmount[i]); 
          won = 1;
       }
    }
    if (!won) 
      printf("Sorry Lottery Number %4d did not win\n", YourLotteryNo); 
    printf("Enter your Lottery Number (0 to end): "); 
    scanf("%d", &YourLotteryNo); 
  }
  printf("GOODBYE");
  scanf("%d", &i);
=======
void testprintf()
{
	int a,b,c;
	a = 0;
	b = 1;
	c = 2;

}
void main()
{
  char Name[30][40] = {"James Jones", "Mary McBeth", "Ying Phakpon","Chai Chanchai", "Yong Boonsith", "Kitti Karndee"}; 
  int ID[30] = {5301, 5302, 5303, 5304, 5305, 5306}; 
  float GPA[30] = {3.73, 2.35, 3.65, 3.24, 1.32, 3.26}; 
  int N = 6, i;
  int SearchID, found_index; 
 
  printf("\nSTUDENT GPA LIST: \n"); 
  printf("ID----Name------------------------GPA\n"); 
  for (i=0;i<N; i++)
    printf("%5d %-25s %5.2f\n", ID[i], Name[i], GPA[i]); 
  printf("-------------------------------------\n");
  printf("Enter Student ID to Search (0 to End): "); 
  scanf("%d", &SearchID); 
  while (SearchID)
  {
      found_index = -1; 
      for (i = 0; i<N && found_index == -1; i++)

        if (SearchID == ID[i])

          found_index = i;

      if (found_index == -1)
        printf("Sorry, Student ID %5d not found.\n", SearchID);
      else 
        printf("ID: %5d. Name: %-25s. GPA: %5.2f.\n", 
           ID[found_index], Name[found_index],  GPA[found_index]);

      printf("Enter Student ID to Search (0 to End): ");

      scanf("%d", &SearchID);
  }
  printf("Bye Bye\n"); 
>>>>>>> b069f1390a67b3908c0d2b3b33beb746f350806e
}
