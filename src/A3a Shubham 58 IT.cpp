#include<stdio.h>
struct time_struct
{
	int hour;
    int minute;
    int second;
};
void input(struct time_struct t );
void display(struct time_struct t);
void update(struct time_struct t );
int main()
{
	struct time_struct t1;
	t1.hour=0;t1.minute=0;t1.second=0;
	input(t1);
}
void input(struct time_struct t){
	printf("Enter Hour: ");
    scanf("%d", &t.hour);
    printf("Enter minute: ");
    scanf("%d", &t.minute);
    printf("Enter second: ");
    scanf("%d", &t.second);
    display(t);
}
void display(struct time_struct t) {
   printf("\nDisplaying new time\n");
   printf("Time: %d:%d:%d", t.hour,t.minute,t.second);
   update(t);
}
void update(struct time_struct t) {
	if (t.second==59){t.second=0;
	t.minute++;
	}
	if (t.minute==60){t.minute=0;
	t.hour++;
	}
	if (t.hour==24)
	t.hour=0;
	else
	t.second++;
	
	printf("\nDisplaying updated time\n");
	printf("Time: %d:%d:%d", t.hour,t.minute,t.second);
}
