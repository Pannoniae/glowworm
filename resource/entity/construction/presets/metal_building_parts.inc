
	(include "/properties/construction.inc")
	{props "steel" "parts" "big" "construction" "burning" "break_on_burn" "crushable" "no_destroyed_stamp" "slow_on_crush"}
	("armor_house_wood")
	{obstacleID "small_building"}
	{mass 1000}
	{lodclass "decor_building"}
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
