
{props "hedgerow"}
{collider "construction"}
{obstacleID "unbreakable"}
{lodclass "decor_big"}
{volume defaultmaterial "wood"}

{extender "land_patch"
	{AlignEnabled 1}
	{AlignStacked 0}
	{TerrainType "ground" "ground"}
	{UpdateEntities 0}
	{BigKernel}
}

{volume "body"
	{Tags "body"}
	{able clear {contact}{blast}{bullet}}
	{thickness 999}
	{material "ground"}
}

{armor
	{setting "body"
		{volumes "body*"}
		{threshold
			{blast {value 48}}
		}
	}
}

(define "place"
	{place "%0"
		{Linkbone "%0"}
		{entity "%1"}
		{handlebone "basis"}
	}
)