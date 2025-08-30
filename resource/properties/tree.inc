game_entity
	(include "seasons.inc")
	
	{props "tree" "destructable" "normal_light" "slow_on_crush" "invisible_crown" "wind_has_foliage"}
	{volume "crown"
		{able
			{contact 0} {contact_ground 0}
			{bullet 0} {throwing 0} {obstacle 0}
			{overlap 1}
			{touch 0}
		}
		{density 0.007}
	}
	{ZClipVisibility 1}
	{TPC_ZClip 1}
	{NoGroupMesh 1}
	{simulatorId "pillar"}
	{collider 	"tree"}
	{obstacleID "tree"}
	{mass 200}
	{props "tree" "slow_on_crush"}
;	{NoCastShadows}
;	{NoGetShadows}
	{volume defaultmaterial "wood"}
	{lodclass "decor_tree"}
	{volume "base"
		{able {touch 0} {visible 0}}
		{thickness 10}
		{tags "bole"}
	}

	(define "base_vol"
		{volume "base%0"
			{able {touch 0} {visible 0}}
			{thickness 10}
			{tags "bole"}
		}
	)

	("base_vol" args 1)
	("base_vol" args 2)
	("base_vol" args 3)
	("base_vol" args 4)
	("base_vol" args 5)
	("base_vol" args 6)
	("base_vol" args 7)
	("base_vol" args 8)
	("base_vol" args 9)

	{volume "bole"
		{able {touch 0} {visible 0} {obstacle 0}}
		{thickness 10}
		{tags "bole"}
	}

	(define "bole_vol"
		{volume "bole%0"
			{able {touch 0} {visible 0} {obstacle 0}}
			{thickness 10}
			{tags "bole"}
		}
	)

	("bole_vol" args 1)
	("bole_vol" args 2)
	("bole_vol" args 3)
	("bole_vol" args 4)
	("bole_vol" args 5)
	("bole_vol" args 6)
	("bole_vol" args 7)
	("bole_vol" args 8)
	("bole_vol" args 9)

	{volume "crown"
		{able clear {overlap} {blast}}
		{density 0.007}
	}
