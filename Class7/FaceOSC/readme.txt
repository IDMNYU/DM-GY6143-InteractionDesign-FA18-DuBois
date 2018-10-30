
Settings
--------

The settings for FaceOSC are are found in the settings.xml file located at: 
* Mac OSX: right click on FaceOSC.app, select "Show Package Contents", and navigate to Contents/Resources/data/ 
* Win & Linux: included in the FaceOSC folder

Further instructions are contained within the settings.xml file.

Playing Movies
--------------

Put the movie file in your home folder and set it in the movie <filename> tag with the full path to the movie aka:

/Users/YourUserAccountName/yourMovie.mov

Change the source <useCamera> tag to 0 to use the movie as input. Also check the other movie settings (volume, speed).

Key Controls
-------------

* r - reset the face tracker
* m - toggle face mesh drawing
* g - toggle gui's visibility
* p - pause/unpause (only works with movie source) 
* up/down - increase/decrease movie playback speed (only works with movie source)


Osc Information
---------------

 * Pose
  * **center position**: /pose/position
  * **scale**: /pose/scale
  * **orientation** (which direction you're facing): /pose/orientation
 * Gestures
  * **mouth width**: /gesture/mouth/width
  * **mouth height**: /gesture/mouth/height
  * **left eyebrow height**: /gesture/eyebrow/left
  * **right eyebrow height**: /gesture/eyebrow/right
  * **left eye openness**: /gesture/eye/left
  * **right eye openness**: /gesture/eye/right
  * **jaw openness**: /gesture/jaw
  * **nostril flate**: /gesture/nostrils
 * Raw
  * **raw points** (66 xy-pairs): /raw

