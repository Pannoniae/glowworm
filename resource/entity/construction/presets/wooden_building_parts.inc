
	(include "/properties/construction.inc")
	{props "wood" "parts" "medium" "construction" "burning" "break_on_burn" "crushable" "no_destroyed_stamp" }
	("armor_house_wood")
	{obstacleID "small_building"}
	{mass 1000}
	(define "wall"
		{Volume %0
			{thickness 15}
			{tags "body" "fire"}
		}
	)
	(define "roof"
		{Volume %0
			{thickness 15}
			{tags "roof" "fire"}
			{able {Obstacle 0}{visible 0}}
		}
	)
	;{extender "edifice"}
