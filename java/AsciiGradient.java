import java.util.Scanner;
import java.util.Arrays;

public class AsciiGradient {
	public static void main(String[] args){
		/* Read from stdin */
		Scanner scan = new Scanner(System.in);
		String[] line = scan.nextLine().split("\\s+"); // double slash b/c regex is still a string
		int width = Integer.parseInt(line[0]);
		int height = Integer.parseInt(line[1]);

		String colors = scan.nextLine();
		line = scan.nextLine().split("\\s+");
		String type = line[0];
		String[] data = Arrays.copyOfRange(line, 1, line.length);

		/* Assign the initial variables */
	    int cx = 0, cy = 0, cr = 0, x1 = 0, y1 = 0, x2 = 0, y2 = 0;
	    if (type.equals("radial")){
	    	cx = Integer.parseInt(data[0]);
	    	cy = Integer.parseInt(data[1]);
	    	cr = Integer.parseInt(data[2]);
	    }
	    else{
	    	x1 = Integer.parseInt(data[0]);
	    	y1 = Integer.parseInt(data[1]);
	    	x2 = Integer.parseInt(data[2]);
	    	y2 = Integer.parseInt(data[3]);
	    }

	    /* loop through each point on the grid and assign a "color" */
	    for (int y = 0; y < height; y++){
	    	StringBuilder row = new StringBuilder();
	    	for (int x = 0; x < width; x++){
	    		int pos;
	    		if (type.equals("radial")){
	    			pos = (int)(colors.length() * distance(x,y,cx,cy)/cr);
	    		}
	    		else {
	    			double d = distance(x1,y1,x2,y2);
	    			double d1 = distance(x,y,x1,y1);
	    			double d2 = distance(x,y,x2,y2);
	    			double a = 1;
	    			if (d1 != 0){
	    				a = (d1*d1 + d*d - d2*d2)/(2*d);
	    			}
	    			pos = (int)(colors.length()*a/d);
	    		}
	    		row.append(colors.charAt( Math.max(0, Math.min(colors.length()-1, pos)) ));
	    	}
	    	System.out.println(row);
	    }
	}

	private static double distance(int x1, int y1, int x2, int y2){
		int dx = x1-x2;
		int dy = y1-y2;
		return Math.sqrt(dx*dx + dy*dy);
	}
}