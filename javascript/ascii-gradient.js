function distance(x1, y1, x2, y2){
	var dx = x1-x2;
	var dy = y1-y2;
	return Math.sqrt(dx*dx + dy*dy);
}

function generateGradient(width, height, palette, type, data){
	var gradientHTML = "";

	/* Assign the initial variables */
    var cx, cy, cr, x1, y1, x2, y2;
    if (type === "radial"){
    	cx = parseInt(data[0]);
    	cy = parseInt(data[1]);
    	cr = parseInt(data[2]);
    }
    else{
    	x1 = parseInt(data[0]);
    	y1 = parseInt(data[1]);
    	x2 = parseInt(data[2]);
    	y2 = parseInt(data[3]);
    }

    /* loop through each point on the grid and assign a "color" */
    for (var y = 0; y < height; y++){
    	var row = "";
    	for (var x = 0; x < width; x++){
    		var pos;
    		if (type === "radial"){
    			pos = parseInt(palette.length * distance(x,y,cx,cy)/cr);
    		}
    		else {
    			d = distance(x1,y1,x2,y2);
    			d1 = distance(x,y,x1,y1);
    			d2 = distance(x,y,x2,y2);
    			a = 1;
    			if (d1 != 0){
    				a = (d1*d1 + d*d - d2*d2)/(2*d);
    			}
    			pos = parseInt(palette.length*a/d);
    		}
    		row += palette[Math.max(0, Math.min(palette.length-1, pos))];
    	}
    	gradientHTML += row + "\n";
    }

    return gradientHTML;
}