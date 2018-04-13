#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int id[3]={2132,2102,2453},time=0;
	int p[3]={2,4,8},pa=0;
	cout<<"\n student s1 id is:"<<id[0]<<"  process time is :"<<p[0]<<"\n";
	cout<<"\n student s2 id is:"<<id[1]<<"  process time is :"<<p[1]<<"\n";
	cout<<"\n student s3 id is:"<<id[2]<<"  process time is :"<<p[2]<<"\n";
	cout<<"\n\n";
	cout<<"order \tp1 p2 p3\n\n";
	cout<<"----- \t--------\n";
		cout<<"\t"<<p[0]<<"  "<<p[1]<<"  "<<p[2]<<"\n\n";
	for(int i=0;i<14;i++)
	{
        if(p[2]>p[1] && p[2]>p[1] && p[2]>=pa)
        {
        	p[2]=p[2]-1;
        	cout<<" p3\t";
		}
		else if(p[1]>p[0] && p[1]>p[2] && p[1]>=pa)
        {
        	p[1]=p[1]-1;cout<<" p2\t";
		}
	    else if(p[0]>p[2] && p[0]>p[1] && p[0]>=pa)
        {
        	p[0]=p[0]-1;cout<<" p1\t";
		}
		else if(p[2]==p[1])
		{
			if(id[2]<id[1])
			{
				p[2]=p[2]-1;cout<<" p3\t";
			}
			else if(id[1]<id[2])
			{
				p[1]=p[1]-1;cout<<" p2\t";
			}
		}
				else if(p[2]==p[0])
		{
			if(id[2]<id[0])
			{
				p[2]=p[2]-1;cout<<" p3\t";
			}
			else if(id[0]<id[2])
			{
				p[0]=p[0]-1;cout<<" p1\t";
			}
		}
				else if(p[0]==p[1])
		{
			if(id[0]<id[1])
			{
				p[0]=p[0]-1;cout<<" p1\t";
			}
			else if(id[1]<id[0])
			{
				p[1]=p[1]-1;cout<<" p2\t";
			}
		}
		 cout<<p[0]<<"  "<<p[1]<<"  "<<p[2]<<"\n\n";
		 time =time+1;
	}
	cout<<"\n time taken to complete all 3 processes is :"<<time;
} 
