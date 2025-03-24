#include <stdio.h>
#include <string.h>

#define NUM_ROOMS 3 

void setupSystem();
void showMainMenu();
void toggleLights();
void monitorTemperature();
void checkMotion();
void controlSecurity();
void showHouseStatus();
void shutdownSystem();

int main()
{
    int number_of_rooms;
    printf("\nEnter the number of rooms in the house: ");
    scanf("%d", &number_of_rooms);
    setupSystem();
    return 0;
}

void setupSystem()
{
    printf("\nSystem is starting up...\n");
    showMainMenu();
}

void showMainMenu()
{
    int option;
    printf("\n===== Smart Home Control Panel =====\n\t1. Toggle Lights\n\t2. Monitor Temperature\n\t3. Check Motion Sensor\n\t4. Control Security\n\t5. Show House Status\n\t6. Shutdown");
    printf("\nPlease select an option: ");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
        toggleLights();
        break;

    case 2:
        monitorTemperature();
        break;

    case 3:
        checkMotion();
        break;

    case 4:
        controlSecurity();
        break;

    case 5:
        showHouseStatus();
        break;

    case 6:
        shutdownSystem();
        break;

    default:
        printf("\n\tInvalid selection. Try again...\n");
        break;
    }
}

void toggleLights()
{
    int room_id;
    char energy_response[50];
    printf("Enter room number to toggle light (1-3): ");
    scanf("%d", &room_id);
    if (room_id == 1)
    {
        printf("\nRoom 1 light is OFF\n");
    }
    else if (room_id == 2)
    {
        printf("\nRoom 2 light is ON\n");
    }
    else if (room_id == 3)
    {
        printf("\nRoom 3 light is OFF\n");
    }
    printf("\nWould you like to switch to energy-saving mode? (yes/no): ");
    scanf("%s", energy_response);
    if (strcmp(energy_response, "yes") == 0 || strcmp(energy_response, "YES") == 0 || strcmp(energy_response, "ok") == 0 || strcmp(energy_response, "okay") == 0)
    {
        printf("\nEnergy-saving mode activated: All lights turned off.");
    }
    else
    {
        printf("\nLights will remain ON.");
    }
    showMainMenu();
}

void monitorTemperature()
{
    int room_id, room_temperatures[] = {22, 25, 24};
    printf("Enter the room number to check the temperature (1-3): ");
    scanf("%d", &room_id);
    if (room_id == 1)
    {
        printf("Room 1 has a temperature of %d°C\n", room_temperatures[0]);
    }
    else if (room_id == 2)
    {
        printf("Room 2 has a temperature of %d°C\n", room_temperatures[1]);
    }
    else if (room_id == 3)
    {
        printf("Room 3 has a temperature of %d°C\n", room_temperatures[2]);
    }

    for (int i = 0; i < 3; i++) {
        if (room_temperatures[i] > 30) {
            printf("\nWarning: Room %d temperature exceeds 30°C!\n", i + 1);
        }
    }

    showMainMenu();
}

void checkMotion()
{
    int room_id;
    printf("Enter the room number to check for motion (1-3): ");
    scanf("%d", &room_id);
    if (room_id == 1)
    {
        printf("\nNo motion detected in Room 1\n");
    }
    else if (room_id == 2)
    {
        printf("\nMotion detected in Room 2\n");
    }
    else if (room_id == 3)
    {
        printf("\nNo motion detected in Room 3\n");
    }

    showMainMenu();
}

void controlSecurity()
{
    int room_id;
    printf("Enter the room number to check security system status (1-3): ");
    scanf("%d", &room_id);
    if (room_id == 1)
    {
        printf("\nRoom 1 is secured and locked.\n");
    }
    else if (room_id == 2)
    {
        printf("\nRoom 2 is secured and locked.\n");
    }
    else if (room_id == 3)
    {
        printf("\nRoom 3 is unlocked.\n");
    }

    showMainMenu();
}

void showHouseStatus()
{
    printf("Current House Status:\n");
    printf("\n\tRoom 1: Light OFF, Temp 22°C, No Motion, Locked\n");
    printf("\n\tRoom 2: Light ON, Temp 25°C, Motion Detected, Locked\n");
    printf("\n\tRoom 3: Light OFF, Temp 24°C, No Motion, Unlocked\n");
    showMainMenu();
}

void shutdownSystem()
{
    printf("\nShutting down the system...\n");
}
