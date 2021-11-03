#include <stdio.h>
#include <unistd.h>

int main()
{
    int my_id, my_pid;

    my_id = getpid(); /*process id*/
    my_pid = getppid(); /*parent process id*/

    printf("Process ID: %d\n", my_id);
    printf("Parent Process ID: %d\n", my_pid);

    return 0;
}
