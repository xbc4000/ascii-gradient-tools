#include <stdio.h>
#include <string.h>
#include <math.h>

int max(int a, int b){
	return a > b ? a : b;
}

int min(int a, int b){
	return a < b ? a : b;
}

double distance(int x1, int y1, int x2, int y2){
	int dx = x1-x2;
	int dy = y1-y2;
	return sqrt(dx*dx + dy*dy);
}

int main(){
    /* Read side and colors. */
    int width, height;
    scanf("%d %d", &width, &height);
    while (getchar() != '\n'); // kill remaining line
    char colors[256];
    fgets(colors, sizeof(colors), stdin);
    int ncolors = strlen(colors) - 1; // last character is newline; ignore it

    /* Select sampler function. */
    char sampler_name[32];
    scanf("%31s", sampler_name);

    /* Read in arguments. */
    int args[8];
    int nargs = 0;
    while (scanf("%d", &args[nargs]) == 1 && nargs < 8)
        nargs++;

    /**
     * w -> width
     * h -> height
     * palette -> colors (up to ncolors)
     * type -> sampler_name
     * data -> args (up to nargs)
     */
    int cx, cy, cr, x1, y1, x2, y2;
    if (strcmp(sampler_name, "radial") == 0){
    	cx = args[0];
    	cy = args[1];
    	cr = args[2];
    }
    else{
    	x1 = args[0];
    	y1 = args[1];
    	x2 = args[2];
    	y2 = args[3];
    }

    int x,y;
    for (y = 0; y < height; y++){
    	char line[width+1];
    	for (x = 0; x < width; x++){
    		int pos;

    		/* For each coordinate, calculate the relative position from the first color in the list of colors */
    		if (strcmp(sampler_name, "radial") == 0){
    			/* the percent distance is the ratio of the distance between the point and center, and the given radius */
    			pos = (int)(ncolors * distance(x,y,cx,cy)/cr);
    		}
    		else {
    			/* 
    				Percent distance is the ratio of a to the distance between both lines.

    						(x2,y2)
					          *
					         **
					        * *
					       *  *
					      *   *
					   d *    * d2
					    *     *
					   * *    *
					a *  h *  *
					 *       **
					***********
				(x1,y1)  d1  (x,y)

					(d-a)^2 + h^2 = d2^2
					a^2 + h^2 = d1^2
					(math this out to get the equation for a)
    			*/
    			double d = distance(x1,y1,x2,y2);
    			double d1 = distance(x,y,x1,y1);
    			double d2 = distance(x,y,x2,y2);
    			double a = 1;
    			if (d1 != 0){
    				a = (d1*d1 + d*d - d2*d2)/(2*d);
    			}
    			pos = (int)(ncolors*a/d);
    		}
    		line[x] = colors[max(0, min(ncolors-1, pos))];
    	}
    	line[width] = '\0';
    	printf("%s\n", line);
    }

    return 0;
}