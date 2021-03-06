-------------------------------------------------------------------------------

Name:		 ActivexChildTabbing.zip

Author:		 Chip Camden 

Platforms:	 Windows

Minimum version: Synergy/DE 9.1.1

Revisions:	 Version          Date          Comment
                 -------          -----         --------
		 1.0              07 Sept 2007  Original version

Disclaimer:	 All code is supplied as seen and without warranty or support.
                 Use at your own risk. Neither the author nor Synergex accept 
                 any responsibility for any loss or damage which may result 
                 from the use of this code.

-------------------------------------------------------------------------------

Testtab.dbl is a UI Toolkit program that controls the way tabbing works with an
ActiveX Control that  

-- uses TAB and SHIFT+TAB internally (i.e., it processes these as 
accelerators), which prevents users from tabbing out of the child.

-- includes two edit controls.

For the first issue, the control is coded to invoke a method that signals the 
"C_NEXT" or "C_PREV" menu entry at the point a user would tab out of the 
control. (Note this isn't necessary for many ActiveX controls. If a control 
uses TAB and SHIFT+TAB internally but returns them as unprocessed when it 
reaches the end of its own tabbing order, TAB and SHIFT+TAB do tab out of the
child. This is usually how controls created with VB6 work.)

For the second issue, if an ActiveX control consists of more than one control
and has its own tabbing order, focus within the ActiveX control may not be 
where you want it when the user tabs to the ActiveX control. For this program,
the ActiveX control consists of two edit controls, and focus within the ActiveX
control generally lands on the edit control that last had focus. To work around
this, the Toolkit program includes a composite window processing method that in
turn uses a method in the ActiveX control to set focus. 

The important parts of the Synergy code are the two functions at the end of 
testtab.dbl: 

-- The mfcctl_process function (used as the child window method when C_PROCESS 
processes the ActiveX window) instructs the control to focus the correct edit 
control depending on the reason for achieving focus. It also instructs the 
runtime (via ax_wantskey) that the control wants to process TAB and SHIFT+TAB. 

-- The mfcctl_tabout function is an event handler for the control's Tabout 
event. This is fired by the control whenever a TAB or SHIFT+TAB results in 
tabbing off either end of the control's own internal tabbing order.

The ActiveX control is written in C++, and the sources are included so you can
see how the control fires the required Tabout event.