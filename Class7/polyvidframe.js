var mode = 0;
var xscale = 1.;
var yscale = 1.;



function xs(v)
{
		xscale = v;
}

function ys(v)
{
		yscale = v;
}

function setmode(v)
{
	mode = v;
}

function msg_int(v)
{
	var w = v-1;
	var x = 0;
	var y = 0;
	
	switch(mode) {
		case 0: // one long row
			x = map(w, 0, 7, -1., 1.);
			y = 0;
			break;
		case 1: // 4 up
			post(w + "\n");
			if(w<4) {
				x = map(w%2, 0, 1, -0.5, 0.5);
				y = map(Math.floor(w/2), 0, 1, -0.5, 0.5);
			}
			else
			{
				x = 100;
				y = 100;
			}
			break;
		default:
			x = 0;
			y = 0;
	}
	outlet(0, "position", x*xscale, y*yscale);
	
}

map = function(n, start1, stop1, start2, stop2) {
  return ((n-start1)/(stop1-start1))*(stop2-start2)+start2;
};
