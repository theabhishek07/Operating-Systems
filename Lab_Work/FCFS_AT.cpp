
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
void read_AT(int AT_array[8])
{
    cout<<"Enter the Arrival Time w.r.t processes:-->"<<endl;
    for(int g=0; g<8; g++)
    {
        cin>>AT_array[g];
    }
}

void waiting_time(int WT_array[8],int BT_array[8],int AT_array[8],int temp[8])
{
    temp[0]=0;
    cout<<"The Waiting Time for the processe:-->"<<endl;
    for(int p=0; p<8; p++)
    {
        temp[1+p] = temp[p] + BT_array[p];
        WT_array[p] = temp[p] - AT_array[p];
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

void Gantt_chart(int WT_array[8],int temp[8],char ArrayP_id[8])
{
    WT_array[0]=0;
    cout<<"| "<<ArrayP_id[0]<<" | "<<ArrayP_id[1]<<" | "<<ArrayP_id[2]<<" | "<<ArrayP_id[3]<<" | "<<ArrayP_id[4]<<" | "<<ArrayP_id[5]<<" | "<<ArrayP_id[6]<<" | "<<ArrayP_id[7]<<" |"<<endl;
    cout<<temp[0]<<"   "<<temp[1]<<"   "<<temp[2]<<"   "<<temp[3]<<"   "<<temp[4]<<"   "<<temp[5]<<"   "<<temp[6]<<"   "<<temp[7]<<endl;
    puts("+-----+------------+--------------+-----------------+");
}

int main()
{
    char ArrayP_id[8];
    int BT_array[8], WT_array[8], TAT_array[8], AT_array[8], temp[8];
    read_process(ArrayP_id);
    read_BT(BT_array);
    read_AT(AT_array);
    waiting_time(WT_array, BT_array, AT_array, temp);
    TAT(TAT_array, BT_array, WT_array);
    Gantt_chart(WT_array, temp, ArrayP_id);
    return 0;
    
}
