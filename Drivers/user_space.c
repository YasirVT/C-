#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
int main(int argc, char **argv)
{
	/* Our file descriptor */
	int fd;
	int rc = 0;
	char *rd_buf[16];
	printf("%s: entered\n", argv[0]);
	/* Open the device */
	fd = open("/dev/tty0", O_RDWR);
	if ( fd == -1 ) {
		perror("open failed");
		rc = fd;
		exit(-1);
	}
	printf("%s: open: successful\n", argv[0]);
	/* Issue a read */
	rc = read(fd, rd_buf, 0);
	if ( rc == -1 ) {
		perror("read failed");
		close(fd);
		exit(-1);
	}
	write(fd,rd_buf,10);
	printf("%s\n",rd_buf);	
	printf("%s: read: returning %d bytes!\n", argv[0], rc);
	while(1);
	close(fd);
	return 0;
}
