;this is the script you put into stuff.inc

{"stuff armor"
	{on spawn sync
		{delay 0.1 		
			{volumes "body1" enable contact contact_ground touch  blast}
			{volumes "body2" enable contact contact_ground touch  blast}
			{volumes "select" enable contact contact_ground touch blast}	
		}
	}
}

