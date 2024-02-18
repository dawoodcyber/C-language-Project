#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
int main();
void AddMeals();
int* Meals();


int* Meals(int* x)
{
	int Meal, SGlass, i,EGG, SALAD, SOYA, NUT, WHEY, CHAPATI, MILK, RICE, Global=0;
	float CHICK; 
	Global = *x;
	printf("\t\t\t\tLETS CHECK YOUR PROTEIN INTAKE!\n\n");
	
	printf("\t\t\t\tWHICH  MEAL  HAVE  YOU  EATEN  SO  FAR?\n\n");
	
	printf("\t\t\t\tM E A L S (SUGGESTED BY TRAINER)\n\n");
	
	printf("\t\t\t\t\t|--->1)Smoothie. \n");
	printf("\t\t\t\t\t|--->2)Eggs. \n");
	printf("\t\t\t\t\t|--->3)Chicken. \n");
	printf("\t\t\t\t\t|--->4)Salad. \n");
	printf("\t\t\t\t\t|--->5)Boiled Rice. \n");
	printf("\t\t\t\t\t|--->6)Soya Chunks. \n");
	printf("\t\t\t\t\t|--->7)Nuts. \n");
	printf("\t\t\t\t\t|--->8)Whey Protein. \n");
	printf("\t\t\t\t\t|--->9)Chapati. \n");
	printf("\t\t\t\t\t|--->10)Milk. \n");
	
	printf("\n\t\t\t\t\t\t|->Enter Your meal, that you have eaten so far(1, 2, 3,...) \n");
	scanf("%d", &Meal);	
	
	if(Meal == 1)
	{
		int Protein1=0;
		printf("\n\n\t\t\t\tHOW MUCH GLASSES YOU HAVE DRUNK?\n\n");
		scanf("%d", &SGlass);
		for(i=0; i<SGlass; i++)
		{
			Protein1 += 20;
		
		}
		Global += Protein1;
		printf("\n\n\t\t\t\tYou have intaked %d gram of Protein\n\n", Global);

		if(Global >200)
		{
			printf("\t\t\t\tYOU HAVE EATEN ENOUGH MEALS FOR A DAY!\n\n");
			printf("\t\t\t\tPROTIEN INTAKE COMPLETED!\n\n");
			main ();

		}
		
		else 
		{
			printf("\t\t\t\tW A N N A  A D D   M O R E   M E A L S ?\n\n");
			printf("\t\t\t\tPress Enter to C O N T I N U E or B A C K S P A C E to go on HOMEPAGE\n\n");
			char Choice = getch();
		
			if(Choice == 13)
			{
				Meals(&Global);
			}
			else if( Choice == 8)
			{
				main();
			}
			else
				return 0;		
		
		}
	
	}
	else if(Meal == 2)
	{
		float Protein2=0;
		printf("\n\n\t\t\t\tHOW MANY EGGS YOU HAVE EATEN?\n\n");
		scanf("%d", &EGG);
		for(i=0; i<EGG; i++)
		{
			Protein2 += 5;
		
		}
		Global += Protein2;
		printf("\n\n\t\t\t\tYou have intaked %d gram of Protein\n\n", Global);

		if(Global >200)
		{
			printf("\t\t\t\tYOU HAVE EATEN ENOUGH MEALS FOR A DAY!\n\n");
			printf("\t\t\t\tPROTIEN INTAKE COMPLETED!\n\n");
			main ();

		}
		
		else 
		{
			printf("\t\t\t\tW A N N A  A D D   M O R E   M E A L S ?\n\n");
			printf("\t\t\t\tPress Enter to C O N T I N U E or B A C K S P A C E to go on HOMEPAGE\n\n");
			char Choice = getch();
		
			if(Choice == 13)
			{
				Meals(&Global);
			}
			else if( Choice == 8)
			{
				main();
			}
			else
				return 0;		
		
		}
	
	
	}
	else if(Meal == 3)
	{
		float Protein3=0;
		printf("\n\n\t\t\t\tHOW MUCH CHICKEN YOU HAVE EATEN(IN GRAMS)?\n\n");
		scanf("%f", &CHICK);
		for(i=0; i<CHICK; i++)
		{
			Protein3 += 0.27;
		
		}
		Global += Protein3;
		printf("\n\n\t\t\t\tYou have intaked %d gram of Protein\n\n", Global);

		if(Global >200)
		{
			printf("\t\t\t\tYOU HAVE EATEN ENOUGH MEALS FOR A DAY!\n\n");
			printf("\t\t\t\tPROTIEN INTAKE COMPLETED!\n\n");
			main ();

		}
		
		else 
		{
			printf("\t\t\t\tW A N N A  A D D   M O R E   M E A L S ?\n\n");
			printf("\t\t\t\tPress Enter to C O N T I N U E or B A C K S P A C E to go on HOMEPAGE\n\n");
			char Choice = getch();
		
			if(Choice == 13)
			{
				Meals(&Global);
			}
			else if( Choice == 8)
			{
				main();
			}
			else
				return 0;		
		
		}
	
	}
	else if(Meal == 4)
	{
		int Protein4=0;
		printf("\n\n\t\t\t\tHOW MANY BOWLS OF SALAD YOU HAVE EATEN?\n\n");
		scanf("%d", &SALAD);
		for(i=0; i<SALAD; i++)
		{
			Protein4 += 3;
		
		}
		Global += Protein4;
		printf("\n\n\t\t\t\tYou have intaked %d gram of Protein\n\n", Global);

		if(Global >200)
		{
			printf("\t\t\t\tYOU HAVE EATEN ENOUGH MEALS FOR A DAY!\n\n");
			printf("\t\t\t\tPROTIEN INTAKE COMPLETED!\n\n");
			main ();

		}
		
		else 
		{
			printf("\t\t\t\tW A N N A  A D D   M O R E   M E A L S ?\n\n");
			printf("\t\t\t\tPress Enter to C O N T I N U E or B A C K S P A C E to go on HOMEPAGE\n\n");
			char Choice = getch();
		
			if(Choice == 13)
			{
				Meals(&Global);
			}
			else if( Choice == 8)
			{
				main();
			}
			else
				return 0;		
		
		}
	
	}
	else if(Meal == 5)
	{
		float Protein5=0.0;
		printf("\n\n\t\t\t\tHOW MUCH RICE YOU HAVE EATEN SO FAR? (IN GRAMS)\n\n");
		scanf("%d", &RICE);
		for(i=0; i<RICE; i++)
		{
			Protein5 +=0.1 ;
		
		}
		Global += Protein5;
		printf("\n\n\t\t\t\tYou have intaked %d gram of Protein\n\n", Global);

		if(Global >200)
		{
			printf("\t\t\t\tYOU HAVE EATEN ENOUGH MEALS FOR A DAY!\n\n");
			printf("\t\t\t\tPROTIEN INTAKE COMPLETED!\n\n");
			main ();

		}
		
		else 
		{
			printf("\t\t\t\tW A N N A  A D D   M O R E   M E A L S ?\n\n");
			printf("\t\t\t\tPress Enter to C O N T I N U E or B A C K S P A C E to go on HOMEPAGE\n\n");
			char Choice = getch();
		
			if(Choice == 13)
			{
				Meals(&Global);
			}
			else if( Choice == 8)
			{
				main();
			}
			else
				return 0;		
		
		}
	
	}
	else if(Meal == 6)
	{
		int Protein6=0;
		printf("\n\n\t\t\t\tHOW MUCH SOYA CHUNKS YOU HAVE EATEN SO FAR? (IN GRAMS)\n\n");
		scanf("%d", &SOYA);
		for(i=0; i<SOYA; i++)
		{
			Protein6 +=1 ;
		
		}
		Global += Protein6;
		printf("\n\n\t\t\t\tYou have intaked %d gram of Protein\n\n", Global);

		if(Global >200)
		{
			printf("\t\t\t\tYOU HAVE EATEN ENOUGH MEALS FOR A DAY!\n\n");
			printf("\t\t\t\tPROTIEN INTAKE COMPLETED!\n\n");
			main ();

		}
		
		else 
		{
			printf("\t\t\t\tW A N N A  A D D   M O R E   M E A L S ?\n\n");
			printf("\t\t\t\tPress Enter to C O N T I N U E or B A C K S P A C E to go on HOMEPAGE\n\n");
			char Choice = getch();
		
			if(Choice == 13)
			{
				Meals(&Global);
			}
			else if( Choice == 8)
			{
				main();
			}
			else
				return 0;		
		
		}
	}
	else if(Meal == 7)
	{
		float Protein7=0.0;
		printf("\n\n\t\t\t\tHOW MANY NUTS YOU HAVE EATEN?(IN GRAMS)\n\n");
		scanf("%d", &NUT);
		for(i=0; i<NUT; i++)
		{
			Protein7 += 0.09;
		
		}
		Global += Protein7;
		printf("\n\n\t\t\t\tYou have intaked %d gram of Protein\n\n", Global);

		if(Global >200)
		{
			printf("\t\t\t\tYOU HAVE EATEN ENOUGH MEALS FOR A DAY!\n\n");
			printf("\t\t\t\tPROTIEN INTAKE COMPLETED!\n\n");
			main ();

		}
		
		else 
		{
			printf("\t\t\t\tW A N N A  A D D   M O R E   M E A L S ?\n\n");
			printf("\t\t\t\tPress Enter to C O N T I N U E or B A C K S P A C E to go on HOMEPAGE\n\n");
			char Choice = getch();
		
			if(Choice == 13)
			{
				Meals(&Global);
			}
			else if( Choice == 8)
			{
				main();
			}
			else
				return 0;		
		
		}
	
	
	}
	else if(Meal == 8)
	{
		int Protein8=0;
		printf("\n\n\t\t\t\tHOW MANY SCOOPS OF WHEY PROTEIN YOU HAVE TAKEN?\n\n");
		scanf("%d", &WHEY);
		for(i=0; i<WHEY; i++)
		{
			Protein8 += 5;
		
		}
		Global += Protein8;
		printf("\n\n\t\t\t\tYou have intaked %d gram of Protein\n\n", Global);

		if(Global >200)
		{
			printf("\t\t\t\tYOU HAVE EATEN ENOUGH MEALS FOR A DAY!\n\n");
			printf("\t\t\t\tPROTIEN INTAKE COMPLETED!\n\n");
			main ();

		}
		
		else 
		{
			printf("\t\t\t\tW A N N A  A D D   M O R E   M E A L S ?\n\n");
			printf("\t\t\t\tPress Enter to C O N T I N U E or B A C K S P A C E to go on HOMEPAGE\n\n");
			char Choice = getch();
		
			if(Choice == 13)
			{
				Meals(&Global);
			}
			else if( Choice == 8)
			{
				main();
			}
			else
				return 0;		
		
		}
	
	}
	else if(Meal == 9)
	{
		float Protein9=0;
		printf("\n\n\t\t\t\tHOW MANY CHAPATI'S YOU HAVE EATEN?\n\n");
		scanf("%d", &CHAPATI);
		for(i=0; i<CHAPATI; i++)
		{
			Protein9 += 0.05;
		
		}
		Global += Protein9;
		printf("\n\n\t\t\t\tYou have intaked %d gram of Protein\n\n", Global);

		if(Global >200)
		{
			printf("\t\t\t\tYOU HAVE EATEN ENOUGH MEALS FOR A DAY!\n\n");
			printf("\t\t\t\tPROTIEN INTAKE COMPLETED!\n\n");
			main ();

		}
		
		else 
		{
			printf("\t\t\t\tW A N N A  A D D   M O R E   M E A L S ?\n\n");
			printf("\t\t\t\tPress Enter to C O N T I N U E or B A C K S P A C E to go on HOMEPAGE\n\n");
			char Choice = getch();
		
			if(Choice == 13)
			{
				Meals(&Global);
			}
			else if( Choice == 8)
			{
				main();
			}
			else
				return 0;		
		
		}
	
	}
	else if(Meal == 10)
	{
		float Protein10=0.0;
		printf("\n\n\t\t\t\tHOW MUCH MILK YOU HAVE DRUNK(IN ML)?\n\n");
		scanf("%d", &MILK);
		for(i=0; i<MILK; i++)
		{
			Protein10 += 0.036;
		
		}
		Global += Protein10;
		printf("\n\n\t\t\t\tYou have intaked %d gram of Protein\n\n", Global);

		if(Global >200)
		{
			printf("\t\t\t\tYOU HAVE EATEN ENOUGH MEALS FOR A DAY!\n\n");
			printf("\t\t\t\tPROTIEN INTAKE COMPLETED!\n\n");
			main ();

		}
		
		else 
		{
			printf("\t\t\t\tW A N N A  A D D   M O R E   M E A L S ?\n\n");
			printf("\t\t\t\tPress Enter to C O N T I N U E or B A C K S P A C E to go on HOMEPAGE\n\n");
			char Choice = getch();
		
			if(Choice == 13)
			{
				Meals(&Global);
			}
			else if( Choice == 8)
			{
				main();
			}
			else
				return 0;		
		
		}
	
	}
	else
	{
		int Global = 0;
		printf("\n\t\t\t INVALID INPUT\n");
		Meals(&Global);
	}
	
	



}

