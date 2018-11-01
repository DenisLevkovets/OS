#include <stdio.h>
#include <unistd.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <string.h>


int main() {
      int fi,fo;
      char *src, *dest;
      struct stat buff;

      fi = open("ex4.txt", 'r');
      fo = open("ex4.memcpy.txt", 'r');

      fstat (fi, &buff);
      int fs=buff.st_size;
      ftruncate(fo, fs);

      src = mmap(NULL, fs, PROT_READ, MAP_PRIVATE, fi, 0);
      dest = mmap(NULL, fs, PROT_READ | PROT_WRITE, MAP_SHARED, fo, 0);

      memcpy(dest, src, fs);

      close(fi);
      close(fo);

      return 0;
}
