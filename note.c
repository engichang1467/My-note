



FILE * fopen( const char * filename, 
              const char * mode);

size_t fwrite( const void * ptr, 
               size_t size, 
               size_t nitems, 
               FILE * stream);

size_t fread( void * ptr,
              size_t size, 
              size_t nitems, 
              FILE * stream);

int fclose( FILE *stream);