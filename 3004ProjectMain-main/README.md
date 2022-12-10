# 3004ProjectMain
TEAM 46
Edi Ekeng
Damilola Olabisi
Victor Kolawole
Rawan Elkhatib

Work Done
Damilola and Rawan worked on the front-end which included GUI and connecting the slots in MainWindow all done in Qt.
Victor and Edi worked on back end and code Design.
Everyone worked together to merge both ends together.

File Organization
├── 3004Project.pdf
├── ReadMe.txt
├── cpp
│   ├── Battery.cpp
│   ├── Connection.cpp
│   ├── Machine.cpp
│   ├── main.cpp
│   ├── mainwindow.cpp
│   ├── Power.cpp
│   ├── Session.cpp
├── h
│   ├── Battery.h
│   ├── Connection.h
│   ├── Machine.h
│   ├── mainwindow.h
│   ├── Power.h
└── ├──Session.h


Test Scenarios
-change battery level for testing
	updateBattery(int) can be used to change battery levels for testing.

-change the connection status for testing(excellent, okay, no connection)

-power off in no session is selected in 2 mins
	After durat
	

Code breakdown

To run a session 

Press the power on button  to start the machine.
Choose a duration between (20 min, 45 min or User designated) then click the select button 
Select a type between , , ,  then press on any of the numbers between 1 - 8 to choose intensity, then press the select button.

Click the connection button , to see the strength of connection. If the connection is green or yellow then you can select ok. If the connection is red, the session won’t run until the connection is fixed.
If connection is yellow or green, press the select button  to start the session.

To record a session  

Press the power on button  to start the machine.
Choose a duration between (20 min, 45 min or User designated) then click the select button 
Select a type between , , ,  then press on any of the numbers between 1 - 8 to choose intensity, then press the select button.
Press on the record button 
Click the connection button , to see the strength of connection. If the connection is green or yellow then you can select ok. If the connection is red, the session won’t run until the connection is fixed.
If connection is yellow or green, press the select button  to start the session.
After the session is done, the recorded session will appear on the screen.


To Replay a Session 
Press the power on button  to start the machine.
Select the recorded session you would like to replay on the display, click the replay button  then press the select button
Click the connection button , to see the strength of connection. If the connection is green or yellow then you can select ok. If the connection is red, the session won’t run until the connection is fixed.
 If connection is yellow or green, press the select button  to start the session.

