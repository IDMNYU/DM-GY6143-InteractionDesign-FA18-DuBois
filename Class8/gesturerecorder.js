var whichgesture = 0; // which gesture am i recording?

var recording = 0; // are we recording?
var thestuff = []; // this is the gesture data
var iptr = []; // where in the sequence are we playing back?



// this is stuff coming in from the leapmotion....
function ball(_x, _y, _z)
{
	var t = [_x, _y, _z];
	if(recording) thestuff[whichgesture].push(t); // add to the gesture
}

// this is the recording switch
function record(_v)
{
		recording = _v;
		if(recording==false) {
			iptr[whichgesture] = 0; // reset the counter when we stop recording
			whichgesture = whichgesture+1; // move to the next one
		}
		if(recording==true) {
			thestuff[whichgesture] = []; // blow out the gesture array when we start recording
		}
}

// this happens every frame
function bang()
{
	// only do shit on playback
	if(recording==0) {
		for(var i = 0;i<thestuff.length;i++)
		{
			if(thestuff[i].length>0)
			{
				outlet(0, thestuff[i][iptr[i]]);
				iptr[i] = (iptr[i]+1)%thestuff[i].length;
			}
		}
	}	
}

// blow everything away
function clear()
{
		thestuff = [];
		itpr = [];
		whichgesture = 0;
}