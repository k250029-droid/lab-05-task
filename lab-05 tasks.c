#include <stdio.h>

int main() {
    int deviceType, symptomCode;

    printf("Tech Support Diagnostic System\n");
    printf("Enter device type (1-Laptop, 2-Smartphone, 3-Router): ");
    scanf("%d", &deviceType);

    // First level: Validate device type
    if (deviceType == 1 || deviceType == 2 || deviceType == 3) {
        printf("Enter symptom code: ");
        scanf("%d", &symptomCode);

        // Second level: Nested switch based on device type
        if (deviceType == 1) { // Laptop
            switch (symptomCode) {
                case 10:
                    printf("**CRITICAL ISSUE** -> Immediate hardware service required!\n");
                    printf("Advice: Check power adapter and battery connections.\n");
                    printf("Try a different power outlet. Remove battery and hold power button for 30 seconds.\n");
                    break;
                case 11:
                    printf("Advice: Clean fans and ensure proper ventilation.\n");
                    printf("Check for dust accumulation. Use a cooling pad. Monitor CPU usage.\n");
                    break;
                case 12:
                    printf("Advice: Run system diagnostics and check resource usage.\n");
                    printf("Scan for malware. Upgrade RAM if necessary. Defragment hard drive.\n");
                    break;
                default:
                    printf("Invalid symptom code for Laptop.\n");
            }
        }
        else if (deviceType == 2) { // Smartphone
            switch (symptomCode) {
                case 20:
                    printf("Advice: Run battery calibration tool and check for background apps.\n");
                    printf("Reduce screen brightness. Disable unnecessary connectivity features.\n");
                    break;
                case 21:
                    printf("Advice: Check SIM card and network settings. Toggle airplane mode.\n");
                    printf("Update carrier settings. Check for network outages.\n");
                    break;
                case 22:
                    printf("Advice: Perform screen calibration test. Clean screen surface.\n");
                    printf("Restart device. Check for software updates.\n");
                    break;
                default:
                    printf("Invalid symptom code for Smartphone.\n");
            }
        }
        else if (deviceType == 3) { // Router
            switch (symptomCode) {
                case 30:
                    printf("Advice: Check ISP status and router cables.\n");
                    printf("Restart modem and router. Check WAN connection settings.\n");
                    printf("Verify internet subscription.\n");
                    break;
                case 31:
                    printf("Advice: Reposition router and check antenna connections.\n");
                    printf("Reduce interference from other devices. Change Wi-Fi channel.\n");
                    printf("Consider using a range extender.\n");
                    break;
                case 32:
                    printf("Advice: Check MAC filtering and DHCP settings.\n");
                    printf("Verify Wi-Fi password. Restart connecting device. Check for IP conflicts.\n");
                    break;
                default:
                    printf("Invalid symptom code for Router.\n");
            }
        }
    } else {
        printf("Invalid device type entered.\n");
    }

    return 0;
}

