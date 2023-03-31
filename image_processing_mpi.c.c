#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#include <mpi.h>

#define W 943
#define H 827
#define IMAGE_IN "logo.pgm"
#define IMAGE_OUT "logo2.pgm"

/*  global variables */
int image_in[H][W];   
int image_out[H][W]; 

/* results */
int sequential_cost, parallel_cost;

/* function declarations */
void read_image (int image[H][W], char file_name[], int *p_h, int *p_w, int *p_levels);
void write_image (int image[H][W], char file_name[], int h, int w, int levels);
struct compute_borders(int left_column, int upper_row, int message_size);

int main()
{
int kernel [9] = {0,0,0,0,1,0,0,0,0};
int size, rank;
    
    MPI_Init(&argc,&argv);
    MPI_Comm_size(MPI_COMM_WORLD,  &size);
    MPI_Comm_rank (MPI_COMM_WORLD, &rank);

/* message size per processor*/
int image_size_no_bord, pix_per_proc, borders;
image_size_no_bord=H*W-2*H-2*(W-2);
borders=compute_borders(/*tengo que pensar como meterlos*/)

if (size==1)
{
    pix_per_proc=image_size_no_bord;
    parallel_cost==sequential_cost;
}
else {
    pix_per_proc=image_size_no_bord/(size-1);
    pix_last_proc=image_size_no_bord-pix_per_proc*(size-1);
    if (rank==0){
        gettimeofday(&start_time, NULL);
        output_message=malloc(h*w*sizeof(int))
    }
}

return 0;
}

struct compute_borders(int left_column, int upper_row, int message_size)
{
    borders.borders=0;
    /*Aquí añadiríamos los bordes izquierdo, derecho, superior e inferior*/
    return borders;
}