void AddMeals()
{
		printf("\n\n\t\t\t\tPress Enter to C O N T I N U E or B A C K S P A C E to go on HOMEPAGE\n\n");
		char Choice = getch();
		int x=0;
	
		if(Choice == 13)
		{
			Meals(&x);
		}
		else if( Choice == 8)
		{
			main();
		}
		else
			return;



}

void BMI()
{
	float wE, hE, bMi;
	char Choice;

	printf("\t\t\t\tEnter your Weight in KG: ");
	scanf("%f", &wE);
	
	printf("\n\t\t\t\tEnter your Heigh in Foot");
	scanf("%f", &hE);
	
	hE=hE*0.304;
	
	bMi = wE / (hE*hE);
	
	if( bMi >18 && bMi< 25)
	{
		printf("\n\t\t\t\t\t Your B M I is %.2f, You have a Good B M I", bMi);
	}
	else if( bMi >25 && bMi< 30)
	{
		printf("\n\t\t\t\t\t Your B M I is %.2f, You have a Healthy B M I", bMi);
	}
	else if( bMi >30)
	{
		printf("\n\t\t\t\t\t Your B M I is %.2f, You are Overweight", bMi);
	}
	else if(bMi<18)
	{
		printf("\n\t\t\t\t\t Your B M I is %.2f, You are a skinny Person", bMi);
	}
	else 
	{
		printf("\n\t\t\t\t\t Invalid Input");
	}	
	printf("\n\n\t\t\t\tPress Enter to go Back on Homepage\n\n");
		Choice = getch();
	
		if(Choice == 13)
		{
			main();
		}
		else
		{
			return;
		}

}
void AdMe()
{
	printf("FUNCTION");

}
void DiPl()
{
	char Choice;
	printf("\t\t\t\t\t<||>D  I  E  T    S  C  H  E  D  U  L  E<||>\n\n\n");
			printf("\t\t\t\t\t\t|--->> 1.) M O R N I N G\n");
				printf("\t\t\t\t\t\t\t\t|---)>> i.) Chug 2 Glass of Water\n");
				printf("\t\t\t\t\t\t\t\t|---)>> ii.) Any Smoothie\n\n");

			printf("\t\t\t\t\t\t|--->> 2.) A F T E R N O O N\n");
				printf("\t\t\t\t\t\t\t\t|---)>> i.) 6 Eggs(2 whole, 4 white)\n");
				printf("\t\t\t\t\t\t\t\t|---)>> ii.) Salad\n\n");

			printf("\t\t\t\t\t\t|--->> 3.) P R E - W O R K O U T  M E A L\n");
				printf("\t\t\t\t\t\t\t\t|---)>> i.) 300Gram of Chicken Breast\n");
				printf("\t\t\t\t\t\t\t\t|---)>> ii.) 100Gram Boiled Rice\n\n");

			printf("\t\t\t\t\t\t|--->> 4.) P O S T - W O R K O U T   M E A L\n");
				printf("\t\t\t\t\t\t\t\t|---)>> i.) Whey Protein\n");
				printf("\t\t\t\t\t\t\t\t|---)>> ii.) A handful of nuts\n\n");

			printf("\t\t\t\t\t\t|--->> 5.) D I N N E R\n");
				printf("\t\t\t\t\t\t\t\t|---)>> i.) 50Gram Soya Chunks\n");
				printf("\t\t\t\t\t\t\t\t|---)>> ii.) 2 Chapati\n\n");
	printf("\t\t\t\tPress Enter to go Back on Homepage\n");
		Choice = getch();
	
		if(Choice == 13)
		{
			main();
		}
		else
		{
			return;
		}

	
}
void ExCh()
{
	int Day;
	char Choice;
	printf("\n\t\t\t\t\t<||> D E T A I L E D C H A R T <||>\t\t\t\n\n");

	printf("\n\t\t\tWHICH DAY EXERCISE YOU WANNA SEE?\t\t\t\n");

	printf("\n\t\t\t\t[1]. M O N D A Y\n");
	printf("\n\t\t\t\t[2]. T U E S D A Y\n");
	printf("\n\t\t\t\t[3]. W E D N E S D A Y\n");
	printf("\n\t\t\t\t[4]. T H U R S D A Y\n");
	printf("\n\t\t\t\t[5]. F R I D A Y\n");
	printf("\n\t\t\t\t[6]. S A T U R D A Y\n");

	scanf("%d", &Day);
	
	if(Day == 1)
	{
		printf("\n\t\t\t\tMONDAY\n");
		printf("\t\t\t\t|\n");
		printf("\t\t\t\tC H E S T\n");
			printf("\t\t\t\t\t|--->> 1.) 4*Set Inclined Chest Rod\n");
			printf("\t\t\t\t\t|--->> 2.) 4*Set Inclined Dumbell Press\n");
			printf("\t\t\t\t\t|--->> 3.) 4*Set Inclined Dumbell Fly\n");
			printf("\t\t\t\t\t|--->> 4.) 4*Set Bench Press\n");
			printf("\t\t\t\t\t|--->> 5.) 4*Set Crossover Dumbell Fly\n");
			printf("\t\t\t\t\t|--->> 6.) 4*Set Pullover\n");
			printf("\t\t\t\t\t|--->> 7.) 4*Set Push-ups\n");
		printf("\t\t\t\tT R I C E P\n");
			printf("\t\t\t\t\t|--->> 1.) 4*Set Tricep Dips\n");
			printf("\t\t\t\t\t|--->> 2.) 4*Set Tricep Extension\n");
			printf("\t\t\t\t\t|--->> 3.) 4*Set Skull Crusher\n");
			printf("\t\t\t\t\t|--->> 4.) 4*Set Kickbacks\n");
		
		printf("\t\t\t\tPress Enter to go Back on Homepage\n");
		Choice = getch();
	
		if(Choice == 13)
		{
			main();
		}
		else
		{
			return;
		}
	}
	else if(Day ==2) 
	{
	
		printf("\n\t\t\t\tTUESDAY\n");
		printf("\t\t\t\t|\n");
		printf("\t\t\t\tB A C K\n");
			printf("\t\t\t\t\t|--->> 1.) 4*Set Lat Pull Down\n");
			printf("\t\t\t\t\t|--->> 2.) 4*Set T-Bar\n");
			printf("\t\t\t\t\t|--->> 3.) 4*Set Close Grip Lat Pull Down\n");
			printf("\t\t\t\t\t|--->> 4.) 4*Set Barbell Row\n");
			printf("\t\t\t\t\t|--->> 5.) 4*Set Seated Row\n");
			printf("\t\t\t\t\t|--->> 6.) 4*Set One-hand Dumbell\n");
			printf("\t\t\t\t\t|--->> 7.) 4*Set Dead-lift\n");
		printf("\t\t\t\tB I C E P\n");
			printf("\t\t\t\t\t|--->> 1.) 4*Set Bicep Curls\n");
			printf("\t\t\t\t\t|--->> 2.) 4*Set Spider Curls\n");
			printf("\t\t\t\t\t|--->> 3.) 4*Set Ez-bar Bicep Curl\n");
			printf("\t\t\t\t\t|--->> 4.) 4*Set Hammer\n");
		
		printf("\t\t\t\tPress Enter to go Back on Homepage\n");
		Choice = getch();
	
		if(Choice == 13)
		{
			main();
		}
		else
		{
			return;
		}
	}
	else if(Day == 3)
	{
		printf("\n\t\t\t\tWEDNESDAY\n");
		printf("\t\t\t\t|\n");
		printf("\t\t\t\tS H O U L D E R\n");
			printf("\t\t\t\t\t|--->> 1.) 4*Set Shoulder Dumbell Press\n");
			printf("\t\t\t\t\t|--->> 2.) 4*Set Over-head Press Machine\n");
			printf("\t\t\t\t\t|--->> 3.) 4*Set Side Lateral\n");
			printf("\t\t\t\t\t|--->> 4.) 4*Set Front Dumbell Raise\n");
			printf("\t\t\t\t\t|--->> 5.) 4*Set Dumbell Reverse Fly\n");
			printf("\t\t\t\t\t|--->> 6.) 4*Set Military Press\n");
		printf("\t\t\t\tF O R E A R M\n");
			printf("\t\t\t\t\t|--->> 1.) 4*Set Wrist Curls\n");
			printf("\t\t\t\t\t|--->> 2.) 4*Set Revese Wrist Curls\n");
			printf("\t\t\t\t\t|--->> 3.) 4*Set Plate Pinch\n");
			printf("\t\t\t\t\t|--->> 4.) 4*Set Towel Pull-ups\n");
	
		printf("\t\t\t\tPress Enter to go Back on Homepage\n");
		Choice = getch();
	
		if(Choice == 13)
		{
			main();
		}
		else
		{
			return;
		}
	}
	else if(Day == 4)
	{
		printf("\n\t\t\t\tTHURSDAY\n");
		printf("\t\t\t\t|\n");
		printf("\t\t\t\tB I C E P\n");
			printf("\t\t\t\t\t|--->> 1.) 4*Set Hammer Curls\n");
			printf("\t\t\t\t\t|--->> 2.) 4*Set Seated Dumbell Curls\n");
			printf("\t\t\t\t\t|--->> 3.) 4*Set Ez-Barb Curls \n");
			printf("\t\t\t\t\t|--->> 4.) 4*Set Incline-Dumbell Curls\n");
			printf("\t\t\t\t\t|--->> 5.) 4*Set Spider Curls\n");
			printf("\t\t\t\t\t|--->> 6.) 4*Set Hammer Curls\n");
		printf("\t\t\t\tT R I C E P\n");
			printf("\t\t\t\t\t|--->> 1.) 4*Set Skull Crusher\n");
			printf("\t\t\t\t\t|--->> 2.) 4*Set Tricep Extension\n");
			printf("\t\t\t\t\t|--->> 3.) 4*Set Tricep Dips\n");
			printf("\t\t\t\t\t|--->> 4.) 4*Set Kickbacks\n");
	
		printf("\t\t\t\tPress Enter to go Back on Homepage\n");
		Choice = getch();
	
		if(Choice == 13)
		{
			main();
		}
		else
		{
			return;
		}
	}
	else if(Day == 5)
	{
		printf("\n\t\t\t\tFRIDAY\n");
		printf("\t\t\t\t|\n");
		printf("\t\t\t\tQ U A D S\n");
			printf("\t\t\t\t\t|--->> 1.) 4*Set Squats\n");
			printf("\t\t\t\t\t|--->> 2.) 4*Set Bulgarian Lunges\n");
			printf("\t\t\t\t\t|--->> 3.) 4*Set Leg Press\n");
			printf("\t\t\t\t\t|--->> 4.) 4*Set Front Squats\n");
			printf("\t\t\t\t\t|--->> 5.) 4*Set Leg Extension\n");
		printf("\t\t\t\tH A M S T R I N G\n");
			printf("\t\t\t\t\t|--->> 1.) 4*Set Leg Curls\n");
			printf("\t\t\t\t\t|--->> 2.) 4*Set Romanian Deadlift\n");
			printf("\t\t\t\t\t|--->> 3.) 4*Set Good Morning\n");
			printf("\t\t\t\t\t|--->> 4.) 4*Set Calf\n");
	
		printf("\t\t\t\tPress Enter to go Back on Homepage\n");
		Choice = getch();
	
		if(Choice == 13)
		{
			main();
		}
		else
		{
			return;
		}
	}
	else if(Day == 6)
	{
		printf("\n\t\t\t\tSATURDAY\n");
		printf("\t\t\t\t|\n");
		printf("\t\t\t\tC A R D I O\n");
			printf("\t\t\t\t\t|--->> 1.) 4*Set Skipping/Jump Rope\n");
			printf("\t\t\t\t\t|--->> 2.) 4*Set High Knees\n");
			printf("\t\t\t\t\t|--->> 3.) 4*Set Jumping Squat\n");
			printf("\t\t\t\t\t|--->> 4.) 4*Set Jumping Jacks\n");
			printf("\t\t\t\t\t|--->> 5.) 4*Set Mountain Climbers\n");
			printf("\t\t\t\t\t|--->> 6.) 4*Set Running\n");
	
		printf("\t\t\t\tPress Enter to go Back on Homepage\n");
		Choice = getch();
	
		if(Choice == 13)
		{
			main();
		}
		else
		{
			return;
		}
	}
	else
	{
		printf("\t\t\t\t INVALID INPUT\n");
		ExCh();
	}
	
}
void DeExSc()
{
	printf("\t\t\t*********************************************************************************\n");
	printf("\t\t\t\t\t\t\tDefault Exercise Schedule\n");
	printf("\t\t\t*********************************************************************************\n");
	printf("\t\t\t|\t\t|\t\t|\t\t|\t\t|\t\t|\n");
	printf("\t\t\tV\t\tV\t\tV\t\tV\t\tV\t\tV\n");
	printf("\t\t\tM\t\tT\t\tW\t\tT\t\tF\t\tS\n");
	printf("\t\t\tCHEST\t\tBACK\t\tSHOULDER\tBICEP\t\tQUADS\t\tCARDIO\n");
	printf("\t\t\tTRICEP\t\tBICEP\t\tFOREARM\t\tTRICEP\t\tHAMSTRING\tCARDIO\n");

	char choice;
	printf("\n\n\t\t\t\tW A N N A || S E E || D E T A I L || E X E R C I S E || C H A R T ???\n\n");
	printf("\n\t\t\t\tC O N T I N U E\n");
	printf("\t\t\t\tB A C K S P A C E\n\n");
	printf("\t\t\tpress Enter to Continue Or Backspace to go Back\n\n");
	choice = getch();
	
	if(choice == 13)
	{
		ExCh();
	}
	else if(choice == 8)
	{
		main();
	}


}
void Login()
{
	int j=0;
	while(j!=1)
		{
			char members_id[30], members_pass[100], str[100];
			printf("\t\t\tENTER USERNAME:\t\n");
			scanf("%s", members_id);
			printf("\n\t\t\tENTER PASSWORD:\t\n");
			scanf("%s", members_pass);
			FILE *in;
			in = fopen("Members.txt", "r");
			if(in == NULL)
			{
				printf("\t\t\tThere is some issue in Opening file!");
				int main();
			}
			fscanf(in,"%s",str);
			fscanf(in,"%s",str);
			fscanf(in,"%s",str);
			int i, n=100; // n is a number of lines we'll read from text file
			for(i=0; i<n; i++)
			{
				fscanf(in,"%s",str);
				if(strcmp(str,members_id) == 0)
				{
					//printf("\t\n\t\tcondition true\n");
					fscanf(in,"%s",str);
					if(strcmp(str,members_pass) == 0)
					{
						
						printf("\t\t\tYou're Logged in!\n\n");
						printf("\t\t\t*************************************\n");
						printf("\t\t\t\t    WELCOME BACK!\n");
						printf("\t\t\t\tIT'S TIME TO TRAIN!\n\n");	
						
						i=1000;
						j=1;
									
					}
					
					else
					{
						printf("\n\t\t\tINCORRECT PASSWORD\n\n");
						i=1000;
					}
				}
				else
				{
					//fscanf(in, "%s", str);
				}
				if(i==n-1) printf("\t\t\tINVALID USERNAME\n\n");
				
			}
			
			
		}


}

int main()
{

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY | FOREGROUND_INTENSITY);
	int MainMenuList;
	printf("\t\t\t*****************\n");
	printf("\t\t\t  FITNESS GUIDER\n");
	printf("\t\t\t*****************\n\n");
	Login();
	printf("\t\t\t[1]\tDefault Exercise Schedule\n");
	printf("\t\t\t[2]\tYour Diet Plan\n");
	printf("\t\t\t[3]\tAdd Meals\n");
	printf("\t\t\t[4]\tBMI Calculator\n");	
	printf("\t\t\t[5]\tExit\n\n");
	printf("\t\t\t*************************************\n\n");
	scanf("%d", &MainMenuList);
	
	if(MainMenuList == 1)
	{
		DeExSc();
	}
	else if(MainMenuList == 2)
	{
		DiPl();
	}
	else if(MainMenuList == 3)
	{
		AddMeals();
	}
	else if(MainMenuList ==5)
	{
		return 0;
	}
	else if (MainMenuList == 4)
	{
		BMI();

	}
	else 
	{
		printf("\nINVALID INPUT");
		main();
	}

	return 0;
}