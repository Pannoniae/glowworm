
	(include "/properties/construction.inc")
	{props "construction" "concrete" "shed" "big" }
	("armor_medium" args 0.7)
	(define "volume" 
		{Volume %0 
			{thickness 30} 
			{tags "body" "climb"} 
			{able {visible 1}{touch 1}}
		}
	)
	("volume" args "body1")
	("volume" args "body2")
