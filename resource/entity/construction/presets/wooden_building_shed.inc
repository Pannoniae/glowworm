
	(include "/properties/construction.inc")
	{props "wood" "shed" "big" "construction" "burning" "break_on_burn" "crushable" "no_destroyed_stamp" }
	("armor_house_wood")
	{obstacleID "small_building"}
	{mass 1000}
	(define "wall" 
		{Volume %0 
			{thickness 30} 
			{tags "body" "fire"} 
			{able {visible 1}}
		}
	)
	(define "roof" 
		{Volume %0 
			{thickness 30} 
			{tags "body" "fire"} 
			{able {Obstacle 0}{visible 0}}
		}
	)
