#include<stdio.h>

int main() {
    char lab_name[20];
    int number_of_computers,No_of_network_devices,No_of_security_tools;
    float cost_per_comp,cost_per_network,annual_cost;
    printf("===============================================");
    printf("\n    CYBERSUCURITY LAB REPORT    ");
    printf("\n===============================================");
    
    
    printf("\nEnter lab name: ");
    scanf("%s",&lab_name);
    printf("computers: ");
    scanf("%d",&number_of_computers);
    printf("network devices: ");
    scanf("%d",&No_of_network_devices);
    printf("security tools: ");
    scanf("%d",&No_of_security_tools);
    printf("\n");
    printf("Computer cost: ");
    scanf("%f",&cost_per_comp);
    printf("network device cost: ");
    scanf("%f",&cost_per_network);
    printf("software cost: ");
    scanf("%f",&annual_cost);
    
    float computer_cost=number_of_computers*cost_per_comp;
    float network_cost=No_of_network_devices*cost_per_network;
    float total_lab_investment=computer_cost+network_cost+annual_cost;
    printf("\nComputer cost:%.2f ",computer_cost);
    printf("\nNetwork device cost: %.2f", network_cost);
    printf("\nSoftware cost: %.2f",annual_cost);
    printf("\n--------------------------------");
    printf("\nTotal investment: %.2f",total_lab_investment);
    printf("\n--------------------------------");
    printf("\n============================================");
    
    
    

}
