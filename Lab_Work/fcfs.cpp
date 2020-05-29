#include <iostream>
using namespace std;
void read_process(char ArrayP_id[8])
{
    cout<<"Enter the processes:-->"<<endl;
    for(int i=0; i<8; i++)
    {
        cin>>ArrayP_id[i];
    }
}
void read_BT(int BT_array[8])
{
cout<<"Enter the Burst Time w.r.t processes:-->"<<endl;
for(int j=0; j<8; j++)
{
    cin>>BT_array[j];
}
}

void waiting_time(int WT_array[8],int BT_array[8])
{
    WT_array[0]=0;
    cout<<"The Waiting Time for the processe:-->"<<endl;
    for(int p=1; p<8; p++)
    {
        WT_array[p] = WT_array[p-1] + BT_array[p-1];
    }
    for(int q=0; q<8 ; q++)
    {
        cout<<"The Waiting time for the process:--> "<<q<<endl;
        cout<<WT_array[q]<<endl;
    }
}
void TAT(int TAT_array[8],int BT_array[8],int WT_array[8])
{
    cout<<"The TAT for the processes:-->"<<endl;
    for(int e=0; e<8; e++)
    {
        TAT_array[e] = BT_array[e] + WT_array[e];
        cout<<"The TAT for process "<<e+1<<endl;
        cout<<TAT_array[e]<<endl;
    }
}

void Gantt_chart(int WT_array[8])
{
    WT_array[0]=0;
        cout<<"| A | B | C | D | E | F | G | H |"<<endl;
    cout<<WT_array[0]<<"   "<<WT_array[1]<<"   "<<WT_array[2]<<"   "<<WT_array[3]<<"   "<<WT_array[4]<<"   "<<WT_array[5]<<"   "<<WT_array[6]<<"   "<<WT_array[7]<<endl;
        puts("+-----+------------+--------------+-----------------+");
}

int main()
{
    char ArrayP_id[8];
    int BT_array[8], WT_array[8], TAT_array[8];
    read_process(ArrayP_id);
    read_BT(BT_array);
    waiting_time(WT_array, BT_array);
    TAT(TAT_array, BT_array, WT_array);
    Gantt_chart(WT_array);
    return 0;
    
}
