#include<stdio.h>

void insert_at_sorting_position(int* a, int N);
void insertion_sort(int* a, int N);
void show_array(int* a, int N, char* msg);

int main(void)
{
    int a[5]={50,20,30,40,10};
    show_array(a,5,"before sorting");
    //insert_at_sorting_postion(a,5);
    ins(a,5);
    show_array(a,5,"after sorting");
    return 0;
}

void insert_at_sorting_position(int* a,int N){
int key=a[N-1];
int i=N-2;
while(i>-1 && a[i]>key){
a[i+1]=a[i];
i=i-1;
}
a[i+1]=key;
}

void insertion_sort(int*a, int N){
int length;
for(length=2;length<=N;++length){
insert_at_sorting_position(a, length);
}
}

void show_array(int* a, int N, char* msg){
if(msg!=NULL)
puts(msg);

for(int i=0; i<N; ++i){
printf("a[%d] : %d\n",i,a[i]);
}
}

