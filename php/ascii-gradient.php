<?php

/* Print all errors if any */
ini_set('display_errors',1);
ini_set('display_startup_errors',1);
error_reporting(-1);

/* Read from stdin */
$line = preg_split("/\s+/", rtrim(fgets(STDIN)));
$width = $line[0]; $height = $line[1];
$colors = rtrim(fgets(STDIN)); // the palette

$line = preg_split("/\s+/", rtrim(fgets(STDIN)));
$type = $line[0];
$data = array_slice($line, 1);

/* assign the initial variables */
$cx = 0; $cy = 0; $cr = 0; $x1 = 0; $y1 = 0; $x2 = 0; 
$y2 = 0;
if ($type === "radial"){
	$cx = intval($data[0]);
	$cy = intval($data[1]);
	$cr = intval($data[2]);
}
else{
	$x1 = intval($data[0]);
	$y1 = intval($data[1]);
	$x2 = intval($data[2]);
	$y2 = intval($data[3]);
}

/* loop through each point on the grid and assign a "color" */
for ($y = 0; $y < $height; $y++){
	$row = "";
	for ($x = 0; $x < $width; $x++){
		$pos;
		if ($type === "radial"){
			$pos = intval(strlen($colors) * distance($x,$y,$cx,$cy)/$cr);
		}
		else {
			$d = distance($x1,$y1,$x2,$y2);
			$d1 = distance($x,$y,$x1,$y1);
			$d2 = distance($x,$y,$x2,$y2);
			$a = 1;
			if ($d1 !== 0){
				$a = ($d1*$d1 + $d*$d - $d2*$d2)/(2*$d);
			}
			$pos = intval(strlen($colors)*$a/$d);
		}
		$row .= $colors[max(0, min( strlen($colors)-1, $pos ))];
	}
	echo $row . "\n";
}


function distance($x1, $y1, $x2, $y2){
	$dx = $x1-$x2;
	$dy = $y1-$y2;
	return sqrt($dx*$dx + $dy*$dy);
}

?>